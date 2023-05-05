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
  : mulExpression plusMinusExpr* | logicExpression;

plusMinusExpr
  : (Plus | Minus) mulExpression;

mulExpression
  : atom mulDivExpr*;

mulDivExpr
  : (Multiplication | Divide) atom;

logicExpression
  : atom (Equal atom | More atom | Less atom | MoreEqual atom | LessEqual atom)?;

inBracesExpression 
  : inCurlyExpression 
  | columnConstructor
  | tableConstructor
  | inSquareExpression 
  | inParenExpression;

columnConstructor
  : LParen (ID | StringLiteral) RParen;

tableConstructor
  : LSquare idColumnConstr (Comma idColumnConstr)* RSquare;

idColumnConstr
  : (ID | columnConstructor);

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
  | StringType
  | NumberType
  | TupleType
  | LogicType;

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






