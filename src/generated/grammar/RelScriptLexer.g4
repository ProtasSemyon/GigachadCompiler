lexer grammar RelScriptLexer;
options { language=Cpp; }

tokens { INDENT, DEDENT }

@lexer::postinclude {
#include <queue>
#include <stack>
#include <string>
}

@lexer::context {
using namespace antlr4;

using TokenPtr = std::unique_ptr<Token>;

using CommonTokenPtr = std::unique_ptr<CommonToken>;

}

@lexer::declarations {

bool pendingDent = false;

int indentCount = 0;

std::queue<Token*> tokenQueue;

std::stack<int> indentStack;

Token * initialIndentToken = nullptr;

int getSavedIndent();

CommonTokenPtr createToken(int type, std::string text, Token* next);
  
}

@lexer::members {
std::unique_ptr<Token> nextToken() override;
}

@lexer::definitions {
std::unique_ptr<Token> RelScriptLexer::nextToken() {
  if (!tokenQueue.empty()) {
		Token * token = tokenQueue.front();
		tokenQueue.pop();
    return std::move(std::unique_ptr<Token>(token));
  }
  Token * next = Lexer::nextToken().release();
	if (pendingDent && initialIndentToken == nullptr && NEWLINE != next->getType()) {
		initialIndentToken = next;
	}

	if (next == nullptr || HIDDEN == next->getChannel() || NEWLINE == next->getType()) {
		return std::move(std::unique_ptr<Token>(next));
	}

	if (next->getType() == EOF) {
		indentCount = 0;
		if (!pendingDent) {
			initialIndentToken = next;
			tokenQueue.push(createToken(NEWLINE, "new line", next).release());
		}
	}

	while (indentCount != getSavedIndent()) {
		if (indentCount > getSavedIndent()) {
			indentStack.push(indentCount);
			tokenQueue.push(createToken(INDENT, "indent", next).release());
		} else {
			indentStack.pop();
			tokenQueue.push(createToken(DEDENT, "dedent", next).release());
		}
	}
	pendingDent = false;
	tokenQueue.push(next);
	Token* token = tokenQueue.front();
	tokenQueue.pop();
	return std::move(std::unique_ptr<Token>(token));
}

int RelScriptLexer::getSavedIndent() {
	if (indentStack.empty()) {
		return 0;
	} 

	return indentStack.top();
}

CommonTokenPtr RelScriptLexer::createToken(int type, std::string text, Token * next) {
	CommonTokenPtr token = std::make_unique<CommonToken>(type, text);
	if (initialIndentToken != nullptr) {
		token->setStartIndex(initialIndentToken->getStartIndex());
		token->setLine(initialIndentToken->getLine());
		token->setCharPositionInLine(initialIndentToken->getCharPositionInLine());
		token->setStopIndex(next->getStartIndex() - 1);
	}
	return std::move(token);
}
}

Assign : 'is';
Comma : ',' ;
Semi : ';' ;
Quot : '"' ;
Return : '<<';
BlockStart : '>>';
Point : '.';

//brackets
LParen : '(' ;
RParen : ')' ;
LCurly : '{' ;
RCurly : '}' ;
LSquare : '[' ;
RSquare : ']' ;

//datatype
Const : 'const';
TableType : 'table';
ColumnType : 'column';
RowType : 'row';
NumberType : 'number';
TupleType : 'tuple';
StringType : 'string';
LogicType : 'logic';

//math operands
Plus : '+';
Minus : '-';
Divide : '/';
Multiplication : '*';

//comparison operands
Less : 'less';
Equal : 'equal';
More : 'more';
LessEqual : 'lessEqual';
MoreEqual : 'moreEqual';

While : 'while';
For : 'for';
Switch : 'switch';
Case : 'case';
Default : 'default';
If : 'if';
Else : 'else';
Break : 'break';

ID
: [a-zA-Z_][a-zA-Z0-9_]*;
IntNumber : [1-9][0-9]+ | [0-9];
FloatNumber : IntNumber('.'[0-9]+);

StringLiteral
  : UnterminatedStringLiteral Quot
  ;

UnterminatedStringLiteral
  : Quot (~["\\\r\n] | '\\' (. | EOF))*
  ;

NEWLINE : ( '\r'? '\n' | '\r' ) {
	setText("EOL");
  if (pendingDent) {
    setChannel(HIDDEN);
  }
  pendingDent = true;
  indentCount = 0;
  initialIndentToken = nullptr;
};

WS : [ \t]+ {
  setChannel(HIDDEN);
  if (pendingDent) { indentCount += getText().size();}
};

BlockComment : '/*' ( BlockComment | . )*? '*/' -> channel(HIDDEN) ;   // allow nesting comments
LineComment : '//' ~[\r\n]* -> channel(HIDDEN) ;

