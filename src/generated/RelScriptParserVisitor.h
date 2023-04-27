
// Generated from RelScriptParser.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"
#include "RelScriptParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by RelScriptParser.
 */
class  RelScriptParserVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by RelScriptParser.
   */
    virtual std::any visitProgram(RelScriptParser::ProgramContext *context) = 0;

    virtual std::any visitStatement(RelScriptParser::StatementContext *context) = 0;

    virtual std::any visitMethodUsage(RelScriptParser::MethodUsageContext *context) = 0;

    virtual std::any visitAssignExpression(RelScriptParser::AssignExpressionContext *context) = 0;

    virtual std::any visitNumber(RelScriptParser::NumberContext *context) = 0;

    virtual std::any visitAtom(RelScriptParser::AtomContext *context) = 0;

    virtual std::any visitExpression(RelScriptParser::ExpressionContext *context) = 0;

    virtual std::any visitMulExpression(RelScriptParser::MulExpressionContext *context) = 0;

    virtual std::any visitLogicExpression(RelScriptParser::LogicExpressionContext *context) = 0;

    virtual std::any visitBinarySign(RelScriptParser::BinarySignContext *context) = 0;

    virtual std::any visitInBracesExpression(RelScriptParser::InBracesExpressionContext *context) = 0;

    virtual std::any visitColumnConstructor(RelScriptParser::ColumnConstructorContext *context) = 0;

    virtual std::any visitInCurlyExpression(RelScriptParser::InCurlyExpressionContext *context) = 0;

    virtual std::any visitInSquareExpression(RelScriptParser::InSquareExpressionContext *context) = 0;

    virtual std::any visitInParenExpression(RelScriptParser::InParenExpressionContext *context) = 0;

    virtual std::any visitExpressionInsideBraces(RelScriptParser::ExpressionInsideBracesContext *context) = 0;

    virtual std::any visitFunctionDeclaration(RelScriptParser::FunctionDeclarationContext *context) = 0;

    virtual std::any visitBlock(RelScriptParser::BlockContext *context) = 0;

    virtual std::any visitReturnExpression(RelScriptParser::ReturnExpressionContext *context) = 0;

    virtual std::any visitFunctionDeclarationBraces(RelScriptParser::FunctionDeclarationBracesContext *context) = 0;

    virtual std::any visitFunctionDeclarationArgs(RelScriptParser::FunctionDeclarationArgsContext *context) = 0;

    virtual std::any visitFunctionUsage(RelScriptParser::FunctionUsageContext *context) = 0;

    virtual std::any visitTypeSpecifier(RelScriptParser::TypeSpecifierContext *context) = 0;

    virtual std::any visitWhileStatement(RelScriptParser::WhileStatementContext *context) = 0;

    virtual std::any visitForStatement(RelScriptParser::ForStatementContext *context) = 0;

    virtual std::any visitSwitchStatement(RelScriptParser::SwitchStatementContext *context) = 0;

    virtual std::any visitCaseStatement(RelScriptParser::CaseStatementContext *context) = 0;

    virtual std::any visitDefaultStatement(RelScriptParser::DefaultStatementContext *context) = 0;

    virtual std::any visitIfStatement(RelScriptParser::IfStatementContext *context) = 0;


};

