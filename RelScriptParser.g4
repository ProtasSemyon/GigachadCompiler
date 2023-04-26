parser grammar RelScriptParser;
options { tokenVocab=RelScriptLexer;
language=Cpp; }

program : ( NEWLINE | statement )* EOF ;

statement 
  : (assignExpression 
  | functionDeclaration 
  | functionUsage 
  | methodUsage
  | whileStatement 
  | forStatement 
  | switchStatement 
  | ifStatement) 
  NEWLINE?
  ;

methodUsage
  :(ID | functionUsage)(Point functionUsage)+;

assignExpression 
  : Const? typeSpecifier? ID Assign expression;

number : IntNumber | FloatNumber;

atom 
  : ID 
  | number 
  | StringLiteral
  | functionUsage
  | methodUsage
  | inBracesExpression
  ;

expression
  : mulExpression (Plus mulExpression | Minus mulExpression)* | logicExpression;

mulExpression
  : atom (Multiplication atom | Divide atom)*;

logicExpression
  : atom (Equal atom | More atom | Less atom | MoreEqual atom | LessEqual atom)?;

binarySign
  : Plus
  | Minus
  | Divide
  | LessEqual
  | MoreEqual
  | Less
  | More
  | Equal;

inBracesExpression 
  : inCurlyExpression 
  | columnConstructor
  | inSquareExpression 
  | inParenExpression;

columnConstructor
  : LParen (ID | StringLiteral) Comma typeSpecifier RParen;

inCurlyExpression 
  : LCurly expressionInsideBraces RCurly;

inSquareExpression 
  : LSquare expressionInsideBraces RSquare;

inParenExpression 
  : LParen expressionInsideBraces RParen;

expressionInsideBraces 
  : expression 
  | expression Comma expressionInsideBraces;

functionDeclaration
  : typeSpecifier ID functionDeclarationBraces BlockStart NEWLINE block;

block
  : INDENT statement* returnExpression? DEDENT;

returnExpression
  : Return expression? NEWLINE;

functionDeclarationBraces
  : LParen functionDeclarationArgs? RParen;

functionDeclarationArgs
  : typeSpecifier ID | typeSpecifier ID Comma functionDeclarationArgs;

functionUsage
  : ID (LParen RParen | inParenExpression);

typeSpecifier 
  : TableType 
  | ColumnType 
  | RowType 
  | stringType
  | NumberType
  | TupleType
  | LogicType;

stringType
  : StringWord LParen IntNumber RParen;

whileStatement
  : While LParen logicExpression RParen BlockStart NEWLINE block;

forStatement
  : For LParen assignExpression? Semi logicExpression? Semi assignExpression? RParen BlockStart NEWLINE block;

switchStatement
  : Switch LParen ID RParen BlockStart NEWLINE INDENT caseStatement* defaultStatement DEDENT;

caseStatement
  : Case (StringLiteral | number) BlockStart NEWLINE block ;

defaultStatement
  : Default BlockStart NEWLINE block;

ifStatement
  : If LParen logicExpression RParen BlockStart NEWLINE block (Else BlockStart NEWLINE block)?;






