
// Generated from BrightScript.g4 by ANTLR 4.7


#include "BrightScriptListener.h"
#include "BrightScriptVisitor.h"

#include "BrightScriptParser.h"


using namespace antlrcpp;
using namespace antlr4;

BrightScriptParser::BrightScriptParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

BrightScriptParser::~BrightScriptParser() {
  delete _interpreter;
}

std::string BrightScriptParser::getGrammarFileName() const {
  return "BrightScript.g4";
}

const std::vector<std::string>& BrightScriptParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& BrightScriptParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- StartRuleContext ------------------------------------------------------------------

BrightScriptParser::StartRuleContext::StartRuleContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BrightScriptParser::StartRuleContext::EOF() {
  return getToken(BrightScriptParser::EOF, 0);
}

std::vector<BrightScriptParser::ComponentHeadContext *> BrightScriptParser::StartRuleContext::componentHead() {
  return getRuleContexts<BrightScriptParser::ComponentHeadContext>();
}

BrightScriptParser::ComponentHeadContext* BrightScriptParser::StartRuleContext::componentHead(size_t i) {
  return getRuleContext<BrightScriptParser::ComponentHeadContext>(i);
}

std::vector<BrightScriptParser::ComponentBodyContext *> BrightScriptParser::StartRuleContext::componentBody() {
  return getRuleContexts<BrightScriptParser::ComponentBodyContext>();
}

BrightScriptParser::ComponentBodyContext* BrightScriptParser::StartRuleContext::componentBody(size_t i) {
  return getRuleContext<BrightScriptParser::ComponentBodyContext>(i);
}


size_t BrightScriptParser::StartRuleContext::getRuleIndex() const {
  return BrightScriptParser::RuleStartRule;
}

void BrightScriptParser::StartRuleContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BrightScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStartRule(this);
}

void BrightScriptParser::StartRuleContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BrightScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStartRule(this);
}


antlrcpp::Any BrightScriptParser::StartRuleContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BrightScriptVisitor*>(visitor))
    return parserVisitor->visitStartRule(this);
  else
    return visitor->visitChildren(this);
}

BrightScriptParser::StartRuleContext* BrightScriptParser::startRule() {
  StartRuleContext *_localctx = _tracker.createInstance<StartRuleContext>(_ctx, getState());
  enterRule(_localctx, 0, BrightScriptParser::RuleStartRule);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(123);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(120);
        componentHead(); 
      }
      setState(125);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
    }
    setState(129);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 23) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 23)) & ((1ULL << (BrightScriptParser::FUNCTION - 23))
      | (1ULL << (BrightScriptParser::SUB - 23))
      | (1ULL << (BrightScriptParser::COMMENT - 23))
      | (1ULL << (BrightScriptParser::NEWLINE - 23)))) != 0)) {
      setState(126);
      componentBody();
      setState(131);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(132);
    match(BrightScriptParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ComponentHeadContext ------------------------------------------------------------------

BrightScriptParser::ComponentHeadContext::ComponentHeadContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<BrightScriptParser::ComponentHeadElementContext *> BrightScriptParser::ComponentHeadContext::componentHeadElement() {
  return getRuleContexts<BrightScriptParser::ComponentHeadElementContext>();
}

BrightScriptParser::ComponentHeadElementContext* BrightScriptParser::ComponentHeadContext::componentHeadElement(size_t i) {
  return getRuleContext<BrightScriptParser::ComponentHeadElementContext>(i);
}

std::vector<BrightScriptParser::EndOfLineContext *> BrightScriptParser::ComponentHeadContext::endOfLine() {
  return getRuleContexts<BrightScriptParser::EndOfLineContext>();
}

BrightScriptParser::EndOfLineContext* BrightScriptParser::ComponentHeadContext::endOfLine(size_t i) {
  return getRuleContext<BrightScriptParser::EndOfLineContext>(i);
}


size_t BrightScriptParser::ComponentHeadContext::getRuleIndex() const {
  return BrightScriptParser::RuleComponentHead;
}

void BrightScriptParser::ComponentHeadContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BrightScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComponentHead(this);
}

void BrightScriptParser::ComponentHeadContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BrightScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComponentHead(this);
}


antlrcpp::Any BrightScriptParser::ComponentHeadContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BrightScriptVisitor*>(visitor))
    return parserVisitor->visitComponentHead(this);
  else
    return visitor->visitChildren(this);
}

BrightScriptParser::ComponentHeadContext* BrightScriptParser::componentHead() {
  ComponentHeadContext *_localctx = _tracker.createInstance<ComponentHeadContext>(_ctx, getState());
  enterRule(_localctx, 2, BrightScriptParser::RuleComponentHead);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(137);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(134);
        endOfLine(); 
      }
      setState(139);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    }
    setState(140);
    componentHeadElement();
    setState(150);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(142); 
        _errHandler->sync(this);
        alt = 1;
        do {
          switch (alt) {
            case 1: {
                  setState(141);
                  endOfLine();
                  break;
                }

          default:
            throw NoViableAltException(this);
          }
          setState(144); 
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
        } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
        setState(146);
        componentHeadElement(); 
      }
      setState(152);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    }
    setState(156);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(153);
        endOfLine(); 
      }
      setState(158);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ComponentHeadElementContext ------------------------------------------------------------------

BrightScriptParser::ComponentHeadElementContext::ComponentHeadElementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BrightScriptParser::LibraryStatementContext* BrightScriptParser::ComponentHeadElementContext::libraryStatement() {
  return getRuleContext<BrightScriptParser::LibraryStatementContext>(0);
}

BrightScriptParser::ConditionalCompilationStatementContext* BrightScriptParser::ComponentHeadElementContext::conditionalCompilationStatement() {
  return getRuleContext<BrightScriptParser::ConditionalCompilationStatementContext>(0);
}

BrightScriptParser::CommentContext* BrightScriptParser::ComponentHeadElementContext::comment() {
  return getRuleContext<BrightScriptParser::CommentContext>(0);
}


size_t BrightScriptParser::ComponentHeadElementContext::getRuleIndex() const {
  return BrightScriptParser::RuleComponentHeadElement;
}

void BrightScriptParser::ComponentHeadElementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BrightScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComponentHeadElement(this);
}

void BrightScriptParser::ComponentHeadElementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BrightScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComponentHeadElement(this);
}


antlrcpp::Any BrightScriptParser::ComponentHeadElementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BrightScriptVisitor*>(visitor))
    return parserVisitor->visitComponentHeadElement(this);
  else
    return visitor->visitChildren(this);
}

BrightScriptParser::ComponentHeadElementContext* BrightScriptParser::componentHeadElement() {
  ComponentHeadElementContext *_localctx = _tracker.createInstance<ComponentHeadElementContext>(_ctx, getState());
  enterRule(_localctx, 4, BrightScriptParser::RuleComponentHeadElement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(162);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BrightScriptParser::LIBRARY: {
        enterOuterAlt(_localctx, 1);
        setState(159);
        libraryStatement();
        break;
      }

      case BrightScriptParser::CONDITIONAL_CONST:
      case BrightScriptParser::CONDITIONAL_ERROR:
      case BrightScriptParser::CONDITIONAL_IF: {
        enterOuterAlt(_localctx, 2);
        setState(160);
        conditionalCompilationStatement();
        break;
      }

      case BrightScriptParser::COMMENT: {
        enterOuterAlt(_localctx, 3);
        setState(161);
        comment();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ComponentBodyContext ------------------------------------------------------------------

BrightScriptParser::ComponentBodyContext::ComponentBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<BrightScriptParser::ComponentBodyElementContext *> BrightScriptParser::ComponentBodyContext::componentBodyElement() {
  return getRuleContexts<BrightScriptParser::ComponentBodyElementContext>();
}

BrightScriptParser::ComponentBodyElementContext* BrightScriptParser::ComponentBodyContext::componentBodyElement(size_t i) {
  return getRuleContext<BrightScriptParser::ComponentBodyElementContext>(i);
}

std::vector<BrightScriptParser::EndOfLineContext *> BrightScriptParser::ComponentBodyContext::endOfLine() {
  return getRuleContexts<BrightScriptParser::EndOfLineContext>();
}

BrightScriptParser::EndOfLineContext* BrightScriptParser::ComponentBodyContext::endOfLine(size_t i) {
  return getRuleContext<BrightScriptParser::EndOfLineContext>(i);
}


size_t BrightScriptParser::ComponentBodyContext::getRuleIndex() const {
  return BrightScriptParser::RuleComponentBody;
}

void BrightScriptParser::ComponentBodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BrightScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComponentBody(this);
}

void BrightScriptParser::ComponentBodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BrightScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComponentBody(this);
}


antlrcpp::Any BrightScriptParser::ComponentBodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BrightScriptVisitor*>(visitor))
    return parserVisitor->visitComponentBody(this);
  else
    return visitor->visitChildren(this);
}

BrightScriptParser::ComponentBodyContext* BrightScriptParser::componentBody() {
  ComponentBodyContext *_localctx = _tracker.createInstance<ComponentBodyContext>(_ctx, getState());
  enterRule(_localctx, 6, BrightScriptParser::RuleComponentBody);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(167);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BrightScriptParser::COMMENT

    || _la == BrightScriptParser::NEWLINE) {
      setState(164);
      endOfLine();
      setState(169);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(170);
    componentBodyElement();
    setState(180);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(172); 
        _errHandler->sync(this);
        _la = _input->LA(1);
        do {
          setState(171);
          endOfLine();
          setState(174); 
          _errHandler->sync(this);
          _la = _input->LA(1);
        } while (_la == BrightScriptParser::COMMENT

        || _la == BrightScriptParser::NEWLINE);
        setState(176);
        componentBodyElement(); 
      }
      setState(182);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
    }
    setState(186);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(183);
        endOfLine(); 
      }
      setState(188);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ComponentBodyElementContext ------------------------------------------------------------------

BrightScriptParser::ComponentBodyElementContext::ComponentBodyElementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BrightScriptParser::FunctionDeclarationContext* BrightScriptParser::ComponentBodyElementContext::functionDeclaration() {
  return getRuleContext<BrightScriptParser::FunctionDeclarationContext>(0);
}

BrightScriptParser::SubDeclarationContext* BrightScriptParser::ComponentBodyElementContext::subDeclaration() {
  return getRuleContext<BrightScriptParser::SubDeclarationContext>(0);
}


size_t BrightScriptParser::ComponentBodyElementContext::getRuleIndex() const {
  return BrightScriptParser::RuleComponentBodyElement;
}

void BrightScriptParser::ComponentBodyElementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BrightScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComponentBodyElement(this);
}

void BrightScriptParser::ComponentBodyElementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BrightScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComponentBodyElement(this);
}


antlrcpp::Any BrightScriptParser::ComponentBodyElementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BrightScriptVisitor*>(visitor))
    return parserVisitor->visitComponentBodyElement(this);
  else
    return visitor->visitChildren(this);
}

BrightScriptParser::ComponentBodyElementContext* BrightScriptParser::componentBodyElement() {
  ComponentBodyElementContext *_localctx = _tracker.createInstance<ComponentBodyElementContext>(_ctx, getState());
  enterRule(_localctx, 8, BrightScriptParser::RuleComponentBodyElement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(191);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BrightScriptParser::FUNCTION: {
        enterOuterAlt(_localctx, 1);
        setState(189);
        functionDeclaration();
        break;
      }

      case BrightScriptParser::SUB: {
        enterOuterAlt(_localctx, 2);
        setState(190);
        subDeclaration();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

BrightScriptParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<BrightScriptParser::BlockStatementContext *> BrightScriptParser::BlockContext::blockStatement() {
  return getRuleContexts<BrightScriptParser::BlockStatementContext>();
}

BrightScriptParser::BlockStatementContext* BrightScriptParser::BlockContext::blockStatement(size_t i) {
  return getRuleContext<BrightScriptParser::BlockStatementContext>(i);
}

std::vector<BrightScriptParser::EndOfStatementContext *> BrightScriptParser::BlockContext::endOfStatement() {
  return getRuleContexts<BrightScriptParser::EndOfStatementContext>();
}

BrightScriptParser::EndOfStatementContext* BrightScriptParser::BlockContext::endOfStatement(size_t i) {
  return getRuleContext<BrightScriptParser::EndOfStatementContext>(i);
}


size_t BrightScriptParser::BlockContext::getRuleIndex() const {
  return BrightScriptParser::RuleBlock;
}

void BrightScriptParser::BlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BrightScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlock(this);
}

void BrightScriptParser::BlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BrightScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlock(this);
}


antlrcpp::Any BrightScriptParser::BlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BrightScriptVisitor*>(visitor))
    return parserVisitor->visitBlock(this);
  else
    return visitor->visitChildren(this);
}

BrightScriptParser::BlockContext* BrightScriptParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 10, BrightScriptParser::RuleBlock);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(193);
    blockStatement();
    setState(199);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(194);
        endOfStatement();
        setState(195);
        blockStatement(); 
      }
      setState(201);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx);
    }
    setState(203); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(202);
              endOfStatement();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(205); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockStatementContext ------------------------------------------------------------------

BrightScriptParser::BlockStatementContext::BlockStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BrightScriptParser::CommentContext* BrightScriptParser::BlockStatementContext::comment() {
  return getRuleContext<BrightScriptParser::CommentContext>(0);
}

BrightScriptParser::ConditionalCompilationStatementContext* BrightScriptParser::BlockStatementContext::conditionalCompilationStatement() {
  return getRuleContext<BrightScriptParser::ConditionalCompilationStatementContext>(0);
}

BrightScriptParser::DimStatementContext* BrightScriptParser::BlockStatementContext::dimStatement() {
  return getRuleContext<BrightScriptParser::DimStatementContext>(0);
}

BrightScriptParser::ExitStatementContext* BrightScriptParser::BlockStatementContext::exitStatement() {
  return getRuleContext<BrightScriptParser::ExitStatementContext>(0);
}

BrightScriptParser::ForStatementContext* BrightScriptParser::BlockStatementContext::forStatement() {
  return getRuleContext<BrightScriptParser::ForStatementContext>(0);
}

BrightScriptParser::ForEachStatementContext* BrightScriptParser::BlockStatementContext::forEachStatement() {
  return getRuleContext<BrightScriptParser::ForEachStatementContext>(0);
}

BrightScriptParser::IfThenElseStatementContext* BrightScriptParser::BlockStatementContext::ifThenElseStatement() {
  return getRuleContext<BrightScriptParser::IfThenElseStatementContext>(0);
}

BrightScriptParser::GotoStatementContext* BrightScriptParser::BlockStatementContext::gotoStatement() {
  return getRuleContext<BrightScriptParser::GotoStatementContext>(0);
}

BrightScriptParser::LabelStatementContext* BrightScriptParser::BlockStatementContext::labelStatement() {
  return getRuleContext<BrightScriptParser::LabelStatementContext>(0);
}

BrightScriptParser::NextStatementContext* BrightScriptParser::BlockStatementContext::nextStatement() {
  return getRuleContext<BrightScriptParser::NextStatementContext>(0);
}

BrightScriptParser::PrintStatementContext* BrightScriptParser::BlockStatementContext::printStatement() {
  return getRuleContext<BrightScriptParser::PrintStatementContext>(0);
}

BrightScriptParser::ReturnStatementContext* BrightScriptParser::BlockStatementContext::returnStatement() {
  return getRuleContext<BrightScriptParser::ReturnStatementContext>(0);
}

BrightScriptParser::StopStatementContext* BrightScriptParser::BlockStatementContext::stopStatement() {
  return getRuleContext<BrightScriptParser::StopStatementContext>(0);
}

BrightScriptParser::WhileStatementContext* BrightScriptParser::BlockStatementContext::whileStatement() {
  return getRuleContext<BrightScriptParser::WhileStatementContext>(0);
}

BrightScriptParser::EndStatementContext* BrightScriptParser::BlockStatementContext::endStatement() {
  return getRuleContext<BrightScriptParser::EndStatementContext>(0);
}

BrightScriptParser::ExpressionContext* BrightScriptParser::BlockStatementContext::expression() {
  return getRuleContext<BrightScriptParser::ExpressionContext>(0);
}


size_t BrightScriptParser::BlockStatementContext::getRuleIndex() const {
  return BrightScriptParser::RuleBlockStatement;
}

void BrightScriptParser::BlockStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BrightScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlockStatement(this);
}

void BrightScriptParser::BlockStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BrightScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlockStatement(this);
}


antlrcpp::Any BrightScriptParser::BlockStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BrightScriptVisitor*>(visitor))
    return parserVisitor->visitBlockStatement(this);
  else
    return visitor->visitChildren(this);
}

BrightScriptParser::BlockStatementContext* BrightScriptParser::blockStatement() {
  BlockStatementContext *_localctx = _tracker.createInstance<BlockStatementContext>(_ctx, getState());
  enterRule(_localctx, 12, BrightScriptParser::RuleBlockStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(223);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(207);
      comment();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(208);
      conditionalCompilationStatement();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(209);
      dimStatement();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(210);
      exitStatement();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(211);
      forStatement();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(212);
      forEachStatement();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(213);
      ifThenElseStatement();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(214);
      gotoStatement();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(215);
      labelStatement();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(216);
      nextStatement();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(217);
      printStatement();
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(218);
      returnStatement();
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(219);
      stopStatement();
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(220);
      whileStatement();
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(221);
      endStatement();
      break;
    }

    case 16: {
      enterOuterAlt(_localctx, 16);
      setState(222);
      expression(0);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArrayInitializerContext ------------------------------------------------------------------

BrightScriptParser::ArrayInitializerContext::ArrayInitializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BrightScriptParser::ArrayInitializerContext::OPEN_BRACKET() {
  return getToken(BrightScriptParser::OPEN_BRACKET, 0);
}

tree::TerminalNode* BrightScriptParser::ArrayInitializerContext::CLOSE_BRACKET() {
  return getToken(BrightScriptParser::CLOSE_BRACKET, 0);
}

std::vector<tree::TerminalNode *> BrightScriptParser::ArrayInitializerContext::NEWLINE() {
  return getTokens(BrightScriptParser::NEWLINE);
}

tree::TerminalNode* BrightScriptParser::ArrayInitializerContext::NEWLINE(size_t i) {
  return getToken(BrightScriptParser::NEWLINE, i);
}

std::vector<BrightScriptParser::ExpressionContext *> BrightScriptParser::ArrayInitializerContext::expression() {
  return getRuleContexts<BrightScriptParser::ExpressionContext>();
}

BrightScriptParser::ExpressionContext* BrightScriptParser::ArrayInitializerContext::expression(size_t i) {
  return getRuleContext<BrightScriptParser::ExpressionContext>(i);
}

std::vector<BrightScriptParser::ArrayInitializerContext *> BrightScriptParser::ArrayInitializerContext::arrayInitializer() {
  return getRuleContexts<BrightScriptParser::ArrayInitializerContext>();
}

BrightScriptParser::ArrayInitializerContext* BrightScriptParser::ArrayInitializerContext::arrayInitializer(size_t i) {
  return getRuleContext<BrightScriptParser::ArrayInitializerContext>(i);
}

std::vector<BrightScriptParser::AssociativeArrayInitializerContext *> BrightScriptParser::ArrayInitializerContext::associativeArrayInitializer() {
  return getRuleContexts<BrightScriptParser::AssociativeArrayInitializerContext>();
}

BrightScriptParser::AssociativeArrayInitializerContext* BrightScriptParser::ArrayInitializerContext::associativeArrayInitializer(size_t i) {
  return getRuleContext<BrightScriptParser::AssociativeArrayInitializerContext>(i);
}

std::vector<tree::TerminalNode *> BrightScriptParser::ArrayInitializerContext::COMMA() {
  return getTokens(BrightScriptParser::COMMA);
}

tree::TerminalNode* BrightScriptParser::ArrayInitializerContext::COMMA(size_t i) {
  return getToken(BrightScriptParser::COMMA, i);
}

std::vector<BrightScriptParser::EndOfLineContext *> BrightScriptParser::ArrayInitializerContext::endOfLine() {
  return getRuleContexts<BrightScriptParser::EndOfLineContext>();
}

BrightScriptParser::EndOfLineContext* BrightScriptParser::ArrayInitializerContext::endOfLine(size_t i) {
  return getRuleContext<BrightScriptParser::EndOfLineContext>(i);
}


size_t BrightScriptParser::ArrayInitializerContext::getRuleIndex() const {
  return BrightScriptParser::RuleArrayInitializer;
}

void BrightScriptParser::ArrayInitializerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BrightScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArrayInitializer(this);
}

void BrightScriptParser::ArrayInitializerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BrightScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArrayInitializer(this);
}


antlrcpp::Any BrightScriptParser::ArrayInitializerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BrightScriptVisitor*>(visitor))
    return parserVisitor->visitArrayInitializer(this);
  else
    return visitor->visitChildren(this);
}

BrightScriptParser::ArrayInitializerContext* BrightScriptParser::arrayInitializer() {
  ArrayInitializerContext *_localctx = _tracker.createInstance<ArrayInitializerContext>(_ctx, getState());
  enterRule(_localctx, 14, BrightScriptParser::RuleArrayInitializer);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(225);
    match(BrightScriptParser::OPEN_BRACKET);
    setState(229);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BrightScriptParser::NEWLINE) {
      setState(226);
      match(BrightScriptParser::NEWLINE);
      setState(231);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(245);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << BrightScriptParser::BOX)
      | (1ULL << BrightScriptParser::CREATEOBJECT)
      | (1ULL << BrightScriptParser::EVAL)
      | (1ULL << BrightScriptParser::FALSE)
      | (1ULL << BrightScriptParser::GETGLOBALAA)
      | (1ULL << BrightScriptParser::GETLASTRUNCOMPILEERROR)
      | (1ULL << BrightScriptParser::GETLASTRUNRUNTIMEERROR)
      | (1ULL << BrightScriptParser::INVALID)
      | (1ULL << BrightScriptParser::NOT)
      | (1ULL << BrightScriptParser::RUN)
      | (1ULL << BrightScriptParser::STRING)
      | (1ULL << BrightScriptParser::TAB)
      | (1ULL << BrightScriptParser::TRUE)
      | (1ULL << BrightScriptParser::TYPE)
      | (1ULL << BrightScriptParser::STRING_LITERAL)
      | (1ULL << BrightScriptParser::INT_LITERAL)
      | (1ULL << BrightScriptParser::FLOAT_LITERAL)
      | (1ULL << BrightScriptParser::IDENTIFIER))) != 0) || ((((_la - 78) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 78)) & ((1ULL << (BrightScriptParser::OPEN_BRACKET - 78))
      | (1ULL << (BrightScriptParser::OPEN_BRACE - 78))
      | (1ULL << (BrightScriptParser::OPEN_PARENTHESIS - 78))
      | (1ULL << (BrightScriptParser::ADD - 78))
      | (1ULL << (BrightScriptParser::SUBTRACT - 78)))) != 0)) {
      setState(235);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case BrightScriptParser::BOX:
        case BrightScriptParser::CREATEOBJECT:
        case BrightScriptParser::EVAL:
        case BrightScriptParser::FALSE:
        case BrightScriptParser::GETGLOBALAA:
        case BrightScriptParser::GETLASTRUNCOMPILEERROR:
        case BrightScriptParser::GETLASTRUNRUNTIMEERROR:
        case BrightScriptParser::INVALID:
        case BrightScriptParser::NOT:
        case BrightScriptParser::RUN:
        case BrightScriptParser::STRING:
        case BrightScriptParser::TAB:
        case BrightScriptParser::TRUE:
        case BrightScriptParser::TYPE:
        case BrightScriptParser::STRING_LITERAL:
        case BrightScriptParser::INT_LITERAL:
        case BrightScriptParser::FLOAT_LITERAL:
        case BrightScriptParser::IDENTIFIER:
        case BrightScriptParser::OPEN_PARENTHESIS:
        case BrightScriptParser::ADD:
        case BrightScriptParser::SUBTRACT: {
          setState(232);
          expression(0);
          break;
        }

        case BrightScriptParser::OPEN_BRACKET: {
          setState(233);
          arrayInitializer();
          break;
        }

        case BrightScriptParser::OPEN_BRACE: {
          setState(234);
          associativeArrayInitializer();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(238);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == BrightScriptParser::COMMA) {
        setState(237);
        match(BrightScriptParser::COMMA);
      }
      setState(241);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == BrightScriptParser::COMMENT

      || _la == BrightScriptParser::NEWLINE) {
        setState(240);
        endOfLine();
      }
      setState(247);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(248);
    match(BrightScriptParser::CLOSE_BRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssociativeArrayInitializerContext ------------------------------------------------------------------

BrightScriptParser::AssociativeArrayInitializerContext::AssociativeArrayInitializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BrightScriptParser::AssociativeArrayInitializerContext::OPEN_BRACE() {
  return getToken(BrightScriptParser::OPEN_BRACE, 0);
}

tree::TerminalNode* BrightScriptParser::AssociativeArrayInitializerContext::CLOSE_BRACE() {
  return getToken(BrightScriptParser::CLOSE_BRACE, 0);
}

std::vector<tree::TerminalNode *> BrightScriptParser::AssociativeArrayInitializerContext::NEWLINE() {
  return getTokens(BrightScriptParser::NEWLINE);
}

tree::TerminalNode* BrightScriptParser::AssociativeArrayInitializerContext::NEWLINE(size_t i) {
  return getToken(BrightScriptParser::NEWLINE, i);
}

std::vector<BrightScriptParser::AssociativeElementInitializerContext *> BrightScriptParser::AssociativeArrayInitializerContext::associativeElementInitializer() {
  return getRuleContexts<BrightScriptParser::AssociativeElementInitializerContext>();
}

BrightScriptParser::AssociativeElementInitializerContext* BrightScriptParser::AssociativeArrayInitializerContext::associativeElementInitializer(size_t i) {
  return getRuleContext<BrightScriptParser::AssociativeElementInitializerContext>(i);
}

std::vector<tree::TerminalNode *> BrightScriptParser::AssociativeArrayInitializerContext::COMMA() {
  return getTokens(BrightScriptParser::COMMA);
}

tree::TerminalNode* BrightScriptParser::AssociativeArrayInitializerContext::COMMA(size_t i) {
  return getToken(BrightScriptParser::COMMA, i);
}

std::vector<BrightScriptParser::EndOfLineContext *> BrightScriptParser::AssociativeArrayInitializerContext::endOfLine() {
  return getRuleContexts<BrightScriptParser::EndOfLineContext>();
}

BrightScriptParser::EndOfLineContext* BrightScriptParser::AssociativeArrayInitializerContext::endOfLine(size_t i) {
  return getRuleContext<BrightScriptParser::EndOfLineContext>(i);
}


size_t BrightScriptParser::AssociativeArrayInitializerContext::getRuleIndex() const {
  return BrightScriptParser::RuleAssociativeArrayInitializer;
}

void BrightScriptParser::AssociativeArrayInitializerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BrightScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssociativeArrayInitializer(this);
}

void BrightScriptParser::AssociativeArrayInitializerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BrightScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssociativeArrayInitializer(this);
}


antlrcpp::Any BrightScriptParser::AssociativeArrayInitializerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BrightScriptVisitor*>(visitor))
    return parserVisitor->visitAssociativeArrayInitializer(this);
  else
    return visitor->visitChildren(this);
}

BrightScriptParser::AssociativeArrayInitializerContext* BrightScriptParser::associativeArrayInitializer() {
  AssociativeArrayInitializerContext *_localctx = _tracker.createInstance<AssociativeArrayInitializerContext>(_ctx, getState());
  enterRule(_localctx, 16, BrightScriptParser::RuleAssociativeArrayInitializer);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(250);
    match(BrightScriptParser::OPEN_BRACE);
    setState(254);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(251);
        match(BrightScriptParser::NEWLINE); 
      }
      setState(256);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx);
    }
    setState(274);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << BrightScriptParser::AND)
      | (1ULL << BrightScriptParser::BOX)
      | (1ULL << BrightScriptParser::CREATEOBJECT)
      | (1ULL << BrightScriptParser::DIM)
      | (1ULL << BrightScriptParser::EACH)
      | (1ULL << BrightScriptParser::ELSE)
      | (1ULL << BrightScriptParser::ELSEIF)
      | (1ULL << BrightScriptParser::END)
      | (1ULL << BrightScriptParser::ENDFUNCTION)
      | (1ULL << BrightScriptParser::ENDIF)
      | (1ULL << BrightScriptParser::ENDSUB)
      | (1ULL << BrightScriptParser::ENDWHILE)
      | (1ULL << BrightScriptParser::EXIT)
      | (1ULL << BrightScriptParser::EXITWHILE)
      | (1ULL << BrightScriptParser::EVAL)
      | (1ULL << BrightScriptParser::FALSE)
      | (1ULL << BrightScriptParser::FOR)
      | (1ULL << BrightScriptParser::FUNCTION)
      | (1ULL << BrightScriptParser::GETGLOBALAA)
      | (1ULL << BrightScriptParser::GETLASTRUNCOMPILEERROR)
      | (1ULL << BrightScriptParser::GETLASTRUNRUNTIMEERROR)
      | (1ULL << BrightScriptParser::GOTO)
      | (1ULL << BrightScriptParser::IF)
      | (1ULL << BrightScriptParser::INVALID)
      | (1ULL << BrightScriptParser::LET)
      | (1ULL << BrightScriptParser::LINE_NUM)
      | (1ULL << BrightScriptParser::NEXT)
      | (1ULL << BrightScriptParser::NOT)
      | (1ULL << BrightScriptParser::OBJFUN)
      | (1ULL << BrightScriptParser::OR)
      | (1ULL << BrightScriptParser::POS)
      | (1ULL << BrightScriptParser::PRINT)
      | (1ULL << BrightScriptParser::REM)
      | (1ULL << BrightScriptParser::RETURN)
      | (1ULL << BrightScriptParser::RUN)
      | (1ULL << BrightScriptParser::STEP)
      | (1ULL << BrightScriptParser::STOP)
      | (1ULL << BrightScriptParser::SUB)
      | (1ULL << BrightScriptParser::TAB)
      | (1ULL << BrightScriptParser::THEN)
      | (1ULL << BrightScriptParser::TO)
      | (1ULL << BrightScriptParser::TRUE)
      | (1ULL << BrightScriptParser::TYPE)
      | (1ULL << BrightScriptParser::WHILE)
      | (1ULL << BrightScriptParser::STRING_LITERAL)
      | (1ULL << BrightScriptParser::IDENTIFIER))) != 0)) {
      setState(257);
      associativeElementInitializer();
      setState(271);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(260);
          _errHandler->sync(this);
          switch (_input->LA(1)) {
            case BrightScriptParser::COMMA: {
              setState(258);
              match(BrightScriptParser::COMMA);
              break;
            }

            case BrightScriptParser::COMMENT:
            case BrightScriptParser::NEWLINE: {
              setState(259);
              endOfLine();
              break;
            }

          default:
            throw NoViableAltException(this);
          }
          setState(265);
          _errHandler->sync(this);
          _la = _input->LA(1);
          while (_la == BrightScriptParser::NEWLINE) {
            setState(262);
            match(BrightScriptParser::NEWLINE);
            setState(267);
            _errHandler->sync(this);
            _la = _input->LA(1);
          }
          setState(268);
          associativeElementInitializer(); 
        }
        setState(273);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx);
      }
    }
    setState(277);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BrightScriptParser::COMMA) {
      setState(276);
      match(BrightScriptParser::COMMA);
    }
    setState(282);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BrightScriptParser::NEWLINE) {
      setState(279);
      match(BrightScriptParser::NEWLINE);
      setState(284);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(285);
    match(BrightScriptParser::CLOSE_BRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssociativeElementInitializerContext ------------------------------------------------------------------

BrightScriptParser::AssociativeElementInitializerContext::AssociativeElementInitializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BrightScriptParser::AssociativeElementInitializerContext::COLON() {
  return getToken(BrightScriptParser::COLON, 0);
}

BrightScriptParser::AssignableExpressionContext* BrightScriptParser::AssociativeElementInitializerContext::assignableExpression() {
  return getRuleContext<BrightScriptParser::AssignableExpressionContext>(0);
}

BrightScriptParser::IdentifierContext* BrightScriptParser::AssociativeElementInitializerContext::identifier() {
  return getRuleContext<BrightScriptParser::IdentifierContext>(0);
}

BrightScriptParser::ReservedWordContext* BrightScriptParser::AssociativeElementInitializerContext::reservedWord() {
  return getRuleContext<BrightScriptParser::ReservedWordContext>(0);
}

BrightScriptParser::StringLiteralContext* BrightScriptParser::AssociativeElementInitializerContext::stringLiteral() {
  return getRuleContext<BrightScriptParser::StringLiteralContext>(0);
}


size_t BrightScriptParser::AssociativeElementInitializerContext::getRuleIndex() const {
  return BrightScriptParser::RuleAssociativeElementInitializer;
}

void BrightScriptParser::AssociativeElementInitializerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BrightScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssociativeElementInitializer(this);
}

void BrightScriptParser::AssociativeElementInitializerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BrightScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssociativeElementInitializer(this);
}


antlrcpp::Any BrightScriptParser::AssociativeElementInitializerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BrightScriptVisitor*>(visitor))
    return parserVisitor->visitAssociativeElementInitializer(this);
  else
    return visitor->visitChildren(this);
}

BrightScriptParser::AssociativeElementInitializerContext* BrightScriptParser::associativeElementInitializer() {
  AssociativeElementInitializerContext *_localctx = _tracker.createInstance<AssociativeElementInitializerContext>(_ctx, getState());
  enterRule(_localctx, 18, BrightScriptParser::RuleAssociativeElementInitializer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(290);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BrightScriptParser::IDENTIFIER: {
        setState(287);
        identifier();
        break;
      }

      case BrightScriptParser::AND:
      case BrightScriptParser::BOX:
      case BrightScriptParser::CREATEOBJECT:
      case BrightScriptParser::DIM:
      case BrightScriptParser::EACH:
      case BrightScriptParser::ELSE:
      case BrightScriptParser::ELSEIF:
      case BrightScriptParser::END:
      case BrightScriptParser::ENDFUNCTION:
      case BrightScriptParser::ENDIF:
      case BrightScriptParser::ENDSUB:
      case BrightScriptParser::ENDWHILE:
      case BrightScriptParser::EXIT:
      case BrightScriptParser::EXITWHILE:
      case BrightScriptParser::EVAL:
      case BrightScriptParser::FALSE:
      case BrightScriptParser::FOR:
      case BrightScriptParser::FUNCTION:
      case BrightScriptParser::GETGLOBALAA:
      case BrightScriptParser::GETLASTRUNCOMPILEERROR:
      case BrightScriptParser::GETLASTRUNRUNTIMEERROR:
      case BrightScriptParser::GOTO:
      case BrightScriptParser::IF:
      case BrightScriptParser::INVALID:
      case BrightScriptParser::LET:
      case BrightScriptParser::LINE_NUM:
      case BrightScriptParser::NEXT:
      case BrightScriptParser::NOT:
      case BrightScriptParser::OBJFUN:
      case BrightScriptParser::OR:
      case BrightScriptParser::POS:
      case BrightScriptParser::PRINT:
      case BrightScriptParser::REM:
      case BrightScriptParser::RETURN:
      case BrightScriptParser::RUN:
      case BrightScriptParser::STEP:
      case BrightScriptParser::STOP:
      case BrightScriptParser::SUB:
      case BrightScriptParser::TAB:
      case BrightScriptParser::THEN:
      case BrightScriptParser::TO:
      case BrightScriptParser::TRUE:
      case BrightScriptParser::TYPE:
      case BrightScriptParser::WHILE: {
        setState(288);
        reservedWord();
        break;
      }

      case BrightScriptParser::STRING_LITERAL: {
        setState(289);
        stringLiteral();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(292);
    match(BrightScriptParser::COLON);
    setState(293);
    assignableExpression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConditionalCompilationStatementContext ------------------------------------------------------------------

BrightScriptParser::ConditionalCompilationStatementContext::ConditionalCompilationStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BrightScriptParser::ConditionalCompilationConstStatementContext* BrightScriptParser::ConditionalCompilationStatementContext::conditionalCompilationConstStatement() {
  return getRuleContext<BrightScriptParser::ConditionalCompilationConstStatementContext>(0);
}

BrightScriptParser::ConditionalCompilationErrorStatementContext* BrightScriptParser::ConditionalCompilationStatementContext::conditionalCompilationErrorStatement() {
  return getRuleContext<BrightScriptParser::ConditionalCompilationErrorStatementContext>(0);
}

BrightScriptParser::ConditionalCompilationIfThenElseStatementContext* BrightScriptParser::ConditionalCompilationStatementContext::conditionalCompilationIfThenElseStatement() {
  return getRuleContext<BrightScriptParser::ConditionalCompilationIfThenElseStatementContext>(0);
}


size_t BrightScriptParser::ConditionalCompilationStatementContext::getRuleIndex() const {
  return BrightScriptParser::RuleConditionalCompilationStatement;
}

void BrightScriptParser::ConditionalCompilationStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BrightScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConditionalCompilationStatement(this);
}

void BrightScriptParser::ConditionalCompilationStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BrightScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConditionalCompilationStatement(this);
}


antlrcpp::Any BrightScriptParser::ConditionalCompilationStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BrightScriptVisitor*>(visitor))
    return parserVisitor->visitConditionalCompilationStatement(this);
  else
    return visitor->visitChildren(this);
}

BrightScriptParser::ConditionalCompilationStatementContext* BrightScriptParser::conditionalCompilationStatement() {
  ConditionalCompilationStatementContext *_localctx = _tracker.createInstance<ConditionalCompilationStatementContext>(_ctx, getState());
  enterRule(_localctx, 20, BrightScriptParser::RuleConditionalCompilationStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(298);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BrightScriptParser::CONDITIONAL_CONST: {
        enterOuterAlt(_localctx, 1);
        setState(295);
        conditionalCompilationConstStatement();
        break;
      }

      case BrightScriptParser::CONDITIONAL_ERROR: {
        enterOuterAlt(_localctx, 2);
        setState(296);
        conditionalCompilationErrorStatement();
        break;
      }

      case BrightScriptParser::CONDITIONAL_IF: {
        enterOuterAlt(_localctx, 3);
        setState(297);
        conditionalCompilationIfThenElseStatement();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConditionalCompilationConstStatementContext ------------------------------------------------------------------

BrightScriptParser::ConditionalCompilationConstStatementContext::ConditionalCompilationConstStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BrightScriptParser::ConditionalCompilationConstStatementContext::CONDITIONAL_CONST() {
  return getToken(BrightScriptParser::CONDITIONAL_CONST, 0);
}

BrightScriptParser::UntypedIdentifierContext* BrightScriptParser::ConditionalCompilationConstStatementContext::untypedIdentifier() {
  return getRuleContext<BrightScriptParser::UntypedIdentifierContext>(0);
}

tree::TerminalNode* BrightScriptParser::ConditionalCompilationConstStatementContext::EQUALS() {
  return getToken(BrightScriptParser::EQUALS, 0);
}

BrightScriptParser::ExpressionContext* BrightScriptParser::ConditionalCompilationConstStatementContext::expression() {
  return getRuleContext<BrightScriptParser::ExpressionContext>(0);
}


size_t BrightScriptParser::ConditionalCompilationConstStatementContext::getRuleIndex() const {
  return BrightScriptParser::RuleConditionalCompilationConstStatement;
}

void BrightScriptParser::ConditionalCompilationConstStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BrightScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConditionalCompilationConstStatement(this);
}

void BrightScriptParser::ConditionalCompilationConstStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BrightScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConditionalCompilationConstStatement(this);
}


antlrcpp::Any BrightScriptParser::ConditionalCompilationConstStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BrightScriptVisitor*>(visitor))
    return parserVisitor->visitConditionalCompilationConstStatement(this);
  else
    return visitor->visitChildren(this);
}

BrightScriptParser::ConditionalCompilationConstStatementContext* BrightScriptParser::conditionalCompilationConstStatement() {
  ConditionalCompilationConstStatementContext *_localctx = _tracker.createInstance<ConditionalCompilationConstStatementContext>(_ctx, getState());
  enterRule(_localctx, 22, BrightScriptParser::RuleConditionalCompilationConstStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(300);
    match(BrightScriptParser::CONDITIONAL_CONST);
    setState(301);
    untypedIdentifier();
    setState(302);
    match(BrightScriptParser::EQUALS);
    setState(303);
    expression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConditionalCompilationErrorStatementContext ------------------------------------------------------------------

BrightScriptParser::ConditionalCompilationErrorStatementContext::ConditionalCompilationErrorStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BrightScriptParser::ConditionalCompilationErrorStatementContext::CONDITIONAL_ERROR() {
  return getToken(BrightScriptParser::CONDITIONAL_ERROR, 0);
}


size_t BrightScriptParser::ConditionalCompilationErrorStatementContext::getRuleIndex() const {
  return BrightScriptParser::RuleConditionalCompilationErrorStatement;
}

void BrightScriptParser::ConditionalCompilationErrorStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BrightScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConditionalCompilationErrorStatement(this);
}

void BrightScriptParser::ConditionalCompilationErrorStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BrightScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConditionalCompilationErrorStatement(this);
}


antlrcpp::Any BrightScriptParser::ConditionalCompilationErrorStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BrightScriptVisitor*>(visitor))
    return parserVisitor->visitConditionalCompilationErrorStatement(this);
  else
    return visitor->visitChildren(this);
}

BrightScriptParser::ConditionalCompilationErrorStatementContext* BrightScriptParser::conditionalCompilationErrorStatement() {
  ConditionalCompilationErrorStatementContext *_localctx = _tracker.createInstance<ConditionalCompilationErrorStatementContext>(_ctx, getState());
  enterRule(_localctx, 24, BrightScriptParser::RuleConditionalCompilationErrorStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(305);
    match(BrightScriptParser::CONDITIONAL_ERROR);
    setState(309);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, _ctx);
    while (alt != 1 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1 + 1) {
        setState(306);
        matchWildcard(); 
      }
      setState(311);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConditionalCompilationIfThenElseStatementContext ------------------------------------------------------------------

BrightScriptParser::ConditionalCompilationIfThenElseStatementContext::ConditionalCompilationIfThenElseStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BrightScriptParser::ConditionalCompilationIfBlockStatementContext* BrightScriptParser::ConditionalCompilationIfThenElseStatementContext::conditionalCompilationIfBlockStatement() {
  return getRuleContext<BrightScriptParser::ConditionalCompilationIfBlockStatementContext>(0);
}

tree::TerminalNode* BrightScriptParser::ConditionalCompilationIfThenElseStatementContext::CONDITIONAL_ENDIF() {
  return getToken(BrightScriptParser::CONDITIONAL_ENDIF, 0);
}

std::vector<BrightScriptParser::ConditionalCompilationIfElseIfBlockStatementContext *> BrightScriptParser::ConditionalCompilationIfThenElseStatementContext::conditionalCompilationIfElseIfBlockStatement() {
  return getRuleContexts<BrightScriptParser::ConditionalCompilationIfElseIfBlockStatementContext>();
}

BrightScriptParser::ConditionalCompilationIfElseIfBlockStatementContext* BrightScriptParser::ConditionalCompilationIfThenElseStatementContext::conditionalCompilationIfElseIfBlockStatement(size_t i) {
  return getRuleContext<BrightScriptParser::ConditionalCompilationIfElseIfBlockStatementContext>(i);
}

BrightScriptParser::ConditionalCompilationIfElseBlockStatementContext* BrightScriptParser::ConditionalCompilationIfThenElseStatementContext::conditionalCompilationIfElseBlockStatement() {
  return getRuleContext<BrightScriptParser::ConditionalCompilationIfElseBlockStatementContext>(0);
}


size_t BrightScriptParser::ConditionalCompilationIfThenElseStatementContext::getRuleIndex() const {
  return BrightScriptParser::RuleConditionalCompilationIfThenElseStatement;
}

void BrightScriptParser::ConditionalCompilationIfThenElseStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BrightScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConditionalCompilationIfThenElseStatement(this);
}

void BrightScriptParser::ConditionalCompilationIfThenElseStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BrightScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConditionalCompilationIfThenElseStatement(this);
}


antlrcpp::Any BrightScriptParser::ConditionalCompilationIfThenElseStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BrightScriptVisitor*>(visitor))
    return parserVisitor->visitConditionalCompilationIfThenElseStatement(this);
  else
    return visitor->visitChildren(this);
}

BrightScriptParser::ConditionalCompilationIfThenElseStatementContext* BrightScriptParser::conditionalCompilationIfThenElseStatement() {
  ConditionalCompilationIfThenElseStatementContext *_localctx = _tracker.createInstance<ConditionalCompilationIfThenElseStatementContext>(_ctx, getState());
  enterRule(_localctx, 26, BrightScriptParser::RuleConditionalCompilationIfThenElseStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(312);
    conditionalCompilationIfBlockStatement();
    setState(316);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BrightScriptParser::CONDITIONAL_ELSEIF) {
      setState(313);
      conditionalCompilationIfElseIfBlockStatement();
      setState(318);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(320);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BrightScriptParser::CONDITIONAL_ELSE) {
      setState(319);
      conditionalCompilationIfElseBlockStatement();
    }
    setState(322);
    match(BrightScriptParser::CONDITIONAL_ENDIF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConditionalCompilationIfBlockStatementContext ------------------------------------------------------------------

BrightScriptParser::ConditionalCompilationIfBlockStatementContext::ConditionalCompilationIfBlockStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BrightScriptParser::ConditionalCompilationIfBlockStatementContext::CONDITIONAL_IF() {
  return getToken(BrightScriptParser::CONDITIONAL_IF, 0);
}

BrightScriptParser::ExpressionContext* BrightScriptParser::ConditionalCompilationIfBlockStatementContext::expression() {
  return getRuleContext<BrightScriptParser::ExpressionContext>(0);
}

tree::TerminalNode* BrightScriptParser::ConditionalCompilationIfBlockStatementContext::THEN() {
  return getToken(BrightScriptParser::THEN, 0);
}

std::vector<BrightScriptParser::EndOfStatementContext *> BrightScriptParser::ConditionalCompilationIfBlockStatementContext::endOfStatement() {
  return getRuleContexts<BrightScriptParser::EndOfStatementContext>();
}

BrightScriptParser::EndOfStatementContext* BrightScriptParser::ConditionalCompilationIfBlockStatementContext::endOfStatement(size_t i) {
  return getRuleContext<BrightScriptParser::EndOfStatementContext>(i);
}

std::vector<BrightScriptParser::BlockContext *> BrightScriptParser::ConditionalCompilationIfBlockStatementContext::block() {
  return getRuleContexts<BrightScriptParser::BlockContext>();
}

BrightScriptParser::BlockContext* BrightScriptParser::ConditionalCompilationIfBlockStatementContext::block(size_t i) {
  return getRuleContext<BrightScriptParser::BlockContext>(i);
}

std::vector<BrightScriptParser::ComponentBodyContext *> BrightScriptParser::ConditionalCompilationIfBlockStatementContext::componentBody() {
  return getRuleContexts<BrightScriptParser::ComponentBodyContext>();
}

BrightScriptParser::ComponentBodyContext* BrightScriptParser::ConditionalCompilationIfBlockStatementContext::componentBody(size_t i) {
  return getRuleContext<BrightScriptParser::ComponentBodyContext>(i);
}


size_t BrightScriptParser::ConditionalCompilationIfBlockStatementContext::getRuleIndex() const {
  return BrightScriptParser::RuleConditionalCompilationIfBlockStatement;
}

void BrightScriptParser::ConditionalCompilationIfBlockStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BrightScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConditionalCompilationIfBlockStatement(this);
}

void BrightScriptParser::ConditionalCompilationIfBlockStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BrightScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConditionalCompilationIfBlockStatement(this);
}


antlrcpp::Any BrightScriptParser::ConditionalCompilationIfBlockStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BrightScriptVisitor*>(visitor))
    return parserVisitor->visitConditionalCompilationIfBlockStatement(this);
  else
    return visitor->visitChildren(this);
}

BrightScriptParser::ConditionalCompilationIfBlockStatementContext* BrightScriptParser::conditionalCompilationIfBlockStatement() {
  ConditionalCompilationIfBlockStatementContext *_localctx = _tracker.createInstance<ConditionalCompilationIfBlockStatementContext>(_ctx, getState());
  enterRule(_localctx, 28, BrightScriptParser::RuleConditionalCompilationIfBlockStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(324);
    match(BrightScriptParser::CONDITIONAL_IF);
    setState(325);
    expression(0);
    setState(327);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BrightScriptParser::THEN) {
      setState(326);
      match(BrightScriptParser::THEN);
    }
    setState(330); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(329);
              endOfStatement();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(332); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
    setState(346);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << BrightScriptParser::BOX)
      | (1ULL << BrightScriptParser::CREATEOBJECT)
      | (1ULL << BrightScriptParser::DIM)
      | (1ULL << BrightScriptParser::END)
      | (1ULL << BrightScriptParser::EXIT)
      | (1ULL << BrightScriptParser::EXITWHILE)
      | (1ULL << BrightScriptParser::EVAL)
      | (1ULL << BrightScriptParser::FALSE)
      | (1ULL << BrightScriptParser::FOR)
      | (1ULL << BrightScriptParser::FUNCTION)
      | (1ULL << BrightScriptParser::GETGLOBALAA)
      | (1ULL << BrightScriptParser::GETLASTRUNCOMPILEERROR)
      | (1ULL << BrightScriptParser::GETLASTRUNRUNTIMEERROR)
      | (1ULL << BrightScriptParser::GOTO)
      | (1ULL << BrightScriptParser::IF)
      | (1ULL << BrightScriptParser::INVALID)
      | (1ULL << BrightScriptParser::NEXT)
      | (1ULL << BrightScriptParser::NOT)
      | (1ULL << BrightScriptParser::PRINT)
      | (1ULL << BrightScriptParser::RETURN)
      | (1ULL << BrightScriptParser::RUN)
      | (1ULL << BrightScriptParser::STOP)
      | (1ULL << BrightScriptParser::STRING)
      | (1ULL << BrightScriptParser::SUB)
      | (1ULL << BrightScriptParser::TAB)
      | (1ULL << BrightScriptParser::TRUE)
      | (1ULL << BrightScriptParser::TYPE)
      | (1ULL << BrightScriptParser::WHILE)
      | (1ULL << BrightScriptParser::STRING_LITERAL)
      | (1ULL << BrightScriptParser::INT_LITERAL)
      | (1ULL << BrightScriptParser::FLOAT_LITERAL)
      | (1ULL << BrightScriptParser::IDENTIFIER))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (BrightScriptParser::COMMENT - 64))
      | (1ULL << (BrightScriptParser::NEWLINE - 64))
      | (1ULL << (BrightScriptParser::CONDITIONAL_CONST - 64))
      | (1ULL << (BrightScriptParser::CONDITIONAL_ERROR - 64))
      | (1ULL << (BrightScriptParser::CONDITIONAL_IF - 64))
      | (1ULL << (BrightScriptParser::QUESTION_MARK - 64))
      | (1ULL << (BrightScriptParser::OPEN_PARENTHESIS - 64))
      | (1ULL << (BrightScriptParser::ADD - 64))
      | (1ULL << (BrightScriptParser::SUBTRACT - 64)))) != 0)) {
      setState(344);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 36, _ctx)) {
      case 1: {
        setState(335); 
        _errHandler->sync(this);
        alt = 1;
        do {
          switch (alt) {
            case 1: {
                  setState(334);
                  block();
                  break;
                }

          default:
            throw NoViableAltException(this);
          }
          setState(337); 
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx);
        } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
        break;
      }

      case 2: {
        setState(340); 
        _errHandler->sync(this);
        alt = 1;
        do {
          switch (alt) {
            case 1: {
                  setState(339);
                  componentBody();
                  break;
                }

          default:
            throw NoViableAltException(this);
          }
          setState(342); 
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 35, _ctx);
        } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
        break;
      }

      }
      setState(348);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConditionalCompilationIfElseIfBlockStatementContext ------------------------------------------------------------------

BrightScriptParser::ConditionalCompilationIfElseIfBlockStatementContext::ConditionalCompilationIfElseIfBlockStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BrightScriptParser::ConditionalCompilationIfElseIfBlockStatementContext::CONDITIONAL_ELSEIF() {
  return getToken(BrightScriptParser::CONDITIONAL_ELSEIF, 0);
}

BrightScriptParser::ExpressionContext* BrightScriptParser::ConditionalCompilationIfElseIfBlockStatementContext::expression() {
  return getRuleContext<BrightScriptParser::ExpressionContext>(0);
}

tree::TerminalNode* BrightScriptParser::ConditionalCompilationIfElseIfBlockStatementContext::THEN() {
  return getToken(BrightScriptParser::THEN, 0);
}

std::vector<BrightScriptParser::EndOfStatementContext *> BrightScriptParser::ConditionalCompilationIfElseIfBlockStatementContext::endOfStatement() {
  return getRuleContexts<BrightScriptParser::EndOfStatementContext>();
}

BrightScriptParser::EndOfStatementContext* BrightScriptParser::ConditionalCompilationIfElseIfBlockStatementContext::endOfStatement(size_t i) {
  return getRuleContext<BrightScriptParser::EndOfStatementContext>(i);
}

std::vector<BrightScriptParser::BlockContext *> BrightScriptParser::ConditionalCompilationIfElseIfBlockStatementContext::block() {
  return getRuleContexts<BrightScriptParser::BlockContext>();
}

BrightScriptParser::BlockContext* BrightScriptParser::ConditionalCompilationIfElseIfBlockStatementContext::block(size_t i) {
  return getRuleContext<BrightScriptParser::BlockContext>(i);
}

std::vector<BrightScriptParser::ComponentBodyContext *> BrightScriptParser::ConditionalCompilationIfElseIfBlockStatementContext::componentBody() {
  return getRuleContexts<BrightScriptParser::ComponentBodyContext>();
}

BrightScriptParser::ComponentBodyContext* BrightScriptParser::ConditionalCompilationIfElseIfBlockStatementContext::componentBody(size_t i) {
  return getRuleContext<BrightScriptParser::ComponentBodyContext>(i);
}


size_t BrightScriptParser::ConditionalCompilationIfElseIfBlockStatementContext::getRuleIndex() const {
  return BrightScriptParser::RuleConditionalCompilationIfElseIfBlockStatement;
}

void BrightScriptParser::ConditionalCompilationIfElseIfBlockStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BrightScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConditionalCompilationIfElseIfBlockStatement(this);
}

void BrightScriptParser::ConditionalCompilationIfElseIfBlockStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BrightScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConditionalCompilationIfElseIfBlockStatement(this);
}


antlrcpp::Any BrightScriptParser::ConditionalCompilationIfElseIfBlockStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BrightScriptVisitor*>(visitor))
    return parserVisitor->visitConditionalCompilationIfElseIfBlockStatement(this);
  else
    return visitor->visitChildren(this);
}

BrightScriptParser::ConditionalCompilationIfElseIfBlockStatementContext* BrightScriptParser::conditionalCompilationIfElseIfBlockStatement() {
  ConditionalCompilationIfElseIfBlockStatementContext *_localctx = _tracker.createInstance<ConditionalCompilationIfElseIfBlockStatementContext>(_ctx, getState());
  enterRule(_localctx, 30, BrightScriptParser::RuleConditionalCompilationIfElseIfBlockStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(349);
    match(BrightScriptParser::CONDITIONAL_ELSEIF);
    setState(350);
    expression(0);
    setState(352);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BrightScriptParser::THEN) {
      setState(351);
      match(BrightScriptParser::THEN);
    }
    setState(355); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(354);
              endOfStatement();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(357); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 39, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
    setState(371);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << BrightScriptParser::BOX)
      | (1ULL << BrightScriptParser::CREATEOBJECT)
      | (1ULL << BrightScriptParser::DIM)
      | (1ULL << BrightScriptParser::END)
      | (1ULL << BrightScriptParser::EXIT)
      | (1ULL << BrightScriptParser::EXITWHILE)
      | (1ULL << BrightScriptParser::EVAL)
      | (1ULL << BrightScriptParser::FALSE)
      | (1ULL << BrightScriptParser::FOR)
      | (1ULL << BrightScriptParser::FUNCTION)
      | (1ULL << BrightScriptParser::GETGLOBALAA)
      | (1ULL << BrightScriptParser::GETLASTRUNCOMPILEERROR)
      | (1ULL << BrightScriptParser::GETLASTRUNRUNTIMEERROR)
      | (1ULL << BrightScriptParser::GOTO)
      | (1ULL << BrightScriptParser::IF)
      | (1ULL << BrightScriptParser::INVALID)
      | (1ULL << BrightScriptParser::NEXT)
      | (1ULL << BrightScriptParser::NOT)
      | (1ULL << BrightScriptParser::PRINT)
      | (1ULL << BrightScriptParser::RETURN)
      | (1ULL << BrightScriptParser::RUN)
      | (1ULL << BrightScriptParser::STOP)
      | (1ULL << BrightScriptParser::STRING)
      | (1ULL << BrightScriptParser::SUB)
      | (1ULL << BrightScriptParser::TAB)
      | (1ULL << BrightScriptParser::TRUE)
      | (1ULL << BrightScriptParser::TYPE)
      | (1ULL << BrightScriptParser::WHILE)
      | (1ULL << BrightScriptParser::STRING_LITERAL)
      | (1ULL << BrightScriptParser::INT_LITERAL)
      | (1ULL << BrightScriptParser::FLOAT_LITERAL)
      | (1ULL << BrightScriptParser::IDENTIFIER))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (BrightScriptParser::COMMENT - 64))
      | (1ULL << (BrightScriptParser::NEWLINE - 64))
      | (1ULL << (BrightScriptParser::CONDITIONAL_CONST - 64))
      | (1ULL << (BrightScriptParser::CONDITIONAL_ERROR - 64))
      | (1ULL << (BrightScriptParser::CONDITIONAL_IF - 64))
      | (1ULL << (BrightScriptParser::QUESTION_MARK - 64))
      | (1ULL << (BrightScriptParser::OPEN_PARENTHESIS - 64))
      | (1ULL << (BrightScriptParser::ADD - 64))
      | (1ULL << (BrightScriptParser::SUBTRACT - 64)))) != 0)) {
      setState(369);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 42, _ctx)) {
      case 1: {
        setState(360); 
        _errHandler->sync(this);
        alt = 1;
        do {
          switch (alt) {
            case 1: {
                  setState(359);
                  block();
                  break;
                }

          default:
            throw NoViableAltException(this);
          }
          setState(362); 
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 40, _ctx);
        } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
        break;
      }

      case 2: {
        setState(365); 
        _errHandler->sync(this);
        alt = 1;
        do {
          switch (alt) {
            case 1: {
                  setState(364);
                  componentBody();
                  break;
                }

          default:
            throw NoViableAltException(this);
          }
          setState(367); 
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 41, _ctx);
        } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
        break;
      }

      }
      setState(373);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConditionalCompilationIfElseBlockStatementContext ------------------------------------------------------------------

BrightScriptParser::ConditionalCompilationIfElseBlockStatementContext::ConditionalCompilationIfElseBlockStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BrightScriptParser::ConditionalCompilationIfElseBlockStatementContext::CONDITIONAL_ELSE() {
  return getToken(BrightScriptParser::CONDITIONAL_ELSE, 0);
}

std::vector<BrightScriptParser::EndOfStatementContext *> BrightScriptParser::ConditionalCompilationIfElseBlockStatementContext::endOfStatement() {
  return getRuleContexts<BrightScriptParser::EndOfStatementContext>();
}

BrightScriptParser::EndOfStatementContext* BrightScriptParser::ConditionalCompilationIfElseBlockStatementContext::endOfStatement(size_t i) {
  return getRuleContext<BrightScriptParser::EndOfStatementContext>(i);
}

std::vector<BrightScriptParser::BlockContext *> BrightScriptParser::ConditionalCompilationIfElseBlockStatementContext::block() {
  return getRuleContexts<BrightScriptParser::BlockContext>();
}

BrightScriptParser::BlockContext* BrightScriptParser::ConditionalCompilationIfElseBlockStatementContext::block(size_t i) {
  return getRuleContext<BrightScriptParser::BlockContext>(i);
}

std::vector<BrightScriptParser::ComponentBodyContext *> BrightScriptParser::ConditionalCompilationIfElseBlockStatementContext::componentBody() {
  return getRuleContexts<BrightScriptParser::ComponentBodyContext>();
}

BrightScriptParser::ComponentBodyContext* BrightScriptParser::ConditionalCompilationIfElseBlockStatementContext::componentBody(size_t i) {
  return getRuleContext<BrightScriptParser::ComponentBodyContext>(i);
}


size_t BrightScriptParser::ConditionalCompilationIfElseBlockStatementContext::getRuleIndex() const {
  return BrightScriptParser::RuleConditionalCompilationIfElseBlockStatement;
}

void BrightScriptParser::ConditionalCompilationIfElseBlockStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BrightScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConditionalCompilationIfElseBlockStatement(this);
}

void BrightScriptParser::ConditionalCompilationIfElseBlockStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BrightScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConditionalCompilationIfElseBlockStatement(this);
}


antlrcpp::Any BrightScriptParser::ConditionalCompilationIfElseBlockStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BrightScriptVisitor*>(visitor))
    return parserVisitor->visitConditionalCompilationIfElseBlockStatement(this);
  else
    return visitor->visitChildren(this);
}

BrightScriptParser::ConditionalCompilationIfElseBlockStatementContext* BrightScriptParser::conditionalCompilationIfElseBlockStatement() {
  ConditionalCompilationIfElseBlockStatementContext *_localctx = _tracker.createInstance<ConditionalCompilationIfElseBlockStatementContext>(_ctx, getState());
  enterRule(_localctx, 32, BrightScriptParser::RuleConditionalCompilationIfElseBlockStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(374);
    match(BrightScriptParser::CONDITIONAL_ELSE);
    setState(376); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(375);
              endOfStatement();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(378); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 44, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
    setState(392);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << BrightScriptParser::BOX)
      | (1ULL << BrightScriptParser::CREATEOBJECT)
      | (1ULL << BrightScriptParser::DIM)
      | (1ULL << BrightScriptParser::END)
      | (1ULL << BrightScriptParser::EXIT)
      | (1ULL << BrightScriptParser::EXITWHILE)
      | (1ULL << BrightScriptParser::EVAL)
      | (1ULL << BrightScriptParser::FALSE)
      | (1ULL << BrightScriptParser::FOR)
      | (1ULL << BrightScriptParser::FUNCTION)
      | (1ULL << BrightScriptParser::GETGLOBALAA)
      | (1ULL << BrightScriptParser::GETLASTRUNCOMPILEERROR)
      | (1ULL << BrightScriptParser::GETLASTRUNRUNTIMEERROR)
      | (1ULL << BrightScriptParser::GOTO)
      | (1ULL << BrightScriptParser::IF)
      | (1ULL << BrightScriptParser::INVALID)
      | (1ULL << BrightScriptParser::NEXT)
      | (1ULL << BrightScriptParser::NOT)
      | (1ULL << BrightScriptParser::PRINT)
      | (1ULL << BrightScriptParser::RETURN)
      | (1ULL << BrightScriptParser::RUN)
      | (1ULL << BrightScriptParser::STOP)
      | (1ULL << BrightScriptParser::STRING)
      | (1ULL << BrightScriptParser::SUB)
      | (1ULL << BrightScriptParser::TAB)
      | (1ULL << BrightScriptParser::TRUE)
      | (1ULL << BrightScriptParser::TYPE)
      | (1ULL << BrightScriptParser::WHILE)
      | (1ULL << BrightScriptParser::STRING_LITERAL)
      | (1ULL << BrightScriptParser::INT_LITERAL)
      | (1ULL << BrightScriptParser::FLOAT_LITERAL)
      | (1ULL << BrightScriptParser::IDENTIFIER))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (BrightScriptParser::COMMENT - 64))
      | (1ULL << (BrightScriptParser::NEWLINE - 64))
      | (1ULL << (BrightScriptParser::CONDITIONAL_CONST - 64))
      | (1ULL << (BrightScriptParser::CONDITIONAL_ERROR - 64))
      | (1ULL << (BrightScriptParser::CONDITIONAL_IF - 64))
      | (1ULL << (BrightScriptParser::QUESTION_MARK - 64))
      | (1ULL << (BrightScriptParser::OPEN_PARENTHESIS - 64))
      | (1ULL << (BrightScriptParser::ADD - 64))
      | (1ULL << (BrightScriptParser::SUBTRACT - 64)))) != 0)) {
      setState(390);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 47, _ctx)) {
      case 1: {
        setState(381); 
        _errHandler->sync(this);
        alt = 1;
        do {
          switch (alt) {
            case 1: {
                  setState(380);
                  block();
                  break;
                }

          default:
            throw NoViableAltException(this);
          }
          setState(383); 
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 45, _ctx);
        } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
        break;
      }

      case 2: {
        setState(386); 
        _errHandler->sync(this);
        alt = 1;
        do {
          switch (alt) {
            case 1: {
                  setState(385);
                  componentBody();
                  break;
                }

          default:
            throw NoViableAltException(this);
          }
          setState(388); 
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 46, _ctx);
        } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
        break;
      }

      }
      setState(394);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DimStatementContext ------------------------------------------------------------------

BrightScriptParser::DimStatementContext::DimStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BrightScriptParser::DimStatementContext::DIM() {
  return getToken(BrightScriptParser::DIM, 0);
}

BrightScriptParser::IdentifierContext* BrightScriptParser::DimStatementContext::identifier() {
  return getRuleContext<BrightScriptParser::IdentifierContext>(0);
}

tree::TerminalNode* BrightScriptParser::DimStatementContext::OPEN_BRACKET() {
  return getToken(BrightScriptParser::OPEN_BRACKET, 0);
}

tree::TerminalNode* BrightScriptParser::DimStatementContext::CLOSE_BRACKET() {
  return getToken(BrightScriptParser::CLOSE_BRACKET, 0);
}

std::vector<tree::TerminalNode *> BrightScriptParser::DimStatementContext::INT_LITERAL() {
  return getTokens(BrightScriptParser::INT_LITERAL);
}

tree::TerminalNode* BrightScriptParser::DimStatementContext::INT_LITERAL(size_t i) {
  return getToken(BrightScriptParser::INT_LITERAL, i);
}

std::vector<tree::TerminalNode *> BrightScriptParser::DimStatementContext::COMMA() {
  return getTokens(BrightScriptParser::COMMA);
}

tree::TerminalNode* BrightScriptParser::DimStatementContext::COMMA(size_t i) {
  return getToken(BrightScriptParser::COMMA, i);
}


size_t BrightScriptParser::DimStatementContext::getRuleIndex() const {
  return BrightScriptParser::RuleDimStatement;
}

void BrightScriptParser::DimStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BrightScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDimStatement(this);
}

void BrightScriptParser::DimStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BrightScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDimStatement(this);
}


antlrcpp::Any BrightScriptParser::DimStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BrightScriptVisitor*>(visitor))
    return parserVisitor->visitDimStatement(this);
  else
    return visitor->visitChildren(this);
}

BrightScriptParser::DimStatementContext* BrightScriptParser::dimStatement() {
  DimStatementContext *_localctx = _tracker.createInstance<DimStatementContext>(_ctx, getState());
  enterRule(_localctx, 34, BrightScriptParser::RuleDimStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(395);
    match(BrightScriptParser::DIM);
    setState(396);
    identifier();
    setState(397);
    match(BrightScriptParser::OPEN_BRACKET);
    setState(404);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BrightScriptParser::INT_LITERAL) {
      setState(398);
      match(BrightScriptParser::INT_LITERAL);
      setState(400);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == BrightScriptParser::COMMA) {
        setState(399);
        match(BrightScriptParser::COMMA);
      }
      setState(406);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(407);
    match(BrightScriptParser::CLOSE_BRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EndStatementContext ------------------------------------------------------------------

BrightScriptParser::EndStatementContext::EndStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BrightScriptParser::EndStatementContext::END() {
  return getToken(BrightScriptParser::END, 0);
}


size_t BrightScriptParser::EndStatementContext::getRuleIndex() const {
  return BrightScriptParser::RuleEndStatement;
}

void BrightScriptParser::EndStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BrightScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEndStatement(this);
}

void BrightScriptParser::EndStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BrightScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEndStatement(this);
}


antlrcpp::Any BrightScriptParser::EndStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BrightScriptVisitor*>(visitor))
    return parserVisitor->visitEndStatement(this);
  else
    return visitor->visitChildren(this);
}

BrightScriptParser::EndStatementContext* BrightScriptParser::endStatement() {
  EndStatementContext *_localctx = _tracker.createInstance<EndStatementContext>(_ctx, getState());
  enterRule(_localctx, 36, BrightScriptParser::RuleEndStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(409);
    match(BrightScriptParser::END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExitStatementContext ------------------------------------------------------------------

BrightScriptParser::ExitStatementContext::ExitStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BrightScriptParser::ExitStatementContext::EXIT() {
  return getToken(BrightScriptParser::EXIT, 0);
}

tree::TerminalNode* BrightScriptParser::ExitStatementContext::WHILE() {
  return getToken(BrightScriptParser::WHILE, 0);
}

tree::TerminalNode* BrightScriptParser::ExitStatementContext::EXITWHILE() {
  return getToken(BrightScriptParser::EXITWHILE, 0);
}

tree::TerminalNode* BrightScriptParser::ExitStatementContext::FOR() {
  return getToken(BrightScriptParser::FOR, 0);
}


size_t BrightScriptParser::ExitStatementContext::getRuleIndex() const {
  return BrightScriptParser::RuleExitStatement;
}

void BrightScriptParser::ExitStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BrightScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExitStatement(this);
}

void BrightScriptParser::ExitStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BrightScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExitStatement(this);
}


antlrcpp::Any BrightScriptParser::ExitStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BrightScriptVisitor*>(visitor))
    return parserVisitor->visitExitStatement(this);
  else
    return visitor->visitChildren(this);
}

BrightScriptParser::ExitStatementContext* BrightScriptParser::exitStatement() {
  ExitStatementContext *_localctx = _tracker.createInstance<ExitStatementContext>(_ctx, getState());
  enterRule(_localctx, 38, BrightScriptParser::RuleExitStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(416);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 51, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(411);
      match(BrightScriptParser::EXIT);
      setState(412);
      match(BrightScriptParser::WHILE);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(413);
      match(BrightScriptParser::EXITWHILE);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(414);
      match(BrightScriptParser::EXIT);
      setState(415);
      match(BrightScriptParser::FOR);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForStatementContext ------------------------------------------------------------------

BrightScriptParser::ForStatementContext::ForStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> BrightScriptParser::ForStatementContext::FOR() {
  return getTokens(BrightScriptParser::FOR);
}

tree::TerminalNode* BrightScriptParser::ForStatementContext::FOR(size_t i) {
  return getToken(BrightScriptParser::FOR, i);
}

BrightScriptParser::IdentifierContext* BrightScriptParser::ForStatementContext::identifier() {
  return getRuleContext<BrightScriptParser::IdentifierContext>(0);
}

tree::TerminalNode* BrightScriptParser::ForStatementContext::EQUALS() {
  return getToken(BrightScriptParser::EQUALS, 0);
}

std::vector<BrightScriptParser::ExpressionContext *> BrightScriptParser::ForStatementContext::expression() {
  return getRuleContexts<BrightScriptParser::ExpressionContext>();
}

BrightScriptParser::ExpressionContext* BrightScriptParser::ForStatementContext::expression(size_t i) {
  return getRuleContext<BrightScriptParser::ExpressionContext>(i);
}

tree::TerminalNode* BrightScriptParser::ForStatementContext::TO() {
  return getToken(BrightScriptParser::TO, 0);
}

tree::TerminalNode* BrightScriptParser::ForStatementContext::STEP() {
  return getToken(BrightScriptParser::STEP, 0);
}

std::vector<BrightScriptParser::EndOfStatementContext *> BrightScriptParser::ForStatementContext::endOfStatement() {
  return getRuleContexts<BrightScriptParser::EndOfStatementContext>();
}

BrightScriptParser::EndOfStatementContext* BrightScriptParser::ForStatementContext::endOfStatement(size_t i) {
  return getRuleContext<BrightScriptParser::EndOfStatementContext>(i);
}

std::vector<BrightScriptParser::BlockContext *> BrightScriptParser::ForStatementContext::block() {
  return getRuleContexts<BrightScriptParser::BlockContext>();
}

BrightScriptParser::BlockContext* BrightScriptParser::ForStatementContext::block(size_t i) {
  return getRuleContext<BrightScriptParser::BlockContext>(i);
}

BrightScriptParser::NextStatementContext* BrightScriptParser::ForStatementContext::nextStatement() {
  return getRuleContext<BrightScriptParser::NextStatementContext>(0);
}

tree::TerminalNode* BrightScriptParser::ForStatementContext::END() {
  return getToken(BrightScriptParser::END, 0);
}


size_t BrightScriptParser::ForStatementContext::getRuleIndex() const {
  return BrightScriptParser::RuleForStatement;
}

void BrightScriptParser::ForStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BrightScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForStatement(this);
}

void BrightScriptParser::ForStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BrightScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForStatement(this);
}


antlrcpp::Any BrightScriptParser::ForStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BrightScriptVisitor*>(visitor))
    return parserVisitor->visitForStatement(this);
  else
    return visitor->visitChildren(this);
}

BrightScriptParser::ForStatementContext* BrightScriptParser::forStatement() {
  ForStatementContext *_localctx = _tracker.createInstance<ForStatementContext>(_ctx, getState());
  enterRule(_localctx, 40, BrightScriptParser::RuleForStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(418);
    match(BrightScriptParser::FOR);
    setState(419);
    identifier();
    setState(420);
    match(BrightScriptParser::EQUALS);
    setState(421);
    expression(0);
    setState(422);
    match(BrightScriptParser::TO);
    setState(423);
    expression(0);
    setState(426);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BrightScriptParser::STEP) {
      setState(424);
      match(BrightScriptParser::STEP);
      setState(425);
      expression(0);
    }
    setState(429); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(428);
              endOfStatement();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(431); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 53, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
    setState(436);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 54, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(433);
        block(); 
      }
      setState(438);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 54, _ctx);
    }
    setState(440);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BrightScriptParser::NEXT) {
      setState(439);
      nextStatement();
    }
    setState(444);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BrightScriptParser::END) {
      setState(442);
      match(BrightScriptParser::END);
      setState(443);
      match(BrightScriptParser::FOR);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForEachStatementContext ------------------------------------------------------------------

BrightScriptParser::ForEachStatementContext::ForEachStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> BrightScriptParser::ForEachStatementContext::FOR() {
  return getTokens(BrightScriptParser::FOR);
}

tree::TerminalNode* BrightScriptParser::ForEachStatementContext::FOR(size_t i) {
  return getToken(BrightScriptParser::FOR, i);
}

tree::TerminalNode* BrightScriptParser::ForEachStatementContext::EACH() {
  return getToken(BrightScriptParser::EACH, 0);
}

BrightScriptParser::IdentifierContext* BrightScriptParser::ForEachStatementContext::identifier() {
  return getRuleContext<BrightScriptParser::IdentifierContext>(0);
}

tree::TerminalNode* BrightScriptParser::ForEachStatementContext::IN() {
  return getToken(BrightScriptParser::IN, 0);
}

BrightScriptParser::TraversableExpressionContext* BrightScriptParser::ForEachStatementContext::traversableExpression() {
  return getRuleContext<BrightScriptParser::TraversableExpressionContext>(0);
}

std::vector<BrightScriptParser::EndOfStatementContext *> BrightScriptParser::ForEachStatementContext::endOfStatement() {
  return getRuleContexts<BrightScriptParser::EndOfStatementContext>();
}

BrightScriptParser::EndOfStatementContext* BrightScriptParser::ForEachStatementContext::endOfStatement(size_t i) {
  return getRuleContext<BrightScriptParser::EndOfStatementContext>(i);
}

std::vector<BrightScriptParser::BlockContext *> BrightScriptParser::ForEachStatementContext::block() {
  return getRuleContexts<BrightScriptParser::BlockContext>();
}

BrightScriptParser::BlockContext* BrightScriptParser::ForEachStatementContext::block(size_t i) {
  return getRuleContext<BrightScriptParser::BlockContext>(i);
}

BrightScriptParser::NextStatementContext* BrightScriptParser::ForEachStatementContext::nextStatement() {
  return getRuleContext<BrightScriptParser::NextStatementContext>(0);
}

tree::TerminalNode* BrightScriptParser::ForEachStatementContext::END() {
  return getToken(BrightScriptParser::END, 0);
}


size_t BrightScriptParser::ForEachStatementContext::getRuleIndex() const {
  return BrightScriptParser::RuleForEachStatement;
}

void BrightScriptParser::ForEachStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BrightScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForEachStatement(this);
}

void BrightScriptParser::ForEachStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BrightScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForEachStatement(this);
}


antlrcpp::Any BrightScriptParser::ForEachStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BrightScriptVisitor*>(visitor))
    return parserVisitor->visitForEachStatement(this);
  else
    return visitor->visitChildren(this);
}

BrightScriptParser::ForEachStatementContext* BrightScriptParser::forEachStatement() {
  ForEachStatementContext *_localctx = _tracker.createInstance<ForEachStatementContext>(_ctx, getState());
  enterRule(_localctx, 42, BrightScriptParser::RuleForEachStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(446);
    match(BrightScriptParser::FOR);
    setState(447);
    match(BrightScriptParser::EACH);
    setState(448);
    identifier();
    setState(449);
    match(BrightScriptParser::IN);
    setState(450);
    traversableExpression();
    setState(452); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(451);
              endOfStatement();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(454); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 57, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
    setState(459);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 58, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(456);
        block(); 
      }
      setState(461);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 58, _ctx);
    }
    setState(463);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BrightScriptParser::NEXT) {
      setState(462);
      nextStatement();
    }
    setState(467);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BrightScriptParser::END) {
      setState(465);
      match(BrightScriptParser::END);
      setState(466);
      match(BrightScriptParser::FOR);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GotoStatementContext ------------------------------------------------------------------

BrightScriptParser::GotoStatementContext::GotoStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BrightScriptParser::GotoStatementContext::GOTO() {
  return getToken(BrightScriptParser::GOTO, 0);
}

tree::TerminalNode* BrightScriptParser::GotoStatementContext::IDENTIFIER() {
  return getToken(BrightScriptParser::IDENTIFIER, 0);
}


size_t BrightScriptParser::GotoStatementContext::getRuleIndex() const {
  return BrightScriptParser::RuleGotoStatement;
}

void BrightScriptParser::GotoStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BrightScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGotoStatement(this);
}

void BrightScriptParser::GotoStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BrightScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGotoStatement(this);
}


antlrcpp::Any BrightScriptParser::GotoStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BrightScriptVisitor*>(visitor))
    return parserVisitor->visitGotoStatement(this);
  else
    return visitor->visitChildren(this);
}

BrightScriptParser::GotoStatementContext* BrightScriptParser::gotoStatement() {
  GotoStatementContext *_localctx = _tracker.createInstance<GotoStatementContext>(_ctx, getState());
  enterRule(_localctx, 44, BrightScriptParser::RuleGotoStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(469);
    match(BrightScriptParser::GOTO);
    setState(470);
    match(BrightScriptParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfThenElseStatementContext ------------------------------------------------------------------

BrightScriptParser::IfThenElseStatementContext::IfThenElseStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BrightScriptParser::IfSingleLineStatementContext* BrightScriptParser::IfThenElseStatementContext::ifSingleLineStatement() {
  return getRuleContext<BrightScriptParser::IfSingleLineStatementContext>(0);
}

BrightScriptParser::IfBlockStatementContext* BrightScriptParser::IfThenElseStatementContext::ifBlockStatement() {
  return getRuleContext<BrightScriptParser::IfBlockStatementContext>(0);
}

tree::TerminalNode* BrightScriptParser::IfThenElseStatementContext::END() {
  return getToken(BrightScriptParser::END, 0);
}

tree::TerminalNode* BrightScriptParser::IfThenElseStatementContext::IF() {
  return getToken(BrightScriptParser::IF, 0);
}

tree::TerminalNode* BrightScriptParser::IfThenElseStatementContext::ENDIF() {
  return getToken(BrightScriptParser::ENDIF, 0);
}

std::vector<BrightScriptParser::IfElseIfBlockStatementContext *> BrightScriptParser::IfThenElseStatementContext::ifElseIfBlockStatement() {
  return getRuleContexts<BrightScriptParser::IfElseIfBlockStatementContext>();
}

BrightScriptParser::IfElseIfBlockStatementContext* BrightScriptParser::IfThenElseStatementContext::ifElseIfBlockStatement(size_t i) {
  return getRuleContext<BrightScriptParser::IfElseIfBlockStatementContext>(i);
}

BrightScriptParser::IfElseBlockStatementContext* BrightScriptParser::IfThenElseStatementContext::ifElseBlockStatement() {
  return getRuleContext<BrightScriptParser::IfElseBlockStatementContext>(0);
}


size_t BrightScriptParser::IfThenElseStatementContext::getRuleIndex() const {
  return BrightScriptParser::RuleIfThenElseStatement;
}

void BrightScriptParser::IfThenElseStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BrightScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfThenElseStatement(this);
}

void BrightScriptParser::IfThenElseStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BrightScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfThenElseStatement(this);
}


antlrcpp::Any BrightScriptParser::IfThenElseStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BrightScriptVisitor*>(visitor))
    return parserVisitor->visitIfThenElseStatement(this);
  else
    return visitor->visitChildren(this);
}

BrightScriptParser::IfThenElseStatementContext* BrightScriptParser::ifThenElseStatement() {
  IfThenElseStatementContext *_localctx = _tracker.createInstance<IfThenElseStatementContext>(_ctx, getState());
  enterRule(_localctx, 46, BrightScriptParser::RuleIfThenElseStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    setState(488);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 64, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(472);
      ifSingleLineStatement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(473);
      ifBlockStatement();
      setState(477);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 61, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(474);
          ifElseIfBlockStatement(); 
        }
        setState(479);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 61, _ctx);
      }
      setState(481);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == BrightScriptParser::ELSE) {
        setState(480);
        ifElseBlockStatement();
      }
      setState(486);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case BrightScriptParser::END: {
          setState(483);
          match(BrightScriptParser::END);
          setState(484);
          match(BrightScriptParser::IF);
          break;
        }

        case BrightScriptParser::ENDIF: {
          setState(485);
          match(BrightScriptParser::ENDIF);
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfSingleLineStatementContext ------------------------------------------------------------------

BrightScriptParser::IfSingleLineStatementContext::IfSingleLineStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BrightScriptParser::IfSingleLineStatementContext::IF() {
  return getToken(BrightScriptParser::IF, 0);
}

BrightScriptParser::ExpressionContext* BrightScriptParser::IfSingleLineStatementContext::expression() {
  return getRuleContext<BrightScriptParser::ExpressionContext>(0);
}

std::vector<BrightScriptParser::BlockStatementContext *> BrightScriptParser::IfSingleLineStatementContext::blockStatement() {
  return getRuleContexts<BrightScriptParser::BlockStatementContext>();
}

BrightScriptParser::BlockStatementContext* BrightScriptParser::IfSingleLineStatementContext::blockStatement(size_t i) {
  return getRuleContext<BrightScriptParser::BlockStatementContext>(i);
}

tree::TerminalNode* BrightScriptParser::IfSingleLineStatementContext::THEN() {
  return getToken(BrightScriptParser::THEN, 0);
}

tree::TerminalNode* BrightScriptParser::IfSingleLineStatementContext::ELSE() {
  return getToken(BrightScriptParser::ELSE, 0);
}


size_t BrightScriptParser::IfSingleLineStatementContext::getRuleIndex() const {
  return BrightScriptParser::RuleIfSingleLineStatement;
}

void BrightScriptParser::IfSingleLineStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BrightScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfSingleLineStatement(this);
}

void BrightScriptParser::IfSingleLineStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BrightScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfSingleLineStatement(this);
}


antlrcpp::Any BrightScriptParser::IfSingleLineStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BrightScriptVisitor*>(visitor))
    return parserVisitor->visitIfSingleLineStatement(this);
  else
    return visitor->visitChildren(this);
}

BrightScriptParser::IfSingleLineStatementContext* BrightScriptParser::ifSingleLineStatement() {
  IfSingleLineStatementContext *_localctx = _tracker.createInstance<IfSingleLineStatementContext>(_ctx, getState());
  enterRule(_localctx, 48, BrightScriptParser::RuleIfSingleLineStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(490);
    match(BrightScriptParser::IF);
    setState(491);
    expression(0);
    setState(493);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BrightScriptParser::THEN) {
      setState(492);
      match(BrightScriptParser::THEN);
    }
    setState(495);
    blockStatement();
    setState(498);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 66, _ctx)) {
    case 1: {
      setState(496);
      match(BrightScriptParser::ELSE);
      setState(497);
      blockStatement();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfBlockStatementContext ------------------------------------------------------------------

BrightScriptParser::IfBlockStatementContext::IfBlockStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BrightScriptParser::IfBlockStatementContext::IF() {
  return getToken(BrightScriptParser::IF, 0);
}

BrightScriptParser::ExpressionContext* BrightScriptParser::IfBlockStatementContext::expression() {
  return getRuleContext<BrightScriptParser::ExpressionContext>(0);
}

tree::TerminalNode* BrightScriptParser::IfBlockStatementContext::THEN() {
  return getToken(BrightScriptParser::THEN, 0);
}

std::vector<BrightScriptParser::EndOfStatementContext *> BrightScriptParser::IfBlockStatementContext::endOfStatement() {
  return getRuleContexts<BrightScriptParser::EndOfStatementContext>();
}

BrightScriptParser::EndOfStatementContext* BrightScriptParser::IfBlockStatementContext::endOfStatement(size_t i) {
  return getRuleContext<BrightScriptParser::EndOfStatementContext>(i);
}

std::vector<BrightScriptParser::BlockContext *> BrightScriptParser::IfBlockStatementContext::block() {
  return getRuleContexts<BrightScriptParser::BlockContext>();
}

BrightScriptParser::BlockContext* BrightScriptParser::IfBlockStatementContext::block(size_t i) {
  return getRuleContext<BrightScriptParser::BlockContext>(i);
}


size_t BrightScriptParser::IfBlockStatementContext::getRuleIndex() const {
  return BrightScriptParser::RuleIfBlockStatement;
}

void BrightScriptParser::IfBlockStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BrightScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfBlockStatement(this);
}

void BrightScriptParser::IfBlockStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BrightScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfBlockStatement(this);
}


antlrcpp::Any BrightScriptParser::IfBlockStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BrightScriptVisitor*>(visitor))
    return parserVisitor->visitIfBlockStatement(this);
  else
    return visitor->visitChildren(this);
}

BrightScriptParser::IfBlockStatementContext* BrightScriptParser::ifBlockStatement() {
  IfBlockStatementContext *_localctx = _tracker.createInstance<IfBlockStatementContext>(_ctx, getState());
  enterRule(_localctx, 50, BrightScriptParser::RuleIfBlockStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(500);
    match(BrightScriptParser::IF);
    setState(501);
    expression(0);
    setState(503);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BrightScriptParser::THEN) {
      setState(502);
      match(BrightScriptParser::THEN);
    }
    setState(506); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(505);
              endOfStatement();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(508); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 68, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
    setState(513);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 69, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(510);
        block(); 
      }
      setState(515);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 69, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfElseIfBlockStatementContext ------------------------------------------------------------------

BrightScriptParser::IfElseIfBlockStatementContext::IfElseIfBlockStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BrightScriptParser::ExpressionContext* BrightScriptParser::IfElseIfBlockStatementContext::expression() {
  return getRuleContext<BrightScriptParser::ExpressionContext>(0);
}

tree::TerminalNode* BrightScriptParser::IfElseIfBlockStatementContext::ELSE() {
  return getToken(BrightScriptParser::ELSE, 0);
}

tree::TerminalNode* BrightScriptParser::IfElseIfBlockStatementContext::IF() {
  return getToken(BrightScriptParser::IF, 0);
}

tree::TerminalNode* BrightScriptParser::IfElseIfBlockStatementContext::ELSEIF() {
  return getToken(BrightScriptParser::ELSEIF, 0);
}

tree::TerminalNode* BrightScriptParser::IfElseIfBlockStatementContext::THEN() {
  return getToken(BrightScriptParser::THEN, 0);
}

std::vector<BrightScriptParser::EndOfStatementContext *> BrightScriptParser::IfElseIfBlockStatementContext::endOfStatement() {
  return getRuleContexts<BrightScriptParser::EndOfStatementContext>();
}

BrightScriptParser::EndOfStatementContext* BrightScriptParser::IfElseIfBlockStatementContext::endOfStatement(size_t i) {
  return getRuleContext<BrightScriptParser::EndOfStatementContext>(i);
}

std::vector<BrightScriptParser::BlockContext *> BrightScriptParser::IfElseIfBlockStatementContext::block() {
  return getRuleContexts<BrightScriptParser::BlockContext>();
}

BrightScriptParser::BlockContext* BrightScriptParser::IfElseIfBlockStatementContext::block(size_t i) {
  return getRuleContext<BrightScriptParser::BlockContext>(i);
}


size_t BrightScriptParser::IfElseIfBlockStatementContext::getRuleIndex() const {
  return BrightScriptParser::RuleIfElseIfBlockStatement;
}

void BrightScriptParser::IfElseIfBlockStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BrightScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfElseIfBlockStatement(this);
}

void BrightScriptParser::IfElseIfBlockStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BrightScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfElseIfBlockStatement(this);
}


antlrcpp::Any BrightScriptParser::IfElseIfBlockStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BrightScriptVisitor*>(visitor))
    return parserVisitor->visitIfElseIfBlockStatement(this);
  else
    return visitor->visitChildren(this);
}

BrightScriptParser::IfElseIfBlockStatementContext* BrightScriptParser::ifElseIfBlockStatement() {
  IfElseIfBlockStatementContext *_localctx = _tracker.createInstance<IfElseIfBlockStatementContext>(_ctx, getState());
  enterRule(_localctx, 52, BrightScriptParser::RuleIfElseIfBlockStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(519);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BrightScriptParser::ELSE: {
        setState(516);
        match(BrightScriptParser::ELSE);
        setState(517);
        match(BrightScriptParser::IF);
        break;
      }

      case BrightScriptParser::ELSEIF: {
        setState(518);
        match(BrightScriptParser::ELSEIF);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(521);
    expression(0);
    setState(523);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BrightScriptParser::THEN) {
      setState(522);
      match(BrightScriptParser::THEN);
    }
    setState(526); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(525);
              endOfStatement();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(528); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 72, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
    setState(533);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 73, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(530);
        block(); 
      }
      setState(535);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 73, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfElseBlockStatementContext ------------------------------------------------------------------

BrightScriptParser::IfElseBlockStatementContext::IfElseBlockStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BrightScriptParser::IfElseBlockStatementContext::ELSE() {
  return getToken(BrightScriptParser::ELSE, 0);
}

std::vector<BrightScriptParser::EndOfStatementContext *> BrightScriptParser::IfElseBlockStatementContext::endOfStatement() {
  return getRuleContexts<BrightScriptParser::EndOfStatementContext>();
}

BrightScriptParser::EndOfStatementContext* BrightScriptParser::IfElseBlockStatementContext::endOfStatement(size_t i) {
  return getRuleContext<BrightScriptParser::EndOfStatementContext>(i);
}

std::vector<BrightScriptParser::BlockContext *> BrightScriptParser::IfElseBlockStatementContext::block() {
  return getRuleContexts<BrightScriptParser::BlockContext>();
}

BrightScriptParser::BlockContext* BrightScriptParser::IfElseBlockStatementContext::block(size_t i) {
  return getRuleContext<BrightScriptParser::BlockContext>(i);
}


size_t BrightScriptParser::IfElseBlockStatementContext::getRuleIndex() const {
  return BrightScriptParser::RuleIfElseBlockStatement;
}

void BrightScriptParser::IfElseBlockStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BrightScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfElseBlockStatement(this);
}

void BrightScriptParser::IfElseBlockStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BrightScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfElseBlockStatement(this);
}


antlrcpp::Any BrightScriptParser::IfElseBlockStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BrightScriptVisitor*>(visitor))
    return parserVisitor->visitIfElseBlockStatement(this);
  else
    return visitor->visitChildren(this);
}

BrightScriptParser::IfElseBlockStatementContext* BrightScriptParser::ifElseBlockStatement() {
  IfElseBlockStatementContext *_localctx = _tracker.createInstance<IfElseBlockStatementContext>(_ctx, getState());
  enterRule(_localctx, 54, BrightScriptParser::RuleIfElseBlockStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(536);
    match(BrightScriptParser::ELSE);
    setState(538); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(537);
              endOfStatement();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(540); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 74, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
    setState(545);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 75, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(542);
        block(); 
      }
      setState(547);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 75, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LabelStatementContext ------------------------------------------------------------------

BrightScriptParser::LabelStatementContext::LabelStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BrightScriptParser::LabelStatementContext::IDENTIFIER() {
  return getToken(BrightScriptParser::IDENTIFIER, 0);
}

tree::TerminalNode* BrightScriptParser::LabelStatementContext::COLON() {
  return getToken(BrightScriptParser::COLON, 0);
}


size_t BrightScriptParser::LabelStatementContext::getRuleIndex() const {
  return BrightScriptParser::RuleLabelStatement;
}

void BrightScriptParser::LabelStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BrightScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLabelStatement(this);
}

void BrightScriptParser::LabelStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BrightScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLabelStatement(this);
}


antlrcpp::Any BrightScriptParser::LabelStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BrightScriptVisitor*>(visitor))
    return parserVisitor->visitLabelStatement(this);
  else
    return visitor->visitChildren(this);
}

BrightScriptParser::LabelStatementContext* BrightScriptParser::labelStatement() {
  LabelStatementContext *_localctx = _tracker.createInstance<LabelStatementContext>(_ctx, getState());
  enterRule(_localctx, 56, BrightScriptParser::RuleLabelStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(548);
    match(BrightScriptParser::IDENTIFIER);
    setState(549);
    match(BrightScriptParser::COLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LibraryStatementContext ------------------------------------------------------------------

BrightScriptParser::LibraryStatementContext::LibraryStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BrightScriptParser::LibraryStatementContext::LIBRARY() {
  return getToken(BrightScriptParser::LIBRARY, 0);
}

tree::TerminalNode* BrightScriptParser::LibraryStatementContext::STRING_LITERAL() {
  return getToken(BrightScriptParser::STRING_LITERAL, 0);
}


size_t BrightScriptParser::LibraryStatementContext::getRuleIndex() const {
  return BrightScriptParser::RuleLibraryStatement;
}

void BrightScriptParser::LibraryStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BrightScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLibraryStatement(this);
}

void BrightScriptParser::LibraryStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BrightScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLibraryStatement(this);
}


antlrcpp::Any BrightScriptParser::LibraryStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BrightScriptVisitor*>(visitor))
    return parserVisitor->visitLibraryStatement(this);
  else
    return visitor->visitChildren(this);
}

BrightScriptParser::LibraryStatementContext* BrightScriptParser::libraryStatement() {
  LibraryStatementContext *_localctx = _tracker.createInstance<LibraryStatementContext>(_ctx, getState());
  enterRule(_localctx, 58, BrightScriptParser::RuleLibraryStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(551);
    match(BrightScriptParser::LIBRARY);
    setState(552);
    match(BrightScriptParser::STRING_LITERAL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NextStatementContext ------------------------------------------------------------------

BrightScriptParser::NextStatementContext::NextStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BrightScriptParser::NextStatementContext::NEXT() {
  return getToken(BrightScriptParser::NEXT, 0);
}


size_t BrightScriptParser::NextStatementContext::getRuleIndex() const {
  return BrightScriptParser::RuleNextStatement;
}

void BrightScriptParser::NextStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BrightScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNextStatement(this);
}

void BrightScriptParser::NextStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BrightScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNextStatement(this);
}


antlrcpp::Any BrightScriptParser::NextStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BrightScriptVisitor*>(visitor))
    return parserVisitor->visitNextStatement(this);
  else
    return visitor->visitChildren(this);
}

BrightScriptParser::NextStatementContext* BrightScriptParser::nextStatement() {
  NextStatementContext *_localctx = _tracker.createInstance<NextStatementContext>(_ctx, getState());
  enterRule(_localctx, 60, BrightScriptParser::RuleNextStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(554);
    match(BrightScriptParser::NEXT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrintStatementContext ------------------------------------------------------------------

BrightScriptParser::PrintStatementContext::PrintStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BrightScriptParser::PrintStatementContext::PRINT() {
  return getToken(BrightScriptParser::PRINT, 0);
}

tree::TerminalNode* BrightScriptParser::PrintStatementContext::QUESTION_MARK() {
  return getToken(BrightScriptParser::QUESTION_MARK, 0);
}

std::vector<BrightScriptParser::ExpressionContext *> BrightScriptParser::PrintStatementContext::expression() {
  return getRuleContexts<BrightScriptParser::ExpressionContext>();
}

BrightScriptParser::ExpressionContext* BrightScriptParser::PrintStatementContext::expression(size_t i) {
  return getRuleContext<BrightScriptParser::ExpressionContext>(i);
}

std::vector<tree::TerminalNode *> BrightScriptParser::PrintStatementContext::SEMICOLON() {
  return getTokens(BrightScriptParser::SEMICOLON);
}

tree::TerminalNode* BrightScriptParser::PrintStatementContext::SEMICOLON(size_t i) {
  return getToken(BrightScriptParser::SEMICOLON, i);
}


size_t BrightScriptParser::PrintStatementContext::getRuleIndex() const {
  return BrightScriptParser::RulePrintStatement;
}

void BrightScriptParser::PrintStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BrightScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrintStatement(this);
}

void BrightScriptParser::PrintStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BrightScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrintStatement(this);
}


antlrcpp::Any BrightScriptParser::PrintStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BrightScriptVisitor*>(visitor))
    return parserVisitor->visitPrintStatement(this);
  else
    return visitor->visitChildren(this);
}

BrightScriptParser::PrintStatementContext* BrightScriptParser::printStatement() {
  PrintStatementContext *_localctx = _tracker.createInstance<PrintStatementContext>(_ctx, getState());
  enterRule(_localctx, 62, BrightScriptParser::RulePrintStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(556);
    _la = _input->LA(1);
    if (!(_la == BrightScriptParser::PRINT

    || _la == BrightScriptParser::QUESTION_MARK)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(570);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << BrightScriptParser::BOX)
      | (1ULL << BrightScriptParser::CREATEOBJECT)
      | (1ULL << BrightScriptParser::EVAL)
      | (1ULL << BrightScriptParser::FALSE)
      | (1ULL << BrightScriptParser::GETGLOBALAA)
      | (1ULL << BrightScriptParser::GETLASTRUNCOMPILEERROR)
      | (1ULL << BrightScriptParser::GETLASTRUNRUNTIMEERROR)
      | (1ULL << BrightScriptParser::INVALID)
      | (1ULL << BrightScriptParser::NOT)
      | (1ULL << BrightScriptParser::RUN)
      | (1ULL << BrightScriptParser::STRING)
      | (1ULL << BrightScriptParser::TAB)
      | (1ULL << BrightScriptParser::TRUE)
      | (1ULL << BrightScriptParser::TYPE)
      | (1ULL << BrightScriptParser::STRING_LITERAL)
      | (1ULL << BrightScriptParser::INT_LITERAL)
      | (1ULL << BrightScriptParser::FLOAT_LITERAL)
      | (1ULL << BrightScriptParser::IDENTIFIER))) != 0) || ((((_la - 82) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 82)) & ((1ULL << (BrightScriptParser::OPEN_PARENTHESIS - 82))
      | (1ULL << (BrightScriptParser::ADD - 82))
      | (1ULL << (BrightScriptParser::SUBTRACT - 82)))) != 0)) {
      setState(557);
      expression(0);
      setState(564);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 77, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(559);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == BrightScriptParser::SEMICOLON) {
            setState(558);
            match(BrightScriptParser::SEMICOLON);
          }
          setState(561);
          expression(0); 
        }
        setState(566);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 77, _ctx);
      }
      setState(568);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == BrightScriptParser::SEMICOLON) {
        setState(567);
        match(BrightScriptParser::SEMICOLON);
      }
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReturnStatementContext ------------------------------------------------------------------

BrightScriptParser::ReturnStatementContext::ReturnStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BrightScriptParser::ReturnStatementContext::RETURN() {
  return getToken(BrightScriptParser::RETURN, 0);
}

BrightScriptParser::AssignableExpressionContext* BrightScriptParser::ReturnStatementContext::assignableExpression() {
  return getRuleContext<BrightScriptParser::AssignableExpressionContext>(0);
}


size_t BrightScriptParser::ReturnStatementContext::getRuleIndex() const {
  return BrightScriptParser::RuleReturnStatement;
}

void BrightScriptParser::ReturnStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BrightScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReturnStatement(this);
}

void BrightScriptParser::ReturnStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BrightScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReturnStatement(this);
}


antlrcpp::Any BrightScriptParser::ReturnStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BrightScriptVisitor*>(visitor))
    return parserVisitor->visitReturnStatement(this);
  else
    return visitor->visitChildren(this);
}

BrightScriptParser::ReturnStatementContext* BrightScriptParser::returnStatement() {
  ReturnStatementContext *_localctx = _tracker.createInstance<ReturnStatementContext>(_ctx, getState());
  enterRule(_localctx, 64, BrightScriptParser::RuleReturnStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(572);
    match(BrightScriptParser::RETURN);
    setState(574);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << BrightScriptParser::BOX)
      | (1ULL << BrightScriptParser::CREATEOBJECT)
      | (1ULL << BrightScriptParser::EVAL)
      | (1ULL << BrightScriptParser::FALSE)
      | (1ULL << BrightScriptParser::FUNCTION)
      | (1ULL << BrightScriptParser::GETGLOBALAA)
      | (1ULL << BrightScriptParser::GETLASTRUNCOMPILEERROR)
      | (1ULL << BrightScriptParser::GETLASTRUNRUNTIMEERROR)
      | (1ULL << BrightScriptParser::INVALID)
      | (1ULL << BrightScriptParser::NOT)
      | (1ULL << BrightScriptParser::RUN)
      | (1ULL << BrightScriptParser::STRING)
      | (1ULL << BrightScriptParser::SUB)
      | (1ULL << BrightScriptParser::TAB)
      | (1ULL << BrightScriptParser::TRUE)
      | (1ULL << BrightScriptParser::TYPE)
      | (1ULL << BrightScriptParser::STRING_LITERAL)
      | (1ULL << BrightScriptParser::INT_LITERAL)
      | (1ULL << BrightScriptParser::FLOAT_LITERAL)
      | (1ULL << BrightScriptParser::IDENTIFIER))) != 0) || ((((_la - 78) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 78)) & ((1ULL << (BrightScriptParser::OPEN_BRACKET - 78))
      | (1ULL << (BrightScriptParser::OPEN_BRACE - 78))
      | (1ULL << (BrightScriptParser::OPEN_PARENTHESIS - 78))
      | (1ULL << (BrightScriptParser::ADD - 78))
      | (1ULL << (BrightScriptParser::SUBTRACT - 78)))) != 0)) {
      setState(573);
      assignableExpression();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StopStatementContext ------------------------------------------------------------------

BrightScriptParser::StopStatementContext::StopStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BrightScriptParser::StopStatementContext::STOP() {
  return getToken(BrightScriptParser::STOP, 0);
}


size_t BrightScriptParser::StopStatementContext::getRuleIndex() const {
  return BrightScriptParser::RuleStopStatement;
}

void BrightScriptParser::StopStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BrightScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStopStatement(this);
}

void BrightScriptParser::StopStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BrightScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStopStatement(this);
}


antlrcpp::Any BrightScriptParser::StopStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BrightScriptVisitor*>(visitor))
    return parserVisitor->visitStopStatement(this);
  else
    return visitor->visitChildren(this);
}

BrightScriptParser::StopStatementContext* BrightScriptParser::stopStatement() {
  StopStatementContext *_localctx = _tracker.createInstance<StopStatementContext>(_ctx, getState());
  enterRule(_localctx, 66, BrightScriptParser::RuleStopStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(576);
    match(BrightScriptParser::STOP);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhileStatementContext ------------------------------------------------------------------

BrightScriptParser::WhileStatementContext::WhileStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> BrightScriptParser::WhileStatementContext::WHILE() {
  return getTokens(BrightScriptParser::WHILE);
}

tree::TerminalNode* BrightScriptParser::WhileStatementContext::WHILE(size_t i) {
  return getToken(BrightScriptParser::WHILE, i);
}

BrightScriptParser::ExpressionContext* BrightScriptParser::WhileStatementContext::expression() {
  return getRuleContext<BrightScriptParser::ExpressionContext>(0);
}

tree::TerminalNode* BrightScriptParser::WhileStatementContext::ENDWHILE() {
  return getToken(BrightScriptParser::ENDWHILE, 0);
}

tree::TerminalNode* BrightScriptParser::WhileStatementContext::END() {
  return getToken(BrightScriptParser::END, 0);
}

std::vector<BrightScriptParser::EndOfStatementContext *> BrightScriptParser::WhileStatementContext::endOfStatement() {
  return getRuleContexts<BrightScriptParser::EndOfStatementContext>();
}

BrightScriptParser::EndOfStatementContext* BrightScriptParser::WhileStatementContext::endOfStatement(size_t i) {
  return getRuleContext<BrightScriptParser::EndOfStatementContext>(i);
}

std::vector<BrightScriptParser::BlockContext *> BrightScriptParser::WhileStatementContext::block() {
  return getRuleContexts<BrightScriptParser::BlockContext>();
}

BrightScriptParser::BlockContext* BrightScriptParser::WhileStatementContext::block(size_t i) {
  return getRuleContext<BrightScriptParser::BlockContext>(i);
}


size_t BrightScriptParser::WhileStatementContext::getRuleIndex() const {
  return BrightScriptParser::RuleWhileStatement;
}

void BrightScriptParser::WhileStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BrightScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhileStatement(this);
}

void BrightScriptParser::WhileStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BrightScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhileStatement(this);
}


antlrcpp::Any BrightScriptParser::WhileStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BrightScriptVisitor*>(visitor))
    return parserVisitor->visitWhileStatement(this);
  else
    return visitor->visitChildren(this);
}

BrightScriptParser::WhileStatementContext* BrightScriptParser::whileStatement() {
  WhileStatementContext *_localctx = _tracker.createInstance<WhileStatementContext>(_ctx, getState());
  enterRule(_localctx, 68, BrightScriptParser::RuleWhileStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(578);
    match(BrightScriptParser::WHILE);
    setState(579);
    expression(0);
    setState(581); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(580);
              endOfStatement();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(583); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 81, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
    setState(588);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 82, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(585);
        block(); 
      }
      setState(590);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 82, _ctx);
    }
    setState(594);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BrightScriptParser::ENDWHILE: {
        setState(591);
        match(BrightScriptParser::ENDWHILE);
        break;
      }

      case BrightScriptParser::END: {
        setState(592);
        match(BrightScriptParser::END);
        setState(593);
        match(BrightScriptParser::WHILE);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AnonymousFunctionDeclarationContext ------------------------------------------------------------------

BrightScriptParser::AnonymousFunctionDeclarationContext::AnonymousFunctionDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> BrightScriptParser::AnonymousFunctionDeclarationContext::FUNCTION() {
  return getTokens(BrightScriptParser::FUNCTION);
}

tree::TerminalNode* BrightScriptParser::AnonymousFunctionDeclarationContext::FUNCTION(size_t i) {
  return getToken(BrightScriptParser::FUNCTION, i);
}

tree::TerminalNode* BrightScriptParser::AnonymousFunctionDeclarationContext::ENDFUNCTION() {
  return getToken(BrightScriptParser::ENDFUNCTION, 0);
}

tree::TerminalNode* BrightScriptParser::AnonymousFunctionDeclarationContext::END() {
  return getToken(BrightScriptParser::END, 0);
}

BrightScriptParser::ParameterListContext* BrightScriptParser::AnonymousFunctionDeclarationContext::parameterList() {
  return getRuleContext<BrightScriptParser::ParameterListContext>(0);
}

tree::TerminalNode* BrightScriptParser::AnonymousFunctionDeclarationContext::AS() {
  return getToken(BrightScriptParser::AS, 0);
}

BrightScriptParser::BaseTypeContext* BrightScriptParser::AnonymousFunctionDeclarationContext::baseType() {
  return getRuleContext<BrightScriptParser::BaseTypeContext>(0);
}

std::vector<BrightScriptParser::EndOfStatementContext *> BrightScriptParser::AnonymousFunctionDeclarationContext::endOfStatement() {
  return getRuleContexts<BrightScriptParser::EndOfStatementContext>();
}

BrightScriptParser::EndOfStatementContext* BrightScriptParser::AnonymousFunctionDeclarationContext::endOfStatement(size_t i) {
  return getRuleContext<BrightScriptParser::EndOfStatementContext>(i);
}

std::vector<BrightScriptParser::BlockContext *> BrightScriptParser::AnonymousFunctionDeclarationContext::block() {
  return getRuleContexts<BrightScriptParser::BlockContext>();
}

BrightScriptParser::BlockContext* BrightScriptParser::AnonymousFunctionDeclarationContext::block(size_t i) {
  return getRuleContext<BrightScriptParser::BlockContext>(i);
}


size_t BrightScriptParser::AnonymousFunctionDeclarationContext::getRuleIndex() const {
  return BrightScriptParser::RuleAnonymousFunctionDeclaration;
}

void BrightScriptParser::AnonymousFunctionDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BrightScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAnonymousFunctionDeclaration(this);
}

void BrightScriptParser::AnonymousFunctionDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BrightScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAnonymousFunctionDeclaration(this);
}


antlrcpp::Any BrightScriptParser::AnonymousFunctionDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BrightScriptVisitor*>(visitor))
    return parserVisitor->visitAnonymousFunctionDeclaration(this);
  else
    return visitor->visitChildren(this);
}

BrightScriptParser::AnonymousFunctionDeclarationContext* BrightScriptParser::anonymousFunctionDeclaration() {
  AnonymousFunctionDeclarationContext *_localctx = _tracker.createInstance<AnonymousFunctionDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 70, BrightScriptParser::RuleAnonymousFunctionDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(596);
    match(BrightScriptParser::FUNCTION);
    setState(598);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BrightScriptParser::OPEN_PARENTHESIS) {
      setState(597);
      parameterList();
    }
    setState(602);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BrightScriptParser::AS) {
      setState(600);
      match(BrightScriptParser::AS);
      setState(601);
      baseType();
    }
    setState(605); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(604);
              endOfStatement();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(607); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 86, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
    setState(612);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 87, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(609);
        block(); 
      }
      setState(614);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 87, _ctx);
    }
    setState(618);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BrightScriptParser::ENDFUNCTION: {
        setState(615);
        match(BrightScriptParser::ENDFUNCTION);
        break;
      }

      case BrightScriptParser::END: {
        setState(616);
        match(BrightScriptParser::END);
        setState(617);
        match(BrightScriptParser::FUNCTION);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionDeclarationContext ------------------------------------------------------------------

BrightScriptParser::FunctionDeclarationContext::FunctionDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> BrightScriptParser::FunctionDeclarationContext::FUNCTION() {
  return getTokens(BrightScriptParser::FUNCTION);
}

tree::TerminalNode* BrightScriptParser::FunctionDeclarationContext::FUNCTION(size_t i) {
  return getToken(BrightScriptParser::FUNCTION, i);
}

BrightScriptParser::UntypedIdentifierContext* BrightScriptParser::FunctionDeclarationContext::untypedIdentifier() {
  return getRuleContext<BrightScriptParser::UntypedIdentifierContext>(0);
}

tree::TerminalNode* BrightScriptParser::FunctionDeclarationContext::ENDFUNCTION() {
  return getToken(BrightScriptParser::ENDFUNCTION, 0);
}

tree::TerminalNode* BrightScriptParser::FunctionDeclarationContext::END() {
  return getToken(BrightScriptParser::END, 0);
}

BrightScriptParser::ParameterListContext* BrightScriptParser::FunctionDeclarationContext::parameterList() {
  return getRuleContext<BrightScriptParser::ParameterListContext>(0);
}

tree::TerminalNode* BrightScriptParser::FunctionDeclarationContext::AS() {
  return getToken(BrightScriptParser::AS, 0);
}

BrightScriptParser::BaseTypeContext* BrightScriptParser::FunctionDeclarationContext::baseType() {
  return getRuleContext<BrightScriptParser::BaseTypeContext>(0);
}

std::vector<BrightScriptParser::EndOfStatementContext *> BrightScriptParser::FunctionDeclarationContext::endOfStatement() {
  return getRuleContexts<BrightScriptParser::EndOfStatementContext>();
}

BrightScriptParser::EndOfStatementContext* BrightScriptParser::FunctionDeclarationContext::endOfStatement(size_t i) {
  return getRuleContext<BrightScriptParser::EndOfStatementContext>(i);
}

std::vector<BrightScriptParser::BlockContext *> BrightScriptParser::FunctionDeclarationContext::block() {
  return getRuleContexts<BrightScriptParser::BlockContext>();
}

BrightScriptParser::BlockContext* BrightScriptParser::FunctionDeclarationContext::block(size_t i) {
  return getRuleContext<BrightScriptParser::BlockContext>(i);
}


size_t BrightScriptParser::FunctionDeclarationContext::getRuleIndex() const {
  return BrightScriptParser::RuleFunctionDeclaration;
}

void BrightScriptParser::FunctionDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BrightScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionDeclaration(this);
}

void BrightScriptParser::FunctionDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BrightScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionDeclaration(this);
}


antlrcpp::Any BrightScriptParser::FunctionDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BrightScriptVisitor*>(visitor))
    return parserVisitor->visitFunctionDeclaration(this);
  else
    return visitor->visitChildren(this);
}

BrightScriptParser::FunctionDeclarationContext* BrightScriptParser::functionDeclaration() {
  FunctionDeclarationContext *_localctx = _tracker.createInstance<FunctionDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 72, BrightScriptParser::RuleFunctionDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(620);
    match(BrightScriptParser::FUNCTION);
    setState(621);
    untypedIdentifier();
    setState(623);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BrightScriptParser::OPEN_PARENTHESIS) {
      setState(622);
      parameterList();
    }
    setState(627);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BrightScriptParser::AS) {
      setState(625);
      match(BrightScriptParser::AS);
      setState(626);
      baseType();
    }
    setState(630); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(629);
              endOfStatement();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(632); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 91, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
    setState(637);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 92, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(634);
        block(); 
      }
      setState(639);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 92, _ctx);
    }
    setState(643);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BrightScriptParser::ENDFUNCTION: {
        setState(640);
        match(BrightScriptParser::ENDFUNCTION);
        break;
      }

      case BrightScriptParser::END: {
        setState(641);
        match(BrightScriptParser::END);
        setState(642);
        match(BrightScriptParser::FUNCTION);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AnonymousSubDeclarationContext ------------------------------------------------------------------

BrightScriptParser::AnonymousSubDeclarationContext::AnonymousSubDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> BrightScriptParser::AnonymousSubDeclarationContext::SUB() {
  return getTokens(BrightScriptParser::SUB);
}

tree::TerminalNode* BrightScriptParser::AnonymousSubDeclarationContext::SUB(size_t i) {
  return getToken(BrightScriptParser::SUB, i);
}

tree::TerminalNode* BrightScriptParser::AnonymousSubDeclarationContext::ENDSUB() {
  return getToken(BrightScriptParser::ENDSUB, 0);
}

tree::TerminalNode* BrightScriptParser::AnonymousSubDeclarationContext::END() {
  return getToken(BrightScriptParser::END, 0);
}

BrightScriptParser::ParameterListContext* BrightScriptParser::AnonymousSubDeclarationContext::parameterList() {
  return getRuleContext<BrightScriptParser::ParameterListContext>(0);
}

std::vector<BrightScriptParser::EndOfStatementContext *> BrightScriptParser::AnonymousSubDeclarationContext::endOfStatement() {
  return getRuleContexts<BrightScriptParser::EndOfStatementContext>();
}

BrightScriptParser::EndOfStatementContext* BrightScriptParser::AnonymousSubDeclarationContext::endOfStatement(size_t i) {
  return getRuleContext<BrightScriptParser::EndOfStatementContext>(i);
}

std::vector<BrightScriptParser::BlockContext *> BrightScriptParser::AnonymousSubDeclarationContext::block() {
  return getRuleContexts<BrightScriptParser::BlockContext>();
}

BrightScriptParser::BlockContext* BrightScriptParser::AnonymousSubDeclarationContext::block(size_t i) {
  return getRuleContext<BrightScriptParser::BlockContext>(i);
}


size_t BrightScriptParser::AnonymousSubDeclarationContext::getRuleIndex() const {
  return BrightScriptParser::RuleAnonymousSubDeclaration;
}

void BrightScriptParser::AnonymousSubDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BrightScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAnonymousSubDeclaration(this);
}

void BrightScriptParser::AnonymousSubDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BrightScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAnonymousSubDeclaration(this);
}


antlrcpp::Any BrightScriptParser::AnonymousSubDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BrightScriptVisitor*>(visitor))
    return parserVisitor->visitAnonymousSubDeclaration(this);
  else
    return visitor->visitChildren(this);
}

BrightScriptParser::AnonymousSubDeclarationContext* BrightScriptParser::anonymousSubDeclaration() {
  AnonymousSubDeclarationContext *_localctx = _tracker.createInstance<AnonymousSubDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 74, BrightScriptParser::RuleAnonymousSubDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(645);
    match(BrightScriptParser::SUB);
    setState(647);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BrightScriptParser::OPEN_PARENTHESIS) {
      setState(646);
      parameterList();
    }
    setState(650); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(649);
              endOfStatement();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(652); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 95, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
    setState(657);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 96, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(654);
        block(); 
      }
      setState(659);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 96, _ctx);
    }
    setState(663);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BrightScriptParser::ENDSUB: {
        setState(660);
        match(BrightScriptParser::ENDSUB);
        break;
      }

      case BrightScriptParser::END: {
        setState(661);
        match(BrightScriptParser::END);
        setState(662);
        match(BrightScriptParser::SUB);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SubDeclarationContext ------------------------------------------------------------------

BrightScriptParser::SubDeclarationContext::SubDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> BrightScriptParser::SubDeclarationContext::SUB() {
  return getTokens(BrightScriptParser::SUB);
}

tree::TerminalNode* BrightScriptParser::SubDeclarationContext::SUB(size_t i) {
  return getToken(BrightScriptParser::SUB, i);
}

BrightScriptParser::UntypedIdentifierContext* BrightScriptParser::SubDeclarationContext::untypedIdentifier() {
  return getRuleContext<BrightScriptParser::UntypedIdentifierContext>(0);
}

tree::TerminalNode* BrightScriptParser::SubDeclarationContext::ENDSUB() {
  return getToken(BrightScriptParser::ENDSUB, 0);
}

tree::TerminalNode* BrightScriptParser::SubDeclarationContext::END() {
  return getToken(BrightScriptParser::END, 0);
}

BrightScriptParser::ParameterListContext* BrightScriptParser::SubDeclarationContext::parameterList() {
  return getRuleContext<BrightScriptParser::ParameterListContext>(0);
}

std::vector<BrightScriptParser::EndOfStatementContext *> BrightScriptParser::SubDeclarationContext::endOfStatement() {
  return getRuleContexts<BrightScriptParser::EndOfStatementContext>();
}

BrightScriptParser::EndOfStatementContext* BrightScriptParser::SubDeclarationContext::endOfStatement(size_t i) {
  return getRuleContext<BrightScriptParser::EndOfStatementContext>(i);
}

std::vector<BrightScriptParser::BlockContext *> BrightScriptParser::SubDeclarationContext::block() {
  return getRuleContexts<BrightScriptParser::BlockContext>();
}

BrightScriptParser::BlockContext* BrightScriptParser::SubDeclarationContext::block(size_t i) {
  return getRuleContext<BrightScriptParser::BlockContext>(i);
}


size_t BrightScriptParser::SubDeclarationContext::getRuleIndex() const {
  return BrightScriptParser::RuleSubDeclaration;
}

void BrightScriptParser::SubDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BrightScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSubDeclaration(this);
}

void BrightScriptParser::SubDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BrightScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSubDeclaration(this);
}


antlrcpp::Any BrightScriptParser::SubDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BrightScriptVisitor*>(visitor))
    return parserVisitor->visitSubDeclaration(this);
  else
    return visitor->visitChildren(this);
}

BrightScriptParser::SubDeclarationContext* BrightScriptParser::subDeclaration() {
  SubDeclarationContext *_localctx = _tracker.createInstance<SubDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 76, BrightScriptParser::RuleSubDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(665);
    match(BrightScriptParser::SUB);
    setState(666);
    untypedIdentifier();
    setState(668);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BrightScriptParser::OPEN_PARENTHESIS) {
      setState(667);
      parameterList();
    }
    setState(671); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(670);
              endOfStatement();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(673); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 99, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
    setState(678);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 100, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(675);
        block(); 
      }
      setState(680);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 100, _ctx);
    }
    setState(684);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BrightScriptParser::ENDSUB: {
        setState(681);
        match(BrightScriptParser::ENDSUB);
        break;
      }

      case BrightScriptParser::END: {
        setState(682);
        match(BrightScriptParser::END);
        setState(683);
        match(BrightScriptParser::SUB);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParameterListContext ------------------------------------------------------------------

BrightScriptParser::ParameterListContext::ParameterListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BrightScriptParser::ParameterListContext::OPEN_PARENTHESIS() {
  return getToken(BrightScriptParser::OPEN_PARENTHESIS, 0);
}

tree::TerminalNode* BrightScriptParser::ParameterListContext::CLOSE_PARENTHESIS() {
  return getToken(BrightScriptParser::CLOSE_PARENTHESIS, 0);
}

std::vector<BrightScriptParser::ParameterContext *> BrightScriptParser::ParameterListContext::parameter() {
  return getRuleContexts<BrightScriptParser::ParameterContext>();
}

BrightScriptParser::ParameterContext* BrightScriptParser::ParameterListContext::parameter(size_t i) {
  return getRuleContext<BrightScriptParser::ParameterContext>(i);
}

std::vector<tree::TerminalNode *> BrightScriptParser::ParameterListContext::COMMA() {
  return getTokens(BrightScriptParser::COMMA);
}

tree::TerminalNode* BrightScriptParser::ParameterListContext::COMMA(size_t i) {
  return getToken(BrightScriptParser::COMMA, i);
}


size_t BrightScriptParser::ParameterListContext::getRuleIndex() const {
  return BrightScriptParser::RuleParameterList;
}

void BrightScriptParser::ParameterListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BrightScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameterList(this);
}

void BrightScriptParser::ParameterListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BrightScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameterList(this);
}


antlrcpp::Any BrightScriptParser::ParameterListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BrightScriptVisitor*>(visitor))
    return parserVisitor->visitParameterList(this);
  else
    return visitor->visitChildren(this);
}

BrightScriptParser::ParameterListContext* BrightScriptParser::parameterList() {
  ParameterListContext *_localctx = _tracker.createInstance<ParameterListContext>(_ctx, getState());
  enterRule(_localctx, 78, BrightScriptParser::RuleParameterList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(686);
    match(BrightScriptParser::OPEN_PARENTHESIS);
    setState(695);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << BrightScriptParser::FALSE)
      | (1ULL << BrightScriptParser::INVALID)
      | (1ULL << BrightScriptParser::TRUE)
      | (1ULL << BrightScriptParser::STRING_LITERAL)
      | (1ULL << BrightScriptParser::INT_LITERAL)
      | (1ULL << BrightScriptParser::FLOAT_LITERAL)
      | (1ULL << BrightScriptParser::IDENTIFIER))) != 0)) {
      setState(687);
      parameter();
      setState(692);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == BrightScriptParser::COMMA) {
        setState(688);
        match(BrightScriptParser::COMMA);
        setState(689);
        parameter();
        setState(694);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(697);
    match(BrightScriptParser::CLOSE_PARENTHESIS);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParameterContext ------------------------------------------------------------------

BrightScriptParser::ParameterContext::ParameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BrightScriptParser::LiteralContext* BrightScriptParser::ParameterContext::literal() {
  return getRuleContext<BrightScriptParser::LiteralContext>(0);
}

BrightScriptParser::IdentifierContext* BrightScriptParser::ParameterContext::identifier() {
  return getRuleContext<BrightScriptParser::IdentifierContext>(0);
}

tree::TerminalNode* BrightScriptParser::ParameterContext::EQUALS() {
  return getToken(BrightScriptParser::EQUALS, 0);
}

BrightScriptParser::AssignableExpressionContext* BrightScriptParser::ParameterContext::assignableExpression() {
  return getRuleContext<BrightScriptParser::AssignableExpressionContext>(0);
}

tree::TerminalNode* BrightScriptParser::ParameterContext::AS() {
  return getToken(BrightScriptParser::AS, 0);
}

BrightScriptParser::BaseTypeContext* BrightScriptParser::ParameterContext::baseType() {
  return getRuleContext<BrightScriptParser::BaseTypeContext>(0);
}


size_t BrightScriptParser::ParameterContext::getRuleIndex() const {
  return BrightScriptParser::RuleParameter;
}

void BrightScriptParser::ParameterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BrightScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameter(this);
}

void BrightScriptParser::ParameterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BrightScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameter(this);
}


antlrcpp::Any BrightScriptParser::ParameterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BrightScriptVisitor*>(visitor))
    return parserVisitor->visitParameter(this);
  else
    return visitor->visitChildren(this);
}

BrightScriptParser::ParameterContext* BrightScriptParser::parameter() {
  ParameterContext *_localctx = _tracker.createInstance<ParameterContext>(_ctx, getState());
  enterRule(_localctx, 80, BrightScriptParser::RuleParameter);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(701);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BrightScriptParser::FALSE:
      case BrightScriptParser::INVALID:
      case BrightScriptParser::TRUE:
      case BrightScriptParser::STRING_LITERAL:
      case BrightScriptParser::INT_LITERAL:
      case BrightScriptParser::FLOAT_LITERAL: {
        setState(699);
        literal();
        break;
      }

      case BrightScriptParser::IDENTIFIER: {
        setState(700);
        identifier();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(705);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BrightScriptParser::EQUALS) {
      setState(703);
      match(BrightScriptParser::EQUALS);
      setState(704);
      assignableExpression();
    }
    setState(709);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BrightScriptParser::AS) {
      setState(707);
      match(BrightScriptParser::AS);
      setState(708);
      baseType();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BaseTypeContext ------------------------------------------------------------------

BrightScriptParser::BaseTypeContext::BaseTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BrightScriptParser::BaseTypeContext::BOOLEAN() {
  return getToken(BrightScriptParser::BOOLEAN, 0);
}

tree::TerminalNode* BrightScriptParser::BaseTypeContext::DOUBLE() {
  return getToken(BrightScriptParser::DOUBLE, 0);
}

tree::TerminalNode* BrightScriptParser::BaseTypeContext::DYNAMIC() {
  return getToken(BrightScriptParser::DYNAMIC, 0);
}

tree::TerminalNode* BrightScriptParser::BaseTypeContext::FLOAT() {
  return getToken(BrightScriptParser::FLOAT, 0);
}

tree::TerminalNode* BrightScriptParser::BaseTypeContext::FUNCTION() {
  return getToken(BrightScriptParser::FUNCTION, 0);
}

tree::TerminalNode* BrightScriptParser::BaseTypeContext::INTEGER() {
  return getToken(BrightScriptParser::INTEGER, 0);
}

tree::TerminalNode* BrightScriptParser::BaseTypeContext::LONGINTEGER() {
  return getToken(BrightScriptParser::LONGINTEGER, 0);
}

tree::TerminalNode* BrightScriptParser::BaseTypeContext::OBJECT() {
  return getToken(BrightScriptParser::OBJECT, 0);
}

tree::TerminalNode* BrightScriptParser::BaseTypeContext::STRING() {
  return getToken(BrightScriptParser::STRING, 0);
}

tree::TerminalNode* BrightScriptParser::BaseTypeContext::VOID() {
  return getToken(BrightScriptParser::VOID, 0);
}


size_t BrightScriptParser::BaseTypeContext::getRuleIndex() const {
  return BrightScriptParser::RuleBaseType;
}

void BrightScriptParser::BaseTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BrightScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBaseType(this);
}

void BrightScriptParser::BaseTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BrightScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBaseType(this);
}


antlrcpp::Any BrightScriptParser::BaseTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BrightScriptVisitor*>(visitor))
    return parserVisitor->visitBaseType(this);
  else
    return visitor->visitChildren(this);
}

BrightScriptParser::BaseTypeContext* BrightScriptParser::baseType() {
  BaseTypeContext *_localctx = _tracker.createInstance<BaseTypeContext>(_ctx, getState());
  enterRule(_localctx, 82, BrightScriptParser::RuleBaseType);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(711);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << BrightScriptParser::BOOLEAN)
      | (1ULL << BrightScriptParser::DOUBLE)
      | (1ULL << BrightScriptParser::DYNAMIC)
      | (1ULL << BrightScriptParser::FLOAT)
      | (1ULL << BrightScriptParser::FUNCTION)
      | (1ULL << BrightScriptParser::INTEGER)
      | (1ULL << BrightScriptParser::LONGINTEGER)
      | (1ULL << BrightScriptParser::OBJECT)
      | (1ULL << BrightScriptParser::STRING)
      | (1ULL << BrightScriptParser::VOID))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionListContext ------------------------------------------------------------------

BrightScriptParser::ExpressionListContext::ExpressionListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<BrightScriptParser::TraversableExpressionContext *> BrightScriptParser::ExpressionListContext::traversableExpression() {
  return getRuleContexts<BrightScriptParser::TraversableExpressionContext>();
}

BrightScriptParser::TraversableExpressionContext* BrightScriptParser::ExpressionListContext::traversableExpression(size_t i) {
  return getRuleContext<BrightScriptParser::TraversableExpressionContext>(i);
}

std::vector<tree::TerminalNode *> BrightScriptParser::ExpressionListContext::COMMA() {
  return getTokens(BrightScriptParser::COMMA);
}

tree::TerminalNode* BrightScriptParser::ExpressionListContext::COMMA(size_t i) {
  return getToken(BrightScriptParser::COMMA, i);
}


size_t BrightScriptParser::ExpressionListContext::getRuleIndex() const {
  return BrightScriptParser::RuleExpressionList;
}

void BrightScriptParser::ExpressionListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BrightScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpressionList(this);
}

void BrightScriptParser::ExpressionListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BrightScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpressionList(this);
}


antlrcpp::Any BrightScriptParser::ExpressionListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BrightScriptVisitor*>(visitor))
    return parserVisitor->visitExpressionList(this);
  else
    return visitor->visitChildren(this);
}

BrightScriptParser::ExpressionListContext* BrightScriptParser::expressionList() {
  ExpressionListContext *_localctx = _tracker.createInstance<ExpressionListContext>(_ctx, getState());
  enterRule(_localctx, 84, BrightScriptParser::RuleExpressionList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(713);
    traversableExpression();
    setState(718);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BrightScriptParser::COMMA) {
      setState(714);
      match(BrightScriptParser::COMMA);
      setState(715);
      traversableExpression();
      setState(720);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

BrightScriptParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BrightScriptParser::PrimaryContext* BrightScriptParser::ExpressionContext::primary() {
  return getRuleContext<BrightScriptParser::PrimaryContext>(0);
}

BrightScriptParser::GlobalFunctionInvocationContext* BrightScriptParser::ExpressionContext::globalFunctionInvocation() {
  return getRuleContext<BrightScriptParser::GlobalFunctionInvocationContext>(0);
}

std::vector<BrightScriptParser::ExpressionContext *> BrightScriptParser::ExpressionContext::expression() {
  return getRuleContexts<BrightScriptParser::ExpressionContext>();
}

BrightScriptParser::ExpressionContext* BrightScriptParser::ExpressionContext::expression(size_t i) {
  return getRuleContext<BrightScriptParser::ExpressionContext>(i);
}

tree::TerminalNode* BrightScriptParser::ExpressionContext::ADD() {
  return getToken(BrightScriptParser::ADD, 0);
}

tree::TerminalNode* BrightScriptParser::ExpressionContext::SUBTRACT() {
  return getToken(BrightScriptParser::SUBTRACT, 0);
}

tree::TerminalNode* BrightScriptParser::ExpressionContext::NOT() {
  return getToken(BrightScriptParser::NOT, 0);
}

tree::TerminalNode* BrightScriptParser::ExpressionContext::MULTIPLY() {
  return getToken(BrightScriptParser::MULTIPLY, 0);
}

tree::TerminalNode* BrightScriptParser::ExpressionContext::DIVIDE() {
  return getToken(BrightScriptParser::DIVIDE, 0);
}

tree::TerminalNode* BrightScriptParser::ExpressionContext::MOD() {
  return getToken(BrightScriptParser::MOD, 0);
}

tree::TerminalNode* BrightScriptParser::ExpressionContext::DIVIDE_INTEGER() {
  return getToken(BrightScriptParser::DIVIDE_INTEGER, 0);
}

tree::TerminalNode* BrightScriptParser::ExpressionContext::EXPONENT() {
  return getToken(BrightScriptParser::EXPONENT, 0);
}

tree::TerminalNode* BrightScriptParser::ExpressionContext::BITSHIFT_LEFT() {
  return getToken(BrightScriptParser::BITSHIFT_LEFT, 0);
}

tree::TerminalNode* BrightScriptParser::ExpressionContext::BITSHIFT_RIGHT() {
  return getToken(BrightScriptParser::BITSHIFT_RIGHT, 0);
}

tree::TerminalNode* BrightScriptParser::ExpressionContext::GREATER_THAN() {
  return getToken(BrightScriptParser::GREATER_THAN, 0);
}

tree::TerminalNode* BrightScriptParser::ExpressionContext::LESS_THAN() {
  return getToken(BrightScriptParser::LESS_THAN, 0);
}

tree::TerminalNode* BrightScriptParser::ExpressionContext::EQUALS() {
  return getToken(BrightScriptParser::EQUALS, 0);
}

tree::TerminalNode* BrightScriptParser::ExpressionContext::NOT_EQUAL() {
  return getToken(BrightScriptParser::NOT_EQUAL, 0);
}

tree::TerminalNode* BrightScriptParser::ExpressionContext::GREATER_THAN_OR_EQUAL() {
  return getToken(BrightScriptParser::GREATER_THAN_OR_EQUAL, 0);
}

tree::TerminalNode* BrightScriptParser::ExpressionContext::LESS_THAN_OR_EQUAL() {
  return getToken(BrightScriptParser::LESS_THAN_OR_EQUAL, 0);
}

tree::TerminalNode* BrightScriptParser::ExpressionContext::AND() {
  return getToken(BrightScriptParser::AND, 0);
}

tree::TerminalNode* BrightScriptParser::ExpressionContext::OR() {
  return getToken(BrightScriptParser::OR, 0);
}

tree::TerminalNode* BrightScriptParser::ExpressionContext::DOT() {
  return getToken(BrightScriptParser::DOT, 0);
}

tree::TerminalNode* BrightScriptParser::ExpressionContext::ATTRIBUTE_OPERATOR() {
  return getToken(BrightScriptParser::ATTRIBUTE_OPERATOR, 0);
}

BrightScriptParser::IdentifierContext* BrightScriptParser::ExpressionContext::identifier() {
  return getRuleContext<BrightScriptParser::IdentifierContext>(0);
}

BrightScriptParser::ReservedWordContext* BrightScriptParser::ExpressionContext::reservedWord() {
  return getRuleContext<BrightScriptParser::ReservedWordContext>(0);
}

tree::TerminalNode* BrightScriptParser::ExpressionContext::OPEN_BRACKET() {
  return getToken(BrightScriptParser::OPEN_BRACKET, 0);
}

tree::TerminalNode* BrightScriptParser::ExpressionContext::CLOSE_BRACKET() {
  return getToken(BrightScriptParser::CLOSE_BRACKET, 0);
}

tree::TerminalNode* BrightScriptParser::ExpressionContext::OPEN_PARENTHESIS() {
  return getToken(BrightScriptParser::OPEN_PARENTHESIS, 0);
}

tree::TerminalNode* BrightScriptParser::ExpressionContext::CLOSE_PARENTHESIS() {
  return getToken(BrightScriptParser::CLOSE_PARENTHESIS, 0);
}

BrightScriptParser::ExpressionListContext* BrightScriptParser::ExpressionContext::expressionList() {
  return getRuleContext<BrightScriptParser::ExpressionListContext>(0);
}

tree::TerminalNode* BrightScriptParser::ExpressionContext::INCREMENT() {
  return getToken(BrightScriptParser::INCREMENT, 0);
}

tree::TerminalNode* BrightScriptParser::ExpressionContext::DECREMENT() {
  return getToken(BrightScriptParser::DECREMENT, 0);
}

BrightScriptParser::AssignableExpressionContext* BrightScriptParser::ExpressionContext::assignableExpression() {
  return getRuleContext<BrightScriptParser::AssignableExpressionContext>(0);
}

tree::TerminalNode* BrightScriptParser::ExpressionContext::ASSIGNMENT_ADD() {
  return getToken(BrightScriptParser::ASSIGNMENT_ADD, 0);
}

tree::TerminalNode* BrightScriptParser::ExpressionContext::ASSIGNMENT_SUBTRACT() {
  return getToken(BrightScriptParser::ASSIGNMENT_SUBTRACT, 0);
}

tree::TerminalNode* BrightScriptParser::ExpressionContext::ASSIGNMENT_MULTIPLY() {
  return getToken(BrightScriptParser::ASSIGNMENT_MULTIPLY, 0);
}

tree::TerminalNode* BrightScriptParser::ExpressionContext::ASSIGNMENT_DIVIDE() {
  return getToken(BrightScriptParser::ASSIGNMENT_DIVIDE, 0);
}

tree::TerminalNode* BrightScriptParser::ExpressionContext::ASSIGNMENT_DIVIDE_INTEGER() {
  return getToken(BrightScriptParser::ASSIGNMENT_DIVIDE_INTEGER, 0);
}

tree::TerminalNode* BrightScriptParser::ExpressionContext::ASSIGNMENT_BITSHIFT_LEFT() {
  return getToken(BrightScriptParser::ASSIGNMENT_BITSHIFT_LEFT, 0);
}

tree::TerminalNode* BrightScriptParser::ExpressionContext::ASSIGNMENT_BITSHIFT_RIGHT() {
  return getToken(BrightScriptParser::ASSIGNMENT_BITSHIFT_RIGHT, 0);
}


size_t BrightScriptParser::ExpressionContext::getRuleIndex() const {
  return BrightScriptParser::RuleExpression;
}

void BrightScriptParser::ExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BrightScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression(this);
}

void BrightScriptParser::ExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BrightScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression(this);
}


antlrcpp::Any BrightScriptParser::ExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BrightScriptVisitor*>(visitor))
    return parserVisitor->visitExpression(this);
  else
    return visitor->visitChildren(this);
}


BrightScriptParser::ExpressionContext* BrightScriptParser::expression() {
   return expression(0);
}

BrightScriptParser::ExpressionContext* BrightScriptParser::expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  BrightScriptParser::ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, parentState);
  BrightScriptParser::ExpressionContext *previousContext = _localctx;
  size_t startState = 86;
  enterRecursionRule(_localctx, 86, BrightScriptParser::RuleExpression, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(728);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BrightScriptParser::FALSE:
      case BrightScriptParser::INVALID:
      case BrightScriptParser::TRUE:
      case BrightScriptParser::STRING_LITERAL:
      case BrightScriptParser::INT_LITERAL:
      case BrightScriptParser::FLOAT_LITERAL:
      case BrightScriptParser::IDENTIFIER:
      case BrightScriptParser::OPEN_PARENTHESIS: {
        setState(722);
        primary();
        break;
      }

      case BrightScriptParser::BOX:
      case BrightScriptParser::CREATEOBJECT:
      case BrightScriptParser::EVAL:
      case BrightScriptParser::GETGLOBALAA:
      case BrightScriptParser::GETLASTRUNCOMPILEERROR:
      case BrightScriptParser::GETLASTRUNRUNTIMEERROR:
      case BrightScriptParser::RUN:
      case BrightScriptParser::STRING:
      case BrightScriptParser::TAB:
      case BrightScriptParser::TYPE: {
        setState(723);
        globalFunctionInvocation();
        break;
      }

      case BrightScriptParser::ADD:
      case BrightScriptParser::SUBTRACT: {
        setState(724);
        _la = _input->LA(1);
        if (!(_la == BrightScriptParser::ADD

        || _la == BrightScriptParser::SUBTRACT)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(725);
        expression(9);
        break;
      }

      case BrightScriptParser::NOT: {
        setState(726);
        match(BrightScriptParser::NOT);
        setState(727);
        expression(3);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(769);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 112, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(767);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 111, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(730);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(731);
          _la = _input->LA(1);
          if (!(((((_la - 37) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 37)) & ((1ULL << (BrightScriptParser::MOD - 37))
            | (1ULL << (BrightScriptParser::MULTIPLY - 37))
            | (1ULL << (BrightScriptParser::DIVIDE - 37))
            | (1ULL << (BrightScriptParser::EXPONENT - 37))
            | (1ULL << (BrightScriptParser::DIVIDE_INTEGER - 37)))) != 0))) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(732);
          expression(8);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(733);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(734);
          _la = _input->LA(1);
          if (!(_la == BrightScriptParser::ADD

          || _la == BrightScriptParser::SUBTRACT)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(735);
          expression(7);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(736);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(737);
          _la = _input->LA(1);
          if (!(_la == BrightScriptParser::BITSHIFT_LEFT

          || _la == BrightScriptParser::BITSHIFT_RIGHT)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(738);
          expression(6);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(739);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(740);
          _la = _input->LA(1);
          if (!(((((_la - 87) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 87)) & ((1ULL << (BrightScriptParser::EQUALS - 87))
            | (1ULL << (BrightScriptParser::GREATER_THAN - 87))
            | (1ULL << (BrightScriptParser::LESS_THAN - 87))
            | (1ULL << (BrightScriptParser::GREATER_THAN_OR_EQUAL - 87))
            | (1ULL << (BrightScriptParser::LESS_THAN_OR_EQUAL - 87))
            | (1ULL << (BrightScriptParser::NOT_EQUAL - 87)))) != 0))) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(741);
          expression(5);
          break;
        }

        case 5: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(742);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(743);
          _la = _input->LA(1);
          if (!(_la == BrightScriptParser::AND

          || _la == BrightScriptParser::OR)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(744);
          expression(3);
          break;
        }

        case 6: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(745);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(746);
          _la = _input->LA(1);
          if (!(_la == BrightScriptParser::ATTRIBUTE_OPERATOR

          || _la == BrightScriptParser::DOT)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(749);
          _errHandler->sync(this);
          switch (_input->LA(1)) {
            case BrightScriptParser::IDENTIFIER: {
              setState(747);
              identifier();
              break;
            }

            case BrightScriptParser::AND:
            case BrightScriptParser::BOX:
            case BrightScriptParser::CREATEOBJECT:
            case BrightScriptParser::DIM:
            case BrightScriptParser::EACH:
            case BrightScriptParser::ELSE:
            case BrightScriptParser::ELSEIF:
            case BrightScriptParser::END:
            case BrightScriptParser::ENDFUNCTION:
            case BrightScriptParser::ENDIF:
            case BrightScriptParser::ENDSUB:
            case BrightScriptParser::ENDWHILE:
            case BrightScriptParser::EXIT:
            case BrightScriptParser::EXITWHILE:
            case BrightScriptParser::EVAL:
            case BrightScriptParser::FALSE:
            case BrightScriptParser::FOR:
            case BrightScriptParser::FUNCTION:
            case BrightScriptParser::GETGLOBALAA:
            case BrightScriptParser::GETLASTRUNCOMPILEERROR:
            case BrightScriptParser::GETLASTRUNRUNTIMEERROR:
            case BrightScriptParser::GOTO:
            case BrightScriptParser::IF:
            case BrightScriptParser::INVALID:
            case BrightScriptParser::LET:
            case BrightScriptParser::LINE_NUM:
            case BrightScriptParser::NEXT:
            case BrightScriptParser::NOT:
            case BrightScriptParser::OBJFUN:
            case BrightScriptParser::OR:
            case BrightScriptParser::POS:
            case BrightScriptParser::PRINT:
            case BrightScriptParser::REM:
            case BrightScriptParser::RETURN:
            case BrightScriptParser::RUN:
            case BrightScriptParser::STEP:
            case BrightScriptParser::STOP:
            case BrightScriptParser::SUB:
            case BrightScriptParser::TAB:
            case BrightScriptParser::THEN:
            case BrightScriptParser::TO:
            case BrightScriptParser::TRUE:
            case BrightScriptParser::TYPE:
            case BrightScriptParser::WHILE: {
              setState(748);
              reservedWord();
              break;
            }

          default:
            throw NoViableAltException(this);
          }
          break;
        }

        case 7: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(751);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(752);
          match(BrightScriptParser::OPEN_BRACKET);
          setState(753);
          expression(0);
          setState(754);
          match(BrightScriptParser::CLOSE_BRACKET);
          break;
        }

        case 8: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(756);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(757);
          match(BrightScriptParser::OPEN_PARENTHESIS);
          setState(759);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if ((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << BrightScriptParser::BOX)
            | (1ULL << BrightScriptParser::CREATEOBJECT)
            | (1ULL << BrightScriptParser::EVAL)
            | (1ULL << BrightScriptParser::FALSE)
            | (1ULL << BrightScriptParser::GETGLOBALAA)
            | (1ULL << BrightScriptParser::GETLASTRUNCOMPILEERROR)
            | (1ULL << BrightScriptParser::GETLASTRUNRUNTIMEERROR)
            | (1ULL << BrightScriptParser::INVALID)
            | (1ULL << BrightScriptParser::NOT)
            | (1ULL << BrightScriptParser::RUN)
            | (1ULL << BrightScriptParser::STRING)
            | (1ULL << BrightScriptParser::TAB)
            | (1ULL << BrightScriptParser::TRUE)
            | (1ULL << BrightScriptParser::TYPE)
            | (1ULL << BrightScriptParser::STRING_LITERAL)
            | (1ULL << BrightScriptParser::INT_LITERAL)
            | (1ULL << BrightScriptParser::FLOAT_LITERAL)
            | (1ULL << BrightScriptParser::IDENTIFIER))) != 0) || ((((_la - 78) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 78)) & ((1ULL << (BrightScriptParser::OPEN_BRACKET - 78))
            | (1ULL << (BrightScriptParser::OPEN_BRACE - 78))
            | (1ULL << (BrightScriptParser::OPEN_PARENTHESIS - 78))
            | (1ULL << (BrightScriptParser::ADD - 78))
            | (1ULL << (BrightScriptParser::SUBTRACT - 78)))) != 0)) {
            setState(758);
            expressionList();
          }
          setState(761);
          match(BrightScriptParser::CLOSE_PARENTHESIS);
          break;
        }

        case 9: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(762);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(763);
          _la = _input->LA(1);
          if (!(_la == BrightScriptParser::INCREMENT

          || _la == BrightScriptParser::DECREMENT)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          break;
        }

        case 10: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(764);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(765);
          _la = _input->LA(1);
          if (!(((((_la - 87) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 87)) & ((1ULL << (BrightScriptParser::EQUALS - 87))
            | (1ULL << (BrightScriptParser::ASSIGNMENT_ADD - 87))
            | (1ULL << (BrightScriptParser::ASSIGNMENT_SUBTRACT - 87))
            | (1ULL << (BrightScriptParser::ASSIGNMENT_MULTIPLY - 87))
            | (1ULL << (BrightScriptParser::ASSIGNMENT_DIVIDE - 87))
            | (1ULL << (BrightScriptParser::ASSIGNMENT_DIVIDE_INTEGER - 87))
            | (1ULL << (BrightScriptParser::ASSIGNMENT_BITSHIFT_LEFT - 87))
            | (1ULL << (BrightScriptParser::ASSIGNMENT_BITSHIFT_RIGHT - 87)))) != 0))) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(766);
          assignableExpression();
          break;
        }

        } 
      }
      setState(771);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 112, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- TraversableExpressionContext ------------------------------------------------------------------

BrightScriptParser::TraversableExpressionContext::TraversableExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BrightScriptParser::ExpressionContext* BrightScriptParser::TraversableExpressionContext::expression() {
  return getRuleContext<BrightScriptParser::ExpressionContext>(0);
}

BrightScriptParser::ArrayInitializerContext* BrightScriptParser::TraversableExpressionContext::arrayInitializer() {
  return getRuleContext<BrightScriptParser::ArrayInitializerContext>(0);
}

BrightScriptParser::AssociativeArrayInitializerContext* BrightScriptParser::TraversableExpressionContext::associativeArrayInitializer() {
  return getRuleContext<BrightScriptParser::AssociativeArrayInitializerContext>(0);
}


size_t BrightScriptParser::TraversableExpressionContext::getRuleIndex() const {
  return BrightScriptParser::RuleTraversableExpression;
}

void BrightScriptParser::TraversableExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BrightScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTraversableExpression(this);
}

void BrightScriptParser::TraversableExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BrightScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTraversableExpression(this);
}


antlrcpp::Any BrightScriptParser::TraversableExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BrightScriptVisitor*>(visitor))
    return parserVisitor->visitTraversableExpression(this);
  else
    return visitor->visitChildren(this);
}

BrightScriptParser::TraversableExpressionContext* BrightScriptParser::traversableExpression() {
  TraversableExpressionContext *_localctx = _tracker.createInstance<TraversableExpressionContext>(_ctx, getState());
  enterRule(_localctx, 88, BrightScriptParser::RuleTraversableExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(775);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BrightScriptParser::BOX:
      case BrightScriptParser::CREATEOBJECT:
      case BrightScriptParser::EVAL:
      case BrightScriptParser::FALSE:
      case BrightScriptParser::GETGLOBALAA:
      case BrightScriptParser::GETLASTRUNCOMPILEERROR:
      case BrightScriptParser::GETLASTRUNRUNTIMEERROR:
      case BrightScriptParser::INVALID:
      case BrightScriptParser::NOT:
      case BrightScriptParser::RUN:
      case BrightScriptParser::STRING:
      case BrightScriptParser::TAB:
      case BrightScriptParser::TRUE:
      case BrightScriptParser::TYPE:
      case BrightScriptParser::STRING_LITERAL:
      case BrightScriptParser::INT_LITERAL:
      case BrightScriptParser::FLOAT_LITERAL:
      case BrightScriptParser::IDENTIFIER:
      case BrightScriptParser::OPEN_PARENTHESIS:
      case BrightScriptParser::ADD:
      case BrightScriptParser::SUBTRACT: {
        enterOuterAlt(_localctx, 1);
        setState(772);
        expression(0);
        break;
      }

      case BrightScriptParser::OPEN_BRACKET: {
        enterOuterAlt(_localctx, 2);
        setState(773);
        arrayInitializer();
        break;
      }

      case BrightScriptParser::OPEN_BRACE: {
        enterOuterAlt(_localctx, 3);
        setState(774);
        associativeArrayInitializer();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignableExpressionContext ------------------------------------------------------------------

BrightScriptParser::AssignableExpressionContext::AssignableExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BrightScriptParser::ExpressionContext* BrightScriptParser::AssignableExpressionContext::expression() {
  return getRuleContext<BrightScriptParser::ExpressionContext>(0);
}

BrightScriptParser::ArrayInitializerContext* BrightScriptParser::AssignableExpressionContext::arrayInitializer() {
  return getRuleContext<BrightScriptParser::ArrayInitializerContext>(0);
}

BrightScriptParser::AssociativeArrayInitializerContext* BrightScriptParser::AssignableExpressionContext::associativeArrayInitializer() {
  return getRuleContext<BrightScriptParser::AssociativeArrayInitializerContext>(0);
}

BrightScriptParser::AnonymousFunctionDeclarationContext* BrightScriptParser::AssignableExpressionContext::anonymousFunctionDeclaration() {
  return getRuleContext<BrightScriptParser::AnonymousFunctionDeclarationContext>(0);
}

BrightScriptParser::AnonymousSubDeclarationContext* BrightScriptParser::AssignableExpressionContext::anonymousSubDeclaration() {
  return getRuleContext<BrightScriptParser::AnonymousSubDeclarationContext>(0);
}


size_t BrightScriptParser::AssignableExpressionContext::getRuleIndex() const {
  return BrightScriptParser::RuleAssignableExpression;
}

void BrightScriptParser::AssignableExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BrightScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignableExpression(this);
}

void BrightScriptParser::AssignableExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BrightScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignableExpression(this);
}


antlrcpp::Any BrightScriptParser::AssignableExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BrightScriptVisitor*>(visitor))
    return parserVisitor->visitAssignableExpression(this);
  else
    return visitor->visitChildren(this);
}

BrightScriptParser::AssignableExpressionContext* BrightScriptParser::assignableExpression() {
  AssignableExpressionContext *_localctx = _tracker.createInstance<AssignableExpressionContext>(_ctx, getState());
  enterRule(_localctx, 90, BrightScriptParser::RuleAssignableExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(782);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BrightScriptParser::BOX:
      case BrightScriptParser::CREATEOBJECT:
      case BrightScriptParser::EVAL:
      case BrightScriptParser::FALSE:
      case BrightScriptParser::GETGLOBALAA:
      case BrightScriptParser::GETLASTRUNCOMPILEERROR:
      case BrightScriptParser::GETLASTRUNRUNTIMEERROR:
      case BrightScriptParser::INVALID:
      case BrightScriptParser::NOT:
      case BrightScriptParser::RUN:
      case BrightScriptParser::STRING:
      case BrightScriptParser::TAB:
      case BrightScriptParser::TRUE:
      case BrightScriptParser::TYPE:
      case BrightScriptParser::STRING_LITERAL:
      case BrightScriptParser::INT_LITERAL:
      case BrightScriptParser::FLOAT_LITERAL:
      case BrightScriptParser::IDENTIFIER:
      case BrightScriptParser::OPEN_PARENTHESIS:
      case BrightScriptParser::ADD:
      case BrightScriptParser::SUBTRACT: {
        enterOuterAlt(_localctx, 1);
        setState(777);
        expression(0);
        break;
      }

      case BrightScriptParser::OPEN_BRACKET: {
        enterOuterAlt(_localctx, 2);
        setState(778);
        arrayInitializer();
        break;
      }

      case BrightScriptParser::OPEN_BRACE: {
        enterOuterAlt(_localctx, 3);
        setState(779);
        associativeArrayInitializer();
        break;
      }

      case BrightScriptParser::FUNCTION: {
        enterOuterAlt(_localctx, 4);
        setState(780);
        anonymousFunctionDeclaration();
        break;
      }

      case BrightScriptParser::SUB: {
        enterOuterAlt(_localctx, 5);
        setState(781);
        anonymousSubDeclaration();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GlobalFunctionInvocationContext ------------------------------------------------------------------

BrightScriptParser::GlobalFunctionInvocationContext::GlobalFunctionInvocationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BrightScriptParser::GlobalFunctionContext* BrightScriptParser::GlobalFunctionInvocationContext::globalFunction() {
  return getRuleContext<BrightScriptParser::GlobalFunctionContext>(0);
}

tree::TerminalNode* BrightScriptParser::GlobalFunctionInvocationContext::OPEN_PARENTHESIS() {
  return getToken(BrightScriptParser::OPEN_PARENTHESIS, 0);
}

tree::TerminalNode* BrightScriptParser::GlobalFunctionInvocationContext::CLOSE_PARENTHESIS() {
  return getToken(BrightScriptParser::CLOSE_PARENTHESIS, 0);
}

BrightScriptParser::ExpressionListContext* BrightScriptParser::GlobalFunctionInvocationContext::expressionList() {
  return getRuleContext<BrightScriptParser::ExpressionListContext>(0);
}


size_t BrightScriptParser::GlobalFunctionInvocationContext::getRuleIndex() const {
  return BrightScriptParser::RuleGlobalFunctionInvocation;
}

void BrightScriptParser::GlobalFunctionInvocationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BrightScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGlobalFunctionInvocation(this);
}

void BrightScriptParser::GlobalFunctionInvocationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BrightScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGlobalFunctionInvocation(this);
}


antlrcpp::Any BrightScriptParser::GlobalFunctionInvocationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BrightScriptVisitor*>(visitor))
    return parserVisitor->visitGlobalFunctionInvocation(this);
  else
    return visitor->visitChildren(this);
}

BrightScriptParser::GlobalFunctionInvocationContext* BrightScriptParser::globalFunctionInvocation() {
  GlobalFunctionInvocationContext *_localctx = _tracker.createInstance<GlobalFunctionInvocationContext>(_ctx, getState());
  enterRule(_localctx, 92, BrightScriptParser::RuleGlobalFunctionInvocation);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(784);
    globalFunction();
    setState(785);
    match(BrightScriptParser::OPEN_PARENTHESIS);
    setState(787);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << BrightScriptParser::BOX)
      | (1ULL << BrightScriptParser::CREATEOBJECT)
      | (1ULL << BrightScriptParser::EVAL)
      | (1ULL << BrightScriptParser::FALSE)
      | (1ULL << BrightScriptParser::GETGLOBALAA)
      | (1ULL << BrightScriptParser::GETLASTRUNCOMPILEERROR)
      | (1ULL << BrightScriptParser::GETLASTRUNRUNTIMEERROR)
      | (1ULL << BrightScriptParser::INVALID)
      | (1ULL << BrightScriptParser::NOT)
      | (1ULL << BrightScriptParser::RUN)
      | (1ULL << BrightScriptParser::STRING)
      | (1ULL << BrightScriptParser::TAB)
      | (1ULL << BrightScriptParser::TRUE)
      | (1ULL << BrightScriptParser::TYPE)
      | (1ULL << BrightScriptParser::STRING_LITERAL)
      | (1ULL << BrightScriptParser::INT_LITERAL)
      | (1ULL << BrightScriptParser::FLOAT_LITERAL)
      | (1ULL << BrightScriptParser::IDENTIFIER))) != 0) || ((((_la - 78) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 78)) & ((1ULL << (BrightScriptParser::OPEN_BRACKET - 78))
      | (1ULL << (BrightScriptParser::OPEN_BRACE - 78))
      | (1ULL << (BrightScriptParser::OPEN_PARENTHESIS - 78))
      | (1ULL << (BrightScriptParser::ADD - 78))
      | (1ULL << (BrightScriptParser::SUBTRACT - 78)))) != 0)) {
      setState(786);
      expressionList();
    }
    setState(789);
    match(BrightScriptParser::CLOSE_PARENTHESIS);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GlobalFunctionContext ------------------------------------------------------------------

BrightScriptParser::GlobalFunctionContext::GlobalFunctionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BrightScriptParser::GlobalFunctionContext::BOX() {
  return getToken(BrightScriptParser::BOX, 0);
}

tree::TerminalNode* BrightScriptParser::GlobalFunctionContext::CREATEOBJECT() {
  return getToken(BrightScriptParser::CREATEOBJECT, 0);
}

tree::TerminalNode* BrightScriptParser::GlobalFunctionContext::EVAL() {
  return getToken(BrightScriptParser::EVAL, 0);
}

tree::TerminalNode* BrightScriptParser::GlobalFunctionContext::GETLASTRUNCOMPILEERROR() {
  return getToken(BrightScriptParser::GETLASTRUNCOMPILEERROR, 0);
}

tree::TerminalNode* BrightScriptParser::GlobalFunctionContext::GETGLOBALAA() {
  return getToken(BrightScriptParser::GETGLOBALAA, 0);
}

tree::TerminalNode* BrightScriptParser::GlobalFunctionContext::GETLASTRUNRUNTIMEERROR() {
  return getToken(BrightScriptParser::GETLASTRUNRUNTIMEERROR, 0);
}

tree::TerminalNode* BrightScriptParser::GlobalFunctionContext::RUN() {
  return getToken(BrightScriptParser::RUN, 0);
}

tree::TerminalNode* BrightScriptParser::GlobalFunctionContext::STRING() {
  return getToken(BrightScriptParser::STRING, 0);
}

tree::TerminalNode* BrightScriptParser::GlobalFunctionContext::TAB() {
  return getToken(BrightScriptParser::TAB, 0);
}

tree::TerminalNode* BrightScriptParser::GlobalFunctionContext::TYPE() {
  return getToken(BrightScriptParser::TYPE, 0);
}


size_t BrightScriptParser::GlobalFunctionContext::getRuleIndex() const {
  return BrightScriptParser::RuleGlobalFunction;
}

void BrightScriptParser::GlobalFunctionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BrightScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGlobalFunction(this);
}

void BrightScriptParser::GlobalFunctionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BrightScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGlobalFunction(this);
}


antlrcpp::Any BrightScriptParser::GlobalFunctionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BrightScriptVisitor*>(visitor))
    return parserVisitor->visitGlobalFunction(this);
  else
    return visitor->visitChildren(this);
}

BrightScriptParser::GlobalFunctionContext* BrightScriptParser::globalFunction() {
  GlobalFunctionContext *_localctx = _tracker.createInstance<GlobalFunctionContext>(_ctx, getState());
  enterRule(_localctx, 94, BrightScriptParser::RuleGlobalFunction);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(791);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << BrightScriptParser::BOX)
      | (1ULL << BrightScriptParser::CREATEOBJECT)
      | (1ULL << BrightScriptParser::EVAL)
      | (1ULL << BrightScriptParser::GETGLOBALAA)
      | (1ULL << BrightScriptParser::GETLASTRUNCOMPILEERROR)
      | (1ULL << BrightScriptParser::GETLASTRUNRUNTIMEERROR)
      | (1ULL << BrightScriptParser::RUN)
      | (1ULL << BrightScriptParser::STRING)
      | (1ULL << BrightScriptParser::TAB)
      | (1ULL << BrightScriptParser::TYPE))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrimaryContext ------------------------------------------------------------------

BrightScriptParser::PrimaryContext::PrimaryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BrightScriptParser::PrimaryContext::OPEN_PARENTHESIS() {
  return getToken(BrightScriptParser::OPEN_PARENTHESIS, 0);
}

BrightScriptParser::ExpressionContext* BrightScriptParser::PrimaryContext::expression() {
  return getRuleContext<BrightScriptParser::ExpressionContext>(0);
}

tree::TerminalNode* BrightScriptParser::PrimaryContext::CLOSE_PARENTHESIS() {
  return getToken(BrightScriptParser::CLOSE_PARENTHESIS, 0);
}

BrightScriptParser::LiteralContext* BrightScriptParser::PrimaryContext::literal() {
  return getRuleContext<BrightScriptParser::LiteralContext>(0);
}

BrightScriptParser::IdentifierContext* BrightScriptParser::PrimaryContext::identifier() {
  return getRuleContext<BrightScriptParser::IdentifierContext>(0);
}


size_t BrightScriptParser::PrimaryContext::getRuleIndex() const {
  return BrightScriptParser::RulePrimary;
}

void BrightScriptParser::PrimaryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BrightScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrimary(this);
}

void BrightScriptParser::PrimaryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BrightScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrimary(this);
}


antlrcpp::Any BrightScriptParser::PrimaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BrightScriptVisitor*>(visitor))
    return parserVisitor->visitPrimary(this);
  else
    return visitor->visitChildren(this);
}

BrightScriptParser::PrimaryContext* BrightScriptParser::primary() {
  PrimaryContext *_localctx = _tracker.createInstance<PrimaryContext>(_ctx, getState());
  enterRule(_localctx, 96, BrightScriptParser::RulePrimary);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(799);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BrightScriptParser::OPEN_PARENTHESIS: {
        enterOuterAlt(_localctx, 1);
        setState(793);
        match(BrightScriptParser::OPEN_PARENTHESIS);
        setState(794);
        expression(0);
        setState(795);
        match(BrightScriptParser::CLOSE_PARENTHESIS);
        break;
      }

      case BrightScriptParser::FALSE:
      case BrightScriptParser::INVALID:
      case BrightScriptParser::TRUE:
      case BrightScriptParser::STRING_LITERAL:
      case BrightScriptParser::INT_LITERAL:
      case BrightScriptParser::FLOAT_LITERAL: {
        enterOuterAlt(_localctx, 2);
        setState(797);
        literal();
        break;
      }

      case BrightScriptParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 3);
        setState(798);
        identifier();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LiteralContext ------------------------------------------------------------------

BrightScriptParser::LiteralContext::LiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BrightScriptParser::NumberLiteralContext* BrightScriptParser::LiteralContext::numberLiteral() {
  return getRuleContext<BrightScriptParser::NumberLiteralContext>(0);
}

BrightScriptParser::StringLiteralContext* BrightScriptParser::LiteralContext::stringLiteral() {
  return getRuleContext<BrightScriptParser::StringLiteralContext>(0);
}

BrightScriptParser::BooleanLiteralContext* BrightScriptParser::LiteralContext::booleanLiteral() {
  return getRuleContext<BrightScriptParser::BooleanLiteralContext>(0);
}

BrightScriptParser::InvalidLiteralContext* BrightScriptParser::LiteralContext::invalidLiteral() {
  return getRuleContext<BrightScriptParser::InvalidLiteralContext>(0);
}


size_t BrightScriptParser::LiteralContext::getRuleIndex() const {
  return BrightScriptParser::RuleLiteral;
}

void BrightScriptParser::LiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BrightScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLiteral(this);
}

void BrightScriptParser::LiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BrightScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLiteral(this);
}


antlrcpp::Any BrightScriptParser::LiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BrightScriptVisitor*>(visitor))
    return parserVisitor->visitLiteral(this);
  else
    return visitor->visitChildren(this);
}

BrightScriptParser::LiteralContext* BrightScriptParser::literal() {
  LiteralContext *_localctx = _tracker.createInstance<LiteralContext>(_ctx, getState());
  enterRule(_localctx, 98, BrightScriptParser::RuleLiteral);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(805);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BrightScriptParser::INT_LITERAL:
      case BrightScriptParser::FLOAT_LITERAL: {
        enterOuterAlt(_localctx, 1);
        setState(801);
        numberLiteral();
        break;
      }

      case BrightScriptParser::STRING_LITERAL: {
        enterOuterAlt(_localctx, 2);
        setState(802);
        stringLiteral();
        break;
      }

      case BrightScriptParser::FALSE:
      case BrightScriptParser::TRUE: {
        enterOuterAlt(_localctx, 3);
        setState(803);
        booleanLiteral();
        break;
      }

      case BrightScriptParser::INVALID: {
        enterOuterAlt(_localctx, 4);
        setState(804);
        invalidLiteral();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NumberLiteralContext ------------------------------------------------------------------

BrightScriptParser::NumberLiteralContext::NumberLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BrightScriptParser::NumberLiteralContext::INT_LITERAL() {
  return getToken(BrightScriptParser::INT_LITERAL, 0);
}

tree::TerminalNode* BrightScriptParser::NumberLiteralContext::FLOAT_LITERAL() {
  return getToken(BrightScriptParser::FLOAT_LITERAL, 0);
}


size_t BrightScriptParser::NumberLiteralContext::getRuleIndex() const {
  return BrightScriptParser::RuleNumberLiteral;
}

void BrightScriptParser::NumberLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BrightScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNumberLiteral(this);
}

void BrightScriptParser::NumberLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BrightScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNumberLiteral(this);
}


antlrcpp::Any BrightScriptParser::NumberLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BrightScriptVisitor*>(visitor))
    return parserVisitor->visitNumberLiteral(this);
  else
    return visitor->visitChildren(this);
}

BrightScriptParser::NumberLiteralContext* BrightScriptParser::numberLiteral() {
  NumberLiteralContext *_localctx = _tracker.createInstance<NumberLiteralContext>(_ctx, getState());
  enterRule(_localctx, 100, BrightScriptParser::RuleNumberLiteral);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(807);
    _la = _input->LA(1);
    if (!(_la == BrightScriptParser::INT_LITERAL

    || _la == BrightScriptParser::FLOAT_LITERAL)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StringLiteralContext ------------------------------------------------------------------

BrightScriptParser::StringLiteralContext::StringLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BrightScriptParser::StringLiteralContext::STRING_LITERAL() {
  return getToken(BrightScriptParser::STRING_LITERAL, 0);
}


size_t BrightScriptParser::StringLiteralContext::getRuleIndex() const {
  return BrightScriptParser::RuleStringLiteral;
}

void BrightScriptParser::StringLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BrightScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStringLiteral(this);
}

void BrightScriptParser::StringLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BrightScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStringLiteral(this);
}


antlrcpp::Any BrightScriptParser::StringLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BrightScriptVisitor*>(visitor))
    return parserVisitor->visitStringLiteral(this);
  else
    return visitor->visitChildren(this);
}

BrightScriptParser::StringLiteralContext* BrightScriptParser::stringLiteral() {
  StringLiteralContext *_localctx = _tracker.createInstance<StringLiteralContext>(_ctx, getState());
  enterRule(_localctx, 102, BrightScriptParser::RuleStringLiteral);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(809);
    match(BrightScriptParser::STRING_LITERAL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BooleanLiteralContext ------------------------------------------------------------------

BrightScriptParser::BooleanLiteralContext::BooleanLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BrightScriptParser::BooleanLiteralContext::TRUE() {
  return getToken(BrightScriptParser::TRUE, 0);
}

tree::TerminalNode* BrightScriptParser::BooleanLiteralContext::FALSE() {
  return getToken(BrightScriptParser::FALSE, 0);
}


size_t BrightScriptParser::BooleanLiteralContext::getRuleIndex() const {
  return BrightScriptParser::RuleBooleanLiteral;
}

void BrightScriptParser::BooleanLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BrightScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBooleanLiteral(this);
}

void BrightScriptParser::BooleanLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BrightScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBooleanLiteral(this);
}


antlrcpp::Any BrightScriptParser::BooleanLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BrightScriptVisitor*>(visitor))
    return parserVisitor->visitBooleanLiteral(this);
  else
    return visitor->visitChildren(this);
}

BrightScriptParser::BooleanLiteralContext* BrightScriptParser::booleanLiteral() {
  BooleanLiteralContext *_localctx = _tracker.createInstance<BooleanLiteralContext>(_ctx, getState());
  enterRule(_localctx, 104, BrightScriptParser::RuleBooleanLiteral);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(811);
    _la = _input->LA(1);
    if (!(_la == BrightScriptParser::FALSE

    || _la == BrightScriptParser::TRUE)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InvalidLiteralContext ------------------------------------------------------------------

BrightScriptParser::InvalidLiteralContext::InvalidLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BrightScriptParser::InvalidLiteralContext::INVALID() {
  return getToken(BrightScriptParser::INVALID, 0);
}


size_t BrightScriptParser::InvalidLiteralContext::getRuleIndex() const {
  return BrightScriptParser::RuleInvalidLiteral;
}

void BrightScriptParser::InvalidLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BrightScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInvalidLiteral(this);
}

void BrightScriptParser::InvalidLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BrightScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInvalidLiteral(this);
}


antlrcpp::Any BrightScriptParser::InvalidLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BrightScriptVisitor*>(visitor))
    return parserVisitor->visitInvalidLiteral(this);
  else
    return visitor->visitChildren(this);
}

BrightScriptParser::InvalidLiteralContext* BrightScriptParser::invalidLiteral() {
  InvalidLiteralContext *_localctx = _tracker.createInstance<InvalidLiteralContext>(_ctx, getState());
  enterRule(_localctx, 106, BrightScriptParser::RuleInvalidLiteral);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(813);
    match(BrightScriptParser::INVALID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IdentifierContext ------------------------------------------------------------------

BrightScriptParser::IdentifierContext::IdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BrightScriptParser::IdentifierContext::IDENTIFIER() {
  return getToken(BrightScriptParser::IDENTIFIER, 0);
}

tree::TerminalNode* BrightScriptParser::IdentifierContext::IDENTIFIER_TYPE_DECLARATION() {
  return getToken(BrightScriptParser::IDENTIFIER_TYPE_DECLARATION, 0);
}


size_t BrightScriptParser::IdentifierContext::getRuleIndex() const {
  return BrightScriptParser::RuleIdentifier;
}

void BrightScriptParser::IdentifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BrightScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdentifier(this);
}

void BrightScriptParser::IdentifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BrightScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdentifier(this);
}


antlrcpp::Any BrightScriptParser::IdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BrightScriptVisitor*>(visitor))
    return parserVisitor->visitIdentifier(this);
  else
    return visitor->visitChildren(this);
}

BrightScriptParser::IdentifierContext* BrightScriptParser::identifier() {
  IdentifierContext *_localctx = _tracker.createInstance<IdentifierContext>(_ctx, getState());
  enterRule(_localctx, 108, BrightScriptParser::RuleIdentifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(815);
    match(BrightScriptParser::IDENTIFIER);
    setState(817);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 118, _ctx)) {
    case 1: {
      setState(816);
      match(BrightScriptParser::IDENTIFIER_TYPE_DECLARATION);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UntypedIdentifierContext ------------------------------------------------------------------

BrightScriptParser::UntypedIdentifierContext::UntypedIdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BrightScriptParser::UntypedIdentifierContext::IDENTIFIER() {
  return getToken(BrightScriptParser::IDENTIFIER, 0);
}


size_t BrightScriptParser::UntypedIdentifierContext::getRuleIndex() const {
  return BrightScriptParser::RuleUntypedIdentifier;
}

void BrightScriptParser::UntypedIdentifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BrightScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUntypedIdentifier(this);
}

void BrightScriptParser::UntypedIdentifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BrightScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUntypedIdentifier(this);
}


antlrcpp::Any BrightScriptParser::UntypedIdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BrightScriptVisitor*>(visitor))
    return parserVisitor->visitUntypedIdentifier(this);
  else
    return visitor->visitChildren(this);
}

BrightScriptParser::UntypedIdentifierContext* BrightScriptParser::untypedIdentifier() {
  UntypedIdentifierContext *_localctx = _tracker.createInstance<UntypedIdentifierContext>(_ctx, getState());
  enterRule(_localctx, 110, BrightScriptParser::RuleUntypedIdentifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(819);
    match(BrightScriptParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReservedWordContext ------------------------------------------------------------------

BrightScriptParser::ReservedWordContext::ReservedWordContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BrightScriptParser::ReservedWordContext::AND() {
  return getToken(BrightScriptParser::AND, 0);
}

tree::TerminalNode* BrightScriptParser::ReservedWordContext::BOX() {
  return getToken(BrightScriptParser::BOX, 0);
}

tree::TerminalNode* BrightScriptParser::ReservedWordContext::CREATEOBJECT() {
  return getToken(BrightScriptParser::CREATEOBJECT, 0);
}

tree::TerminalNode* BrightScriptParser::ReservedWordContext::DIM() {
  return getToken(BrightScriptParser::DIM, 0);
}

tree::TerminalNode* BrightScriptParser::ReservedWordContext::EACH() {
  return getToken(BrightScriptParser::EACH, 0);
}

tree::TerminalNode* BrightScriptParser::ReservedWordContext::ELSE() {
  return getToken(BrightScriptParser::ELSE, 0);
}

tree::TerminalNode* BrightScriptParser::ReservedWordContext::ELSEIF() {
  return getToken(BrightScriptParser::ELSEIF, 0);
}

tree::TerminalNode* BrightScriptParser::ReservedWordContext::END() {
  return getToken(BrightScriptParser::END, 0);
}

tree::TerminalNode* BrightScriptParser::ReservedWordContext::ENDFUNCTION() {
  return getToken(BrightScriptParser::ENDFUNCTION, 0);
}

tree::TerminalNode* BrightScriptParser::ReservedWordContext::ENDIF() {
  return getToken(BrightScriptParser::ENDIF, 0);
}

tree::TerminalNode* BrightScriptParser::ReservedWordContext::ENDSUB() {
  return getToken(BrightScriptParser::ENDSUB, 0);
}

tree::TerminalNode* BrightScriptParser::ReservedWordContext::ENDWHILE() {
  return getToken(BrightScriptParser::ENDWHILE, 0);
}

tree::TerminalNode* BrightScriptParser::ReservedWordContext::EVAL() {
  return getToken(BrightScriptParser::EVAL, 0);
}

tree::TerminalNode* BrightScriptParser::ReservedWordContext::EXIT() {
  return getToken(BrightScriptParser::EXIT, 0);
}

tree::TerminalNode* BrightScriptParser::ReservedWordContext::EXITWHILE() {
  return getToken(BrightScriptParser::EXITWHILE, 0);
}

tree::TerminalNode* BrightScriptParser::ReservedWordContext::FALSE() {
  return getToken(BrightScriptParser::FALSE, 0);
}

tree::TerminalNode* BrightScriptParser::ReservedWordContext::FOR() {
  return getToken(BrightScriptParser::FOR, 0);
}

tree::TerminalNode* BrightScriptParser::ReservedWordContext::FUNCTION() {
  return getToken(BrightScriptParser::FUNCTION, 0);
}

tree::TerminalNode* BrightScriptParser::ReservedWordContext::GETGLOBALAA() {
  return getToken(BrightScriptParser::GETGLOBALAA, 0);
}

tree::TerminalNode* BrightScriptParser::ReservedWordContext::GETLASTRUNCOMPILEERROR() {
  return getToken(BrightScriptParser::GETLASTRUNCOMPILEERROR, 0);
}

tree::TerminalNode* BrightScriptParser::ReservedWordContext::GETLASTRUNRUNTIMEERROR() {
  return getToken(BrightScriptParser::GETLASTRUNRUNTIMEERROR, 0);
}

tree::TerminalNode* BrightScriptParser::ReservedWordContext::GOTO() {
  return getToken(BrightScriptParser::GOTO, 0);
}

tree::TerminalNode* BrightScriptParser::ReservedWordContext::IF() {
  return getToken(BrightScriptParser::IF, 0);
}

tree::TerminalNode* BrightScriptParser::ReservedWordContext::INVALID() {
  return getToken(BrightScriptParser::INVALID, 0);
}

tree::TerminalNode* BrightScriptParser::ReservedWordContext::LET() {
  return getToken(BrightScriptParser::LET, 0);
}

tree::TerminalNode* BrightScriptParser::ReservedWordContext::LINE_NUM() {
  return getToken(BrightScriptParser::LINE_NUM, 0);
}

tree::TerminalNode* BrightScriptParser::ReservedWordContext::NEXT() {
  return getToken(BrightScriptParser::NEXT, 0);
}

tree::TerminalNode* BrightScriptParser::ReservedWordContext::NOT() {
  return getToken(BrightScriptParser::NOT, 0);
}

tree::TerminalNode* BrightScriptParser::ReservedWordContext::OBJFUN() {
  return getToken(BrightScriptParser::OBJFUN, 0);
}

tree::TerminalNode* BrightScriptParser::ReservedWordContext::OR() {
  return getToken(BrightScriptParser::OR, 0);
}

tree::TerminalNode* BrightScriptParser::ReservedWordContext::POS() {
  return getToken(BrightScriptParser::POS, 0);
}

tree::TerminalNode* BrightScriptParser::ReservedWordContext::PRINT() {
  return getToken(BrightScriptParser::PRINT, 0);
}

tree::TerminalNode* BrightScriptParser::ReservedWordContext::REM() {
  return getToken(BrightScriptParser::REM, 0);
}

tree::TerminalNode* BrightScriptParser::ReservedWordContext::RETURN() {
  return getToken(BrightScriptParser::RETURN, 0);
}

tree::TerminalNode* BrightScriptParser::ReservedWordContext::RUN() {
  return getToken(BrightScriptParser::RUN, 0);
}

tree::TerminalNode* BrightScriptParser::ReservedWordContext::STEP() {
  return getToken(BrightScriptParser::STEP, 0);
}

tree::TerminalNode* BrightScriptParser::ReservedWordContext::STOP() {
  return getToken(BrightScriptParser::STOP, 0);
}

tree::TerminalNode* BrightScriptParser::ReservedWordContext::SUB() {
  return getToken(BrightScriptParser::SUB, 0);
}

tree::TerminalNode* BrightScriptParser::ReservedWordContext::TAB() {
  return getToken(BrightScriptParser::TAB, 0);
}

tree::TerminalNode* BrightScriptParser::ReservedWordContext::THEN() {
  return getToken(BrightScriptParser::THEN, 0);
}

tree::TerminalNode* BrightScriptParser::ReservedWordContext::TO() {
  return getToken(BrightScriptParser::TO, 0);
}

tree::TerminalNode* BrightScriptParser::ReservedWordContext::TRUE() {
  return getToken(BrightScriptParser::TRUE, 0);
}

tree::TerminalNode* BrightScriptParser::ReservedWordContext::TYPE() {
  return getToken(BrightScriptParser::TYPE, 0);
}

tree::TerminalNode* BrightScriptParser::ReservedWordContext::WHILE() {
  return getToken(BrightScriptParser::WHILE, 0);
}


size_t BrightScriptParser::ReservedWordContext::getRuleIndex() const {
  return BrightScriptParser::RuleReservedWord;
}

void BrightScriptParser::ReservedWordContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BrightScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReservedWord(this);
}

void BrightScriptParser::ReservedWordContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BrightScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReservedWord(this);
}


antlrcpp::Any BrightScriptParser::ReservedWordContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BrightScriptVisitor*>(visitor))
    return parserVisitor->visitReservedWord(this);
  else
    return visitor->visitChildren(this);
}

BrightScriptParser::ReservedWordContext* BrightScriptParser::reservedWord() {
  ReservedWordContext *_localctx = _tracker.createInstance<ReservedWordContext>(_ctx, getState());
  enterRule(_localctx, 112, BrightScriptParser::RuleReservedWord);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(821);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << BrightScriptParser::AND)
      | (1ULL << BrightScriptParser::BOX)
      | (1ULL << BrightScriptParser::CREATEOBJECT)
      | (1ULL << BrightScriptParser::DIM)
      | (1ULL << BrightScriptParser::EACH)
      | (1ULL << BrightScriptParser::ELSE)
      | (1ULL << BrightScriptParser::ELSEIF)
      | (1ULL << BrightScriptParser::END)
      | (1ULL << BrightScriptParser::ENDFUNCTION)
      | (1ULL << BrightScriptParser::ENDIF)
      | (1ULL << BrightScriptParser::ENDSUB)
      | (1ULL << BrightScriptParser::ENDWHILE)
      | (1ULL << BrightScriptParser::EXIT)
      | (1ULL << BrightScriptParser::EXITWHILE)
      | (1ULL << BrightScriptParser::EVAL)
      | (1ULL << BrightScriptParser::FALSE)
      | (1ULL << BrightScriptParser::FOR)
      | (1ULL << BrightScriptParser::FUNCTION)
      | (1ULL << BrightScriptParser::GETGLOBALAA)
      | (1ULL << BrightScriptParser::GETLASTRUNCOMPILEERROR)
      | (1ULL << BrightScriptParser::GETLASTRUNRUNTIMEERROR)
      | (1ULL << BrightScriptParser::GOTO)
      | (1ULL << BrightScriptParser::IF)
      | (1ULL << BrightScriptParser::INVALID)
      | (1ULL << BrightScriptParser::LET)
      | (1ULL << BrightScriptParser::LINE_NUM)
      | (1ULL << BrightScriptParser::NEXT)
      | (1ULL << BrightScriptParser::NOT)
      | (1ULL << BrightScriptParser::OBJFUN)
      | (1ULL << BrightScriptParser::OR)
      | (1ULL << BrightScriptParser::POS)
      | (1ULL << BrightScriptParser::PRINT)
      | (1ULL << BrightScriptParser::REM)
      | (1ULL << BrightScriptParser::RETURN)
      | (1ULL << BrightScriptParser::RUN)
      | (1ULL << BrightScriptParser::STEP)
      | (1ULL << BrightScriptParser::STOP)
      | (1ULL << BrightScriptParser::SUB)
      | (1ULL << BrightScriptParser::TAB)
      | (1ULL << BrightScriptParser::THEN)
      | (1ULL << BrightScriptParser::TO)
      | (1ULL << BrightScriptParser::TRUE)
      | (1ULL << BrightScriptParser::TYPE)
      | (1ULL << BrightScriptParser::WHILE))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CommentContext ------------------------------------------------------------------

BrightScriptParser::CommentContext::CommentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BrightScriptParser::CommentContext::COMMENT() {
  return getToken(BrightScriptParser::COMMENT, 0);
}


size_t BrightScriptParser::CommentContext::getRuleIndex() const {
  return BrightScriptParser::RuleComment;
}

void BrightScriptParser::CommentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BrightScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComment(this);
}

void BrightScriptParser::CommentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BrightScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComment(this);
}


antlrcpp::Any BrightScriptParser::CommentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BrightScriptVisitor*>(visitor))
    return parserVisitor->visitComment(this);
  else
    return visitor->visitChildren(this);
}

BrightScriptParser::CommentContext* BrightScriptParser::comment() {
  CommentContext *_localctx = _tracker.createInstance<CommentContext>(_ctx, getState());
  enterRule(_localctx, 114, BrightScriptParser::RuleComment);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(823);
    match(BrightScriptParser::COMMENT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EndOfLineContext ------------------------------------------------------------------

BrightScriptParser::EndOfLineContext::EndOfLineContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> BrightScriptParser::EndOfLineContext::NEWLINE() {
  return getTokens(BrightScriptParser::NEWLINE);
}

tree::TerminalNode* BrightScriptParser::EndOfLineContext::NEWLINE(size_t i) {
  return getToken(BrightScriptParser::NEWLINE, i);
}

BrightScriptParser::CommentContext* BrightScriptParser::EndOfLineContext::comment() {
  return getRuleContext<BrightScriptParser::CommentContext>(0);
}


size_t BrightScriptParser::EndOfLineContext::getRuleIndex() const {
  return BrightScriptParser::RuleEndOfLine;
}

void BrightScriptParser::EndOfLineContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BrightScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEndOfLine(this);
}

void BrightScriptParser::EndOfLineContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BrightScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEndOfLine(this);
}


antlrcpp::Any BrightScriptParser::EndOfLineContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BrightScriptVisitor*>(visitor))
    return parserVisitor->visitEndOfLine(this);
  else
    return visitor->visitChildren(this);
}

BrightScriptParser::EndOfLineContext* BrightScriptParser::endOfLine() {
  EndOfLineContext *_localctx = _tracker.createInstance<EndOfLineContext>(_ctx, getState());
  enterRule(_localctx, 116, BrightScriptParser::RuleEndOfLine);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(827);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BrightScriptParser::NEWLINE: {
        setState(825);
        match(BrightScriptParser::NEWLINE);
        break;
      }

      case BrightScriptParser::COMMENT: {
        setState(826);
        comment();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(832);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 120, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(829);
        match(BrightScriptParser::NEWLINE); 
      }
      setState(834);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 120, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EndOfStatementContext ------------------------------------------------------------------

BrightScriptParser::EndOfStatementContext::EndOfStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BrightScriptParser::EndOfLineContext* BrightScriptParser::EndOfStatementContext::endOfLine() {
  return getRuleContext<BrightScriptParser::EndOfLineContext>(0);
}

tree::TerminalNode* BrightScriptParser::EndOfStatementContext::COLON() {
  return getToken(BrightScriptParser::COLON, 0);
}

std::vector<tree::TerminalNode *> BrightScriptParser::EndOfStatementContext::NEWLINE() {
  return getTokens(BrightScriptParser::NEWLINE);
}

tree::TerminalNode* BrightScriptParser::EndOfStatementContext::NEWLINE(size_t i) {
  return getToken(BrightScriptParser::NEWLINE, i);
}


size_t BrightScriptParser::EndOfStatementContext::getRuleIndex() const {
  return BrightScriptParser::RuleEndOfStatement;
}

void BrightScriptParser::EndOfStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BrightScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEndOfStatement(this);
}

void BrightScriptParser::EndOfStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BrightScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEndOfStatement(this);
}


antlrcpp::Any BrightScriptParser::EndOfStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BrightScriptVisitor*>(visitor))
    return parserVisitor->visitEndOfStatement(this);
  else
    return visitor->visitChildren(this);
}

BrightScriptParser::EndOfStatementContext* BrightScriptParser::endOfStatement() {
  EndOfStatementContext *_localctx = _tracker.createInstance<EndOfStatementContext>(_ctx, getState());
  enterRule(_localctx, 118, BrightScriptParser::RuleEndOfStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(837);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BrightScriptParser::COMMENT:
      case BrightScriptParser::NEWLINE: {
        setState(835);
        endOfLine();
        break;
      }

      case BrightScriptParser::COLON: {
        setState(836);
        match(BrightScriptParser::COLON);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(842);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 122, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(839);
        match(BrightScriptParser::NEWLINE); 
      }
      setState(844);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 122, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool BrightScriptParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 43: return expressionSempred(dynamic_cast<ExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool BrightScriptParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 7);
    case 1: return precpred(_ctx, 6);
    case 2: return precpred(_ctx, 5);
    case 3: return precpred(_ctx, 4);
    case 4: return precpred(_ctx, 2);
    case 5: return precpred(_ctx, 12);
    case 6: return precpred(_ctx, 11);
    case 7: return precpred(_ctx, 10);
    case 8: return precpred(_ctx, 8);
    case 9: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> BrightScriptParser::_decisionToDFA;
atn::PredictionContextCache BrightScriptParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN BrightScriptParser::_atn;
std::vector<uint16_t> BrightScriptParser::_serializedATN;

std::vector<std::string> BrightScriptParser::_ruleNames = {
  "startRule", "componentHead", "componentHeadElement", "componentBody", 
  "componentBodyElement", "block", "blockStatement", "arrayInitializer", 
  "associativeArrayInitializer", "associativeElementInitializer", "conditionalCompilationStatement", 
  "conditionalCompilationConstStatement", "conditionalCompilationErrorStatement", 
  "conditionalCompilationIfThenElseStatement", "conditionalCompilationIfBlockStatement", 
  "conditionalCompilationIfElseIfBlockStatement", "conditionalCompilationIfElseBlockStatement", 
  "dimStatement", "endStatement", "exitStatement", "forStatement", "forEachStatement", 
  "gotoStatement", "ifThenElseStatement", "ifSingleLineStatement", "ifBlockStatement", 
  "ifElseIfBlockStatement", "ifElseBlockStatement", "labelStatement", "libraryStatement", 
  "nextStatement", "printStatement", "returnStatement", "stopStatement", 
  "whileStatement", "anonymousFunctionDeclaration", "functionDeclaration", 
  "anonymousSubDeclaration", "subDeclaration", "parameterList", "parameter", 
  "baseType", "expressionList", "expression", "traversableExpression", "assignableExpression", 
  "globalFunctionInvocation", "globalFunction", "primary", "literal", "numberLiteral", 
  "stringLiteral", "booleanLiteral", "invalidLiteral", "identifier", "untypedIdentifier", 
  "reservedWord", "comment", "endOfLine", "endOfStatement"
};

std::vector<std::string> BrightScriptParser::_literalNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "'''", "'?'", "'@'", "'++'", "'--'", "'['", "']'", "'{'", "'}'", "'('", 
  "')'", "','", "';'", "':'", "'='", "'.'", "'+'", "'-'", "'*'", "'/'", 
  "'^'", "'\\'", "'<<'", "'>>'", "'>'", "'<'", "'>='", "'<='", "'<>'", "'+='", 
  "'-='", "'*='", "'/='", "'\\='", "'<<='", "'>>='"
};

std::vector<std::string> BrightScriptParser::_symbolicNames = {
  "", "AND", "AS", "BOOLEAN", "BOX", "CREATEOBJECT", "DIM", "DOUBLE", "DYNAMIC", 
  "EACH", "ELSE", "ELSEIF", "END", "ENDFUNCTION", "ENDIF", "ENDSUB", "ENDWHILE", 
  "EXIT", "EXITWHILE", "EVAL", "FALSE", "FLOAT", "FOR", "FUNCTION", "GETGLOBALAA", 
  "GETLASTRUNCOMPILEERROR", "GETLASTRUNRUNTIMEERROR", "GOTO", "IF", "IN", 
  "INTEGER", "LONGINTEGER", "INTERFACE", "INVALID", "LET", "LIBRARY", "LINE_NUM", 
  "MOD", "NEXT", "NOT", "OBJECT", "OBJFUN", "OR", "POS", "PRINT", "REM", 
  "RETURN", "RUN", "STEP", "STOP", "STRING", "SUB", "TAB", "THEN", "TO", 
  "TRUE", "VOID", "TYPE", "WHILE", "STRING_LITERAL", "INT_LITERAL", "FLOAT_LITERAL", 
  "IDENTIFIER", "IDENTIFIER_TYPE_DECLARATION", "COMMENT", "NEWLINE", "WS", 
  "CONDITIONAL_CONST", "CONDITIONAL_ELSE", "CONDITIONAL_ELSEIF", "CONDITIONAL_ENDIF", 
  "CONDITIONAL_ERROR", "CONDITIONAL_IF", "SINGLE_QUOTE", "QUESTION_MARK", 
  "ATTRIBUTE_OPERATOR", "INCREMENT", "DECREMENT", "OPEN_BRACKET", "CLOSE_BRACKET", 
  "OPEN_BRACE", "CLOSE_BRACE", "OPEN_PARENTHESIS", "CLOSE_PARENTHESIS", 
  "COMMA", "SEMICOLON", "COLON", "EQUALS", "DOT", "ADD", "SUBTRACT", "MULTIPLY", 
  "DIVIDE", "EXPONENT", "DIVIDE_INTEGER", "BITSHIFT_LEFT", "BITSHIFT_RIGHT", 
  "GREATER_THAN", "LESS_THAN", "GREATER_THAN_OR_EQUAL", "LESS_THAN_OR_EQUAL", 
  "NOT_EQUAL", "ASSIGNMENT_ADD", "ASSIGNMENT_SUBTRACT", "ASSIGNMENT_MULTIPLY", 
  "ASSIGNMENT_DIVIDE", "ASSIGNMENT_DIVIDE_INTEGER", "ASSIGNMENT_BITSHIFT_LEFT", 
  "ASSIGNMENT_BITSHIFT_RIGHT"
};

dfa::Vocabulary BrightScriptParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> BrightScriptParser::_tokenNames;

BrightScriptParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x6e, 0x350, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 
    0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 
    0x1f, 0x9, 0x1f, 0x4, 0x20, 0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 0x22, 
    0x9, 0x22, 0x4, 0x23, 0x9, 0x23, 0x4, 0x24, 0x9, 0x24, 0x4, 0x25, 0x9, 
    0x25, 0x4, 0x26, 0x9, 0x26, 0x4, 0x27, 0x9, 0x27, 0x4, 0x28, 0x9, 0x28, 
    0x4, 0x29, 0x9, 0x29, 0x4, 0x2a, 0x9, 0x2a, 0x4, 0x2b, 0x9, 0x2b, 0x4, 
    0x2c, 0x9, 0x2c, 0x4, 0x2d, 0x9, 0x2d, 0x4, 0x2e, 0x9, 0x2e, 0x4, 0x2f, 
    0x9, 0x2f, 0x4, 0x30, 0x9, 0x30, 0x4, 0x31, 0x9, 0x31, 0x4, 0x32, 0x9, 
    0x32, 0x4, 0x33, 0x9, 0x33, 0x4, 0x34, 0x9, 0x34, 0x4, 0x35, 0x9, 0x35, 
    0x4, 0x36, 0x9, 0x36, 0x4, 0x37, 0x9, 0x37, 0x4, 0x38, 0x9, 0x38, 0x4, 
    0x39, 0x9, 0x39, 0x4, 0x3a, 0x9, 0x3a, 0x4, 0x3b, 0x9, 0x3b, 0x4, 0x3c, 
    0x9, 0x3c, 0x4, 0x3d, 0x9, 0x3d, 0x3, 0x2, 0x7, 0x2, 0x7c, 0xa, 0x2, 
    0xc, 0x2, 0xe, 0x2, 0x7f, 0xb, 0x2, 0x3, 0x2, 0x7, 0x2, 0x82, 0xa, 0x2, 
    0xc, 0x2, 0xe, 0x2, 0x85, 0xb, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x7, 
    0x3, 0x8a, 0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0x8d, 0xb, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x6, 0x3, 0x91, 0xa, 0x3, 0xd, 0x3, 0xe, 0x3, 0x92, 0x3, 0x3, 0x3, 
    0x3, 0x7, 0x3, 0x97, 0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0x9a, 0xb, 0x3, 0x3, 
    0x3, 0x7, 0x3, 0x9d, 0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0xa0, 0xb, 0x3, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0xa5, 0xa, 0x4, 0x3, 0x5, 0x7, 0x5, 
    0xa8, 0xa, 0x5, 0xc, 0x5, 0xe, 0x5, 0xab, 0xb, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x6, 0x5, 0xaf, 0xa, 0x5, 0xd, 0x5, 0xe, 0x5, 0xb0, 0x3, 0x5, 0x3, 0x5, 
    0x7, 0x5, 0xb5, 0xa, 0x5, 0xc, 0x5, 0xe, 0x5, 0xb8, 0xb, 0x5, 0x3, 0x5, 
    0x7, 0x5, 0xbb, 0xa, 0x5, 0xc, 0x5, 0xe, 0x5, 0xbe, 0xb, 0x5, 0x3, 0x6, 
    0x3, 0x6, 0x5, 0x6, 0xc2, 0xa, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x7, 0x7, 0xc8, 0xa, 0x7, 0xc, 0x7, 0xe, 0x7, 0xcb, 0xb, 0x7, 0x3, 
    0x7, 0x6, 0x7, 0xce, 0xa, 0x7, 0xd, 0x7, 0xe, 0x7, 0xcf, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x5, 0x8, 0xe2, 0xa, 0x8, 0x3, 0x9, 0x3, 0x9, 0x7, 0x9, 0xe6, 0xa, 
    0x9, 0xc, 0x9, 0xe, 0x9, 0xe9, 0xb, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 
    0x5, 0x9, 0xee, 0xa, 0x9, 0x3, 0x9, 0x5, 0x9, 0xf1, 0xa, 0x9, 0x3, 0x9, 
    0x5, 0x9, 0xf4, 0xa, 0x9, 0x7, 0x9, 0xf6, 0xa, 0x9, 0xc, 0x9, 0xe, 0x9, 
    0xf9, 0xb, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x7, 0xa, 0xff, 
    0xa, 0xa, 0xc, 0xa, 0xe, 0xa, 0x102, 0xb, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 
    0xa, 0x5, 0xa, 0x107, 0xa, 0xa, 0x3, 0xa, 0x7, 0xa, 0x10a, 0xa, 0xa, 
    0xc, 0xa, 0xe, 0xa, 0x10d, 0xb, 0xa, 0x3, 0xa, 0x7, 0xa, 0x110, 0xa, 
    0xa, 0xc, 0xa, 0xe, 0xa, 0x113, 0xb, 0xa, 0x5, 0xa, 0x115, 0xa, 0xa, 
    0x3, 0xa, 0x5, 0xa, 0x118, 0xa, 0xa, 0x3, 0xa, 0x7, 0xa, 0x11b, 0xa, 
    0xa, 0xc, 0xa, 0xe, 0xa, 0x11e, 0xb, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 
    0x3, 0xb, 0x3, 0xb, 0x5, 0xb, 0x125, 0xa, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 
    0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0x12d, 0xa, 0xc, 0x3, 0xd, 
    0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x7, 0xe, 
    0x136, 0xa, 0xe, 0xc, 0xe, 0xe, 0xe, 0x139, 0xb, 0xe, 0x3, 0xf, 0x3, 
    0xf, 0x7, 0xf, 0x13d, 0xa, 0xf, 0xc, 0xf, 0xe, 0xf, 0x140, 0xb, 0xf, 
    0x3, 0xf, 0x5, 0xf, 0x143, 0xa, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 
    0x3, 0x10, 0x3, 0x10, 0x5, 0x10, 0x14a, 0xa, 0x10, 0x3, 0x10, 0x6, 0x10, 
    0x14d, 0xa, 0x10, 0xd, 0x10, 0xe, 0x10, 0x14e, 0x3, 0x10, 0x6, 0x10, 
    0x152, 0xa, 0x10, 0xd, 0x10, 0xe, 0x10, 0x153, 0x3, 0x10, 0x6, 0x10, 
    0x157, 0xa, 0x10, 0xd, 0x10, 0xe, 0x10, 0x158, 0x7, 0x10, 0x15b, 0xa, 
    0x10, 0xc, 0x10, 0xe, 0x10, 0x15e, 0xb, 0x10, 0x3, 0x11, 0x3, 0x11, 
    0x3, 0x11, 0x5, 0x11, 0x163, 0xa, 0x11, 0x3, 0x11, 0x6, 0x11, 0x166, 
    0xa, 0x11, 0xd, 0x11, 0xe, 0x11, 0x167, 0x3, 0x11, 0x6, 0x11, 0x16b, 
    0xa, 0x11, 0xd, 0x11, 0xe, 0x11, 0x16c, 0x3, 0x11, 0x6, 0x11, 0x170, 
    0xa, 0x11, 0xd, 0x11, 0xe, 0x11, 0x171, 0x7, 0x11, 0x174, 0xa, 0x11, 
    0xc, 0x11, 0xe, 0x11, 0x177, 0xb, 0x11, 0x3, 0x12, 0x3, 0x12, 0x6, 0x12, 
    0x17b, 0xa, 0x12, 0xd, 0x12, 0xe, 0x12, 0x17c, 0x3, 0x12, 0x6, 0x12, 
    0x180, 0xa, 0x12, 0xd, 0x12, 0xe, 0x12, 0x181, 0x3, 0x12, 0x6, 0x12, 
    0x185, 0xa, 0x12, 0xd, 0x12, 0xe, 0x12, 0x186, 0x7, 0x12, 0x189, 0xa, 
    0x12, 0xc, 0x12, 0xe, 0x12, 0x18c, 0xb, 0x12, 0x3, 0x13, 0x3, 0x13, 
    0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 0x193, 0xa, 0x13, 0x7, 0x13, 
    0x195, 0xa, 0x13, 0xc, 0x13, 0xe, 0x13, 0x198, 0xb, 0x13, 0x3, 0x13, 
    0x3, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 
    0x15, 0x3, 0x15, 0x5, 0x15, 0x1a3, 0xa, 0x15, 0x3, 0x16, 0x3, 0x16, 
    0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x5, 
    0x16, 0x1ad, 0xa, 0x16, 0x3, 0x16, 0x6, 0x16, 0x1b0, 0xa, 0x16, 0xd, 
    0x16, 0xe, 0x16, 0x1b1, 0x3, 0x16, 0x7, 0x16, 0x1b5, 0xa, 0x16, 0xc, 
    0x16, 0xe, 0x16, 0x1b8, 0xb, 0x16, 0x3, 0x16, 0x5, 0x16, 0x1bb, 0xa, 
    0x16, 0x3, 0x16, 0x3, 0x16, 0x5, 0x16, 0x1bf, 0xa, 0x16, 0x3, 0x17, 
    0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x6, 0x17, 0x1c7, 
    0xa, 0x17, 0xd, 0x17, 0xe, 0x17, 0x1c8, 0x3, 0x17, 0x7, 0x17, 0x1cc, 
    0xa, 0x17, 0xc, 0x17, 0xe, 0x17, 0x1cf, 0xb, 0x17, 0x3, 0x17, 0x5, 0x17, 
    0x1d2, 0xa, 0x17, 0x3, 0x17, 0x3, 0x17, 0x5, 0x17, 0x1d6, 0xa, 0x17, 
    0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x7, 
    0x19, 0x1de, 0xa, 0x19, 0xc, 0x19, 0xe, 0x19, 0x1e1, 0xb, 0x19, 0x3, 
    0x19, 0x5, 0x19, 0x1e4, 0xa, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 
    0x5, 0x19, 0x1e9, 0xa, 0x19, 0x5, 0x19, 0x1eb, 0xa, 0x19, 0x3, 0x1a, 
    0x3, 0x1a, 0x3, 0x1a, 0x5, 0x1a, 0x1f0, 0xa, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 
    0x3, 0x1a, 0x5, 0x1a, 0x1f5, 0xa, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 
    0x5, 0x1b, 0x1fa, 0xa, 0x1b, 0x3, 0x1b, 0x6, 0x1b, 0x1fd, 0xa, 0x1b, 
    0xd, 0x1b, 0xe, 0x1b, 0x1fe, 0x3, 0x1b, 0x7, 0x1b, 0x202, 0xa, 0x1b, 
    0xc, 0x1b, 0xe, 0x1b, 0x205, 0xb, 0x1b, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 
    0x5, 0x1c, 0x20a, 0xa, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x5, 0x1c, 0x20e, 
    0xa, 0x1c, 0x3, 0x1c, 0x6, 0x1c, 0x211, 0xa, 0x1c, 0xd, 0x1c, 0xe, 0x1c, 
    0x212, 0x3, 0x1c, 0x7, 0x1c, 0x216, 0xa, 0x1c, 0xc, 0x1c, 0xe, 0x1c, 
    0x219, 0xb, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 0x6, 0x1d, 0x21d, 0xa, 0x1d, 
    0xd, 0x1d, 0xe, 0x1d, 0x21e, 0x3, 0x1d, 0x7, 0x1d, 0x222, 0xa, 0x1d, 
    0xc, 0x1d, 0xe, 0x1d, 0x225, 0xb, 0x1d, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 
    0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x20, 0x3, 0x20, 0x3, 0x21, 0x3, 
    0x21, 0x3, 0x21, 0x5, 0x21, 0x232, 0xa, 0x21, 0x3, 0x21, 0x7, 0x21, 
    0x235, 0xa, 0x21, 0xc, 0x21, 0xe, 0x21, 0x238, 0xb, 0x21, 0x3, 0x21, 
    0x5, 0x21, 0x23b, 0xa, 0x21, 0x5, 0x21, 0x23d, 0xa, 0x21, 0x3, 0x22, 
    0x3, 0x22, 0x5, 0x22, 0x241, 0xa, 0x22, 0x3, 0x23, 0x3, 0x23, 0x3, 0x24, 
    0x3, 0x24, 0x3, 0x24, 0x6, 0x24, 0x248, 0xa, 0x24, 0xd, 0x24, 0xe, 0x24, 
    0x249, 0x3, 0x24, 0x7, 0x24, 0x24d, 0xa, 0x24, 0xc, 0x24, 0xe, 0x24, 
    0x250, 0xb, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x5, 0x24, 0x255, 
    0xa, 0x24, 0x3, 0x25, 0x3, 0x25, 0x5, 0x25, 0x259, 0xa, 0x25, 0x3, 0x25, 
    0x3, 0x25, 0x5, 0x25, 0x25d, 0xa, 0x25, 0x3, 0x25, 0x6, 0x25, 0x260, 
    0xa, 0x25, 0xd, 0x25, 0xe, 0x25, 0x261, 0x3, 0x25, 0x7, 0x25, 0x265, 
    0xa, 0x25, 0xc, 0x25, 0xe, 0x25, 0x268, 0xb, 0x25, 0x3, 0x25, 0x3, 0x25, 
    0x3, 0x25, 0x5, 0x25, 0x26d, 0xa, 0x25, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 
    0x5, 0x26, 0x272, 0xa, 0x26, 0x3, 0x26, 0x3, 0x26, 0x5, 0x26, 0x276, 
    0xa, 0x26, 0x3, 0x26, 0x6, 0x26, 0x279, 0xa, 0x26, 0xd, 0x26, 0xe, 0x26, 
    0x27a, 0x3, 0x26, 0x7, 0x26, 0x27e, 0xa, 0x26, 0xc, 0x26, 0xe, 0x26, 
    0x281, 0xb, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x5, 0x26, 0x286, 
    0xa, 0x26, 0x3, 0x27, 0x3, 0x27, 0x5, 0x27, 0x28a, 0xa, 0x27, 0x3, 0x27, 
    0x6, 0x27, 0x28d, 0xa, 0x27, 0xd, 0x27, 0xe, 0x27, 0x28e, 0x3, 0x27, 
    0x7, 0x27, 0x292, 0xa, 0x27, 0xc, 0x27, 0xe, 0x27, 0x295, 0xb, 0x27, 
    0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x5, 0x27, 0x29a, 0xa, 0x27, 0x3, 0x28, 
    0x3, 0x28, 0x3, 0x28, 0x5, 0x28, 0x29f, 0xa, 0x28, 0x3, 0x28, 0x6, 0x28, 
    0x2a2, 0xa, 0x28, 0xd, 0x28, 0xe, 0x28, 0x2a3, 0x3, 0x28, 0x7, 0x28, 
    0x2a7, 0xa, 0x28, 0xc, 0x28, 0xe, 0x28, 0x2aa, 0xb, 0x28, 0x3, 0x28, 
    0x3, 0x28, 0x3, 0x28, 0x5, 0x28, 0x2af, 0xa, 0x28, 0x3, 0x29, 0x3, 0x29, 
    0x3, 0x29, 0x3, 0x29, 0x7, 0x29, 0x2b5, 0xa, 0x29, 0xc, 0x29, 0xe, 0x29, 
    0x2b8, 0xb, 0x29, 0x5, 0x29, 0x2ba, 0xa, 0x29, 0x3, 0x29, 0x3, 0x29, 
    0x3, 0x2a, 0x3, 0x2a, 0x5, 0x2a, 0x2c0, 0xa, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 
    0x5, 0x2a, 0x2c4, 0xa, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x5, 0x2a, 0x2c8, 
    0xa, 0x2a, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x7, 
    0x2c, 0x2cf, 0xa, 0x2c, 0xc, 0x2c, 0xe, 0x2c, 0x2d2, 0xb, 0x2c, 0x3, 
    0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 
    0x5, 0x2d, 0x2db, 0xa, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 
    0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 
    0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 
    0x3, 0x2d, 0x3, 0x2d, 0x5, 0x2d, 0x2f0, 0xa, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 
    0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x5, 
    0x2d, 0x2fa, 0xa, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 
    0x3, 0x2d, 0x3, 0x2d, 0x7, 0x2d, 0x302, 0xa, 0x2d, 0xc, 0x2d, 0xe, 0x2d, 
    0x305, 0xb, 0x2d, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x5, 0x2e, 0x30a, 
    0xa, 0x2e, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x5, 
    0x2f, 0x311, 0xa, 0x2f, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x5, 0x30, 
    0x316, 0xa, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x31, 0x3, 0x31, 0x3, 0x32, 
    0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x5, 0x32, 0x322, 
    0xa, 0x32, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x5, 0x33, 0x328, 
    0xa, 0x33, 0x3, 0x34, 0x3, 0x34, 0x3, 0x35, 0x3, 0x35, 0x3, 0x36, 0x3, 
    0x36, 0x3, 0x37, 0x3, 0x37, 0x3, 0x38, 0x3, 0x38, 0x5, 0x38, 0x334, 
    0xa, 0x38, 0x3, 0x39, 0x3, 0x39, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3b, 0x3, 
    0x3b, 0x3, 0x3c, 0x3, 0x3c, 0x5, 0x3c, 0x33e, 0xa, 0x3c, 0x3, 0x3c, 
    0x7, 0x3c, 0x341, 0xa, 0x3c, 0xc, 0x3c, 0xe, 0x3c, 0x344, 0xb, 0x3c, 
    0x3, 0x3d, 0x3, 0x3d, 0x5, 0x3d, 0x348, 0xa, 0x3d, 0x3, 0x3d, 0x7, 0x3d, 
    0x34b, 0xa, 0x3d, 0xc, 0x3d, 0xe, 0x3d, 0x34e, 0xb, 0x3d, 0x3, 0x3d, 
    0x3, 0x137, 0x3, 0x58, 0x3e, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 
    0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 
    0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 0x3a, 0x3c, 0x3e, 0x40, 
    0x42, 0x44, 0x46, 0x48, 0x4a, 0x4c, 0x4e, 0x50, 0x52, 0x54, 0x56, 0x58, 
    0x5a, 0x5c, 0x5e, 0x60, 0x62, 0x64, 0x66, 0x68, 0x6a, 0x6c, 0x6e, 0x70, 
    0x72, 0x74, 0x76, 0x78, 0x2, 0x10, 0x4, 0x2, 0x2e, 0x2e, 0x4c, 0x4c, 
    0xa, 0x2, 0x5, 0x5, 0x9, 0xa, 0x17, 0x17, 0x19, 0x19, 0x20, 0x21, 0x2a, 
    0x2a, 0x34, 0x34, 0x3a, 0x3a, 0x3, 0x2, 0x5b, 0x5c, 0x4, 0x2, 0x27, 
    0x27, 0x5d, 0x60, 0x3, 0x2, 0x61, 0x62, 0x4, 0x2, 0x59, 0x59, 0x63, 
    0x67, 0x4, 0x2, 0x3, 0x3, 0x2c, 0x2c, 0x4, 0x2, 0x4d, 0x4d, 0x5a, 0x5a, 
    0x3, 0x2, 0x4e, 0x4f, 0x4, 0x2, 0x59, 0x59, 0x68, 0x6e, 0x9, 0x2, 0x6, 
    0x7, 0x15, 0x15, 0x1a, 0x1c, 0x31, 0x31, 0x34, 0x34, 0x36, 0x36, 0x3b, 
    0x3b, 0x3, 0x2, 0x3e, 0x3f, 0x4, 0x2, 0x16, 0x16, 0x39, 0x39, 0xc, 0x2, 
    0x3, 0x3, 0x6, 0x8, 0xb, 0x16, 0x18, 0x1e, 0x23, 0x24, 0x26, 0x26, 0x28, 
    0x29, 0x2b, 0x33, 0x35, 0x39, 0x3b, 0x3c, 0x2, 0x3b2, 0x2, 0x7d, 0x3, 
    0x2, 0x2, 0x2, 0x4, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x6, 0xa4, 0x3, 0x2, 0x2, 
    0x2, 0x8, 0xa9, 0x3, 0x2, 0x2, 0x2, 0xa, 0xc1, 0x3, 0x2, 0x2, 0x2, 0xc, 
    0xc3, 0x3, 0x2, 0x2, 0x2, 0xe, 0xe1, 0x3, 0x2, 0x2, 0x2, 0x10, 0xe3, 
    0x3, 0x2, 0x2, 0x2, 0x12, 0xfc, 0x3, 0x2, 0x2, 0x2, 0x14, 0x124, 0x3, 
    0x2, 0x2, 0x2, 0x16, 0x12c, 0x3, 0x2, 0x2, 0x2, 0x18, 0x12e, 0x3, 0x2, 
    0x2, 0x2, 0x1a, 0x133, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x13a, 0x3, 0x2, 0x2, 
    0x2, 0x1e, 0x146, 0x3, 0x2, 0x2, 0x2, 0x20, 0x15f, 0x3, 0x2, 0x2, 0x2, 
    0x22, 0x178, 0x3, 0x2, 0x2, 0x2, 0x24, 0x18d, 0x3, 0x2, 0x2, 0x2, 0x26, 
    0x19b, 0x3, 0x2, 0x2, 0x2, 0x28, 0x1a2, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x1a4, 
    0x3, 0x2, 0x2, 0x2, 0x2c, 0x1c0, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x1d7, 0x3, 
    0x2, 0x2, 0x2, 0x30, 0x1ea, 0x3, 0x2, 0x2, 0x2, 0x32, 0x1ec, 0x3, 0x2, 
    0x2, 0x2, 0x34, 0x1f6, 0x3, 0x2, 0x2, 0x2, 0x36, 0x209, 0x3, 0x2, 0x2, 
    0x2, 0x38, 0x21a, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x226, 0x3, 0x2, 0x2, 0x2, 
    0x3c, 0x229, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x22c, 0x3, 0x2, 0x2, 0x2, 0x40, 
    0x22e, 0x3, 0x2, 0x2, 0x2, 0x42, 0x23e, 0x3, 0x2, 0x2, 0x2, 0x44, 0x242, 
    0x3, 0x2, 0x2, 0x2, 0x46, 0x244, 0x3, 0x2, 0x2, 0x2, 0x48, 0x256, 0x3, 
    0x2, 0x2, 0x2, 0x4a, 0x26e, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x287, 0x3, 0x2, 
    0x2, 0x2, 0x4e, 0x29b, 0x3, 0x2, 0x2, 0x2, 0x50, 0x2b0, 0x3, 0x2, 0x2, 
    0x2, 0x52, 0x2bf, 0x3, 0x2, 0x2, 0x2, 0x54, 0x2c9, 0x3, 0x2, 0x2, 0x2, 
    0x56, 0x2cb, 0x3, 0x2, 0x2, 0x2, 0x58, 0x2da, 0x3, 0x2, 0x2, 0x2, 0x5a, 
    0x309, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x310, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x312, 
    0x3, 0x2, 0x2, 0x2, 0x60, 0x319, 0x3, 0x2, 0x2, 0x2, 0x62, 0x321, 0x3, 
    0x2, 0x2, 0x2, 0x64, 0x327, 0x3, 0x2, 0x2, 0x2, 0x66, 0x329, 0x3, 0x2, 
    0x2, 0x2, 0x68, 0x32b, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x32d, 0x3, 0x2, 0x2, 
    0x2, 0x6c, 0x32f, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x331, 0x3, 0x2, 0x2, 0x2, 
    0x70, 0x335, 0x3, 0x2, 0x2, 0x2, 0x72, 0x337, 0x3, 0x2, 0x2, 0x2, 0x74, 
    0x339, 0x3, 0x2, 0x2, 0x2, 0x76, 0x33d, 0x3, 0x2, 0x2, 0x2, 0x78, 0x347, 
    0x3, 0x2, 0x2, 0x2, 0x7a, 0x7c, 0x5, 0x4, 0x3, 0x2, 0x7b, 0x7a, 0x3, 
    0x2, 0x2, 0x2, 0x7c, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x7d, 0x7b, 0x3, 0x2, 
    0x2, 0x2, 0x7d, 0x7e, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x83, 0x3, 0x2, 0x2, 
    0x2, 0x7f, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x80, 0x82, 0x5, 0x8, 0x5, 0x2, 
    0x81, 0x80, 0x3, 0x2, 0x2, 0x2, 0x82, 0x85, 0x3, 0x2, 0x2, 0x2, 0x83, 
    0x81, 0x3, 0x2, 0x2, 0x2, 0x83, 0x84, 0x3, 0x2, 0x2, 0x2, 0x84, 0x86, 
    0x3, 0x2, 0x2, 0x2, 0x85, 0x83, 0x3, 0x2, 0x2, 0x2, 0x86, 0x87, 0x7, 
    0x2, 0x2, 0x3, 0x87, 0x3, 0x3, 0x2, 0x2, 0x2, 0x88, 0x8a, 0x5, 0x76, 
    0x3c, 0x2, 0x89, 0x88, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x8d, 0x3, 0x2, 0x2, 
    0x2, 0x8b, 0x89, 0x3, 0x2, 0x2, 0x2, 0x8b, 0x8c, 0x3, 0x2, 0x2, 0x2, 
    0x8c, 0x8e, 0x3, 0x2, 0x2, 0x2, 0x8d, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x8e, 
    0x98, 0x5, 0x6, 0x4, 0x2, 0x8f, 0x91, 0x5, 0x76, 0x3c, 0x2, 0x90, 0x8f, 
    0x3, 0x2, 0x2, 0x2, 0x91, 0x92, 0x3, 0x2, 0x2, 0x2, 0x92, 0x90, 0x3, 
    0x2, 0x2, 0x2, 0x92, 0x93, 0x3, 0x2, 0x2, 0x2, 0x93, 0x94, 0x3, 0x2, 
    0x2, 0x2, 0x94, 0x95, 0x5, 0x6, 0x4, 0x2, 0x95, 0x97, 0x3, 0x2, 0x2, 
    0x2, 0x96, 0x90, 0x3, 0x2, 0x2, 0x2, 0x97, 0x9a, 0x3, 0x2, 0x2, 0x2, 
    0x98, 0x96, 0x3, 0x2, 0x2, 0x2, 0x98, 0x99, 0x3, 0x2, 0x2, 0x2, 0x99, 
    0x9e, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x98, 0x3, 0x2, 0x2, 0x2, 0x9b, 0x9d, 
    0x5, 0x76, 0x3c, 0x2, 0x9c, 0x9b, 0x3, 0x2, 0x2, 0x2, 0x9d, 0xa0, 0x3, 
    0x2, 0x2, 0x2, 0x9e, 0x9c, 0x3, 0x2, 0x2, 0x2, 0x9e, 0x9f, 0x3, 0x2, 
    0x2, 0x2, 0x9f, 0x5, 0x3, 0x2, 0x2, 0x2, 0xa0, 0x9e, 0x3, 0x2, 0x2, 
    0x2, 0xa1, 0xa5, 0x5, 0x3c, 0x1f, 0x2, 0xa2, 0xa5, 0x5, 0x16, 0xc, 0x2, 
    0xa3, 0xa5, 0x5, 0x74, 0x3b, 0x2, 0xa4, 0xa1, 0x3, 0x2, 0x2, 0x2, 0xa4, 
    0xa2, 0x3, 0x2, 0x2, 0x2, 0xa4, 0xa3, 0x3, 0x2, 0x2, 0x2, 0xa5, 0x7, 
    0x3, 0x2, 0x2, 0x2, 0xa6, 0xa8, 0x5, 0x76, 0x3c, 0x2, 0xa7, 0xa6, 0x3, 
    0x2, 0x2, 0x2, 0xa8, 0xab, 0x3, 0x2, 0x2, 0x2, 0xa9, 0xa7, 0x3, 0x2, 
    0x2, 0x2, 0xa9, 0xaa, 0x3, 0x2, 0x2, 0x2, 0xaa, 0xac, 0x3, 0x2, 0x2, 
    0x2, 0xab, 0xa9, 0x3, 0x2, 0x2, 0x2, 0xac, 0xb6, 0x5, 0xa, 0x6, 0x2, 
    0xad, 0xaf, 0x5, 0x76, 0x3c, 0x2, 0xae, 0xad, 0x3, 0x2, 0x2, 0x2, 0xaf, 
    0xb0, 0x3, 0x2, 0x2, 0x2, 0xb0, 0xae, 0x3, 0x2, 0x2, 0x2, 0xb0, 0xb1, 
    0x3, 0x2, 0x2, 0x2, 0xb1, 0xb2, 0x3, 0x2, 0x2, 0x2, 0xb2, 0xb3, 0x5, 
    0xa, 0x6, 0x2, 0xb3, 0xb5, 0x3, 0x2, 0x2, 0x2, 0xb4, 0xae, 0x3, 0x2, 
    0x2, 0x2, 0xb5, 0xb8, 0x3, 0x2, 0x2, 0x2, 0xb6, 0xb4, 0x3, 0x2, 0x2, 
    0x2, 0xb6, 0xb7, 0x3, 0x2, 0x2, 0x2, 0xb7, 0xbc, 0x3, 0x2, 0x2, 0x2, 
    0xb8, 0xb6, 0x3, 0x2, 0x2, 0x2, 0xb9, 0xbb, 0x5, 0x76, 0x3c, 0x2, 0xba, 
    0xb9, 0x3, 0x2, 0x2, 0x2, 0xbb, 0xbe, 0x3, 0x2, 0x2, 0x2, 0xbc, 0xba, 
    0x3, 0x2, 0x2, 0x2, 0xbc, 0xbd, 0x3, 0x2, 0x2, 0x2, 0xbd, 0x9, 0x3, 
    0x2, 0x2, 0x2, 0xbe, 0xbc, 0x3, 0x2, 0x2, 0x2, 0xbf, 0xc2, 0x5, 0x4a, 
    0x26, 0x2, 0xc0, 0xc2, 0x5, 0x4e, 0x28, 0x2, 0xc1, 0xbf, 0x3, 0x2, 0x2, 
    0x2, 0xc1, 0xc0, 0x3, 0x2, 0x2, 0x2, 0xc2, 0xb, 0x3, 0x2, 0x2, 0x2, 
    0xc3, 0xc9, 0x5, 0xe, 0x8, 0x2, 0xc4, 0xc5, 0x5, 0x78, 0x3d, 0x2, 0xc5, 
    0xc6, 0x5, 0xe, 0x8, 0x2, 0xc6, 0xc8, 0x3, 0x2, 0x2, 0x2, 0xc7, 0xc4, 
    0x3, 0x2, 0x2, 0x2, 0xc8, 0xcb, 0x3, 0x2, 0x2, 0x2, 0xc9, 0xc7, 0x3, 
    0x2, 0x2, 0x2, 0xc9, 0xca, 0x3, 0x2, 0x2, 0x2, 0xca, 0xcd, 0x3, 0x2, 
    0x2, 0x2, 0xcb, 0xc9, 0x3, 0x2, 0x2, 0x2, 0xcc, 0xce, 0x5, 0x78, 0x3d, 
    0x2, 0xcd, 0xcc, 0x3, 0x2, 0x2, 0x2, 0xce, 0xcf, 0x3, 0x2, 0x2, 0x2, 
    0xcf, 0xcd, 0x3, 0x2, 0x2, 0x2, 0xcf, 0xd0, 0x3, 0x2, 0x2, 0x2, 0xd0, 
    0xd, 0x3, 0x2, 0x2, 0x2, 0xd1, 0xe2, 0x5, 0x74, 0x3b, 0x2, 0xd2, 0xe2, 
    0x5, 0x16, 0xc, 0x2, 0xd3, 0xe2, 0x5, 0x24, 0x13, 0x2, 0xd4, 0xe2, 0x5, 
    0x28, 0x15, 0x2, 0xd5, 0xe2, 0x5, 0x2a, 0x16, 0x2, 0xd6, 0xe2, 0x5, 
    0x2c, 0x17, 0x2, 0xd7, 0xe2, 0x5, 0x30, 0x19, 0x2, 0xd8, 0xe2, 0x5, 
    0x2e, 0x18, 0x2, 0xd9, 0xe2, 0x5, 0x3a, 0x1e, 0x2, 0xda, 0xe2, 0x5, 
    0x3e, 0x20, 0x2, 0xdb, 0xe2, 0x5, 0x40, 0x21, 0x2, 0xdc, 0xe2, 0x5, 
    0x42, 0x22, 0x2, 0xdd, 0xe2, 0x5, 0x44, 0x23, 0x2, 0xde, 0xe2, 0x5, 
    0x46, 0x24, 0x2, 0xdf, 0xe2, 0x5, 0x26, 0x14, 0x2, 0xe0, 0xe2, 0x5, 
    0x58, 0x2d, 0x2, 0xe1, 0xd1, 0x3, 0x2, 0x2, 0x2, 0xe1, 0xd2, 0x3, 0x2, 
    0x2, 0x2, 0xe1, 0xd3, 0x3, 0x2, 0x2, 0x2, 0xe1, 0xd4, 0x3, 0x2, 0x2, 
    0x2, 0xe1, 0xd5, 0x3, 0x2, 0x2, 0x2, 0xe1, 0xd6, 0x3, 0x2, 0x2, 0x2, 
    0xe1, 0xd7, 0x3, 0x2, 0x2, 0x2, 0xe1, 0xd8, 0x3, 0x2, 0x2, 0x2, 0xe1, 
    0xd9, 0x3, 0x2, 0x2, 0x2, 0xe1, 0xda, 0x3, 0x2, 0x2, 0x2, 0xe1, 0xdb, 
    0x3, 0x2, 0x2, 0x2, 0xe1, 0xdc, 0x3, 0x2, 0x2, 0x2, 0xe1, 0xdd, 0x3, 
    0x2, 0x2, 0x2, 0xe1, 0xde, 0x3, 0x2, 0x2, 0x2, 0xe1, 0xdf, 0x3, 0x2, 
    0x2, 0x2, 0xe1, 0xe0, 0x3, 0x2, 0x2, 0x2, 0xe2, 0xf, 0x3, 0x2, 0x2, 
    0x2, 0xe3, 0xe7, 0x7, 0x50, 0x2, 0x2, 0xe4, 0xe6, 0x7, 0x43, 0x2, 0x2, 
    0xe5, 0xe4, 0x3, 0x2, 0x2, 0x2, 0xe6, 0xe9, 0x3, 0x2, 0x2, 0x2, 0xe7, 
    0xe5, 0x3, 0x2, 0x2, 0x2, 0xe7, 0xe8, 0x3, 0x2, 0x2, 0x2, 0xe8, 0xf7, 
    0x3, 0x2, 0x2, 0x2, 0xe9, 0xe7, 0x3, 0x2, 0x2, 0x2, 0xea, 0xee, 0x5, 
    0x58, 0x2d, 0x2, 0xeb, 0xee, 0x5, 0x10, 0x9, 0x2, 0xec, 0xee, 0x5, 0x12, 
    0xa, 0x2, 0xed, 0xea, 0x3, 0x2, 0x2, 0x2, 0xed, 0xeb, 0x3, 0x2, 0x2, 
    0x2, 0xed, 0xec, 0x3, 0x2, 0x2, 0x2, 0xee, 0xf0, 0x3, 0x2, 0x2, 0x2, 
    0xef, 0xf1, 0x7, 0x56, 0x2, 0x2, 0xf0, 0xef, 0x3, 0x2, 0x2, 0x2, 0xf0, 
    0xf1, 0x3, 0x2, 0x2, 0x2, 0xf1, 0xf3, 0x3, 0x2, 0x2, 0x2, 0xf2, 0xf4, 
    0x5, 0x76, 0x3c, 0x2, 0xf3, 0xf2, 0x3, 0x2, 0x2, 0x2, 0xf3, 0xf4, 0x3, 
    0x2, 0x2, 0x2, 0xf4, 0xf6, 0x3, 0x2, 0x2, 0x2, 0xf5, 0xed, 0x3, 0x2, 
    0x2, 0x2, 0xf6, 0xf9, 0x3, 0x2, 0x2, 0x2, 0xf7, 0xf5, 0x3, 0x2, 0x2, 
    0x2, 0xf7, 0xf8, 0x3, 0x2, 0x2, 0x2, 0xf8, 0xfa, 0x3, 0x2, 0x2, 0x2, 
    0xf9, 0xf7, 0x3, 0x2, 0x2, 0x2, 0xfa, 0xfb, 0x7, 0x51, 0x2, 0x2, 0xfb, 
    0x11, 0x3, 0x2, 0x2, 0x2, 0xfc, 0x100, 0x7, 0x52, 0x2, 0x2, 0xfd, 0xff, 
    0x7, 0x43, 0x2, 0x2, 0xfe, 0xfd, 0x3, 0x2, 0x2, 0x2, 0xff, 0x102, 0x3, 
    0x2, 0x2, 0x2, 0x100, 0xfe, 0x3, 0x2, 0x2, 0x2, 0x100, 0x101, 0x3, 0x2, 
    0x2, 0x2, 0x101, 0x114, 0x3, 0x2, 0x2, 0x2, 0x102, 0x100, 0x3, 0x2, 
    0x2, 0x2, 0x103, 0x111, 0x5, 0x14, 0xb, 0x2, 0x104, 0x107, 0x7, 0x56, 
    0x2, 0x2, 0x105, 0x107, 0x5, 0x76, 0x3c, 0x2, 0x106, 0x104, 0x3, 0x2, 
    0x2, 0x2, 0x106, 0x105, 0x3, 0x2, 0x2, 0x2, 0x107, 0x10b, 0x3, 0x2, 
    0x2, 0x2, 0x108, 0x10a, 0x7, 0x43, 0x2, 0x2, 0x109, 0x108, 0x3, 0x2, 
    0x2, 0x2, 0x10a, 0x10d, 0x3, 0x2, 0x2, 0x2, 0x10b, 0x109, 0x3, 0x2, 
    0x2, 0x2, 0x10b, 0x10c, 0x3, 0x2, 0x2, 0x2, 0x10c, 0x10e, 0x3, 0x2, 
    0x2, 0x2, 0x10d, 0x10b, 0x3, 0x2, 0x2, 0x2, 0x10e, 0x110, 0x5, 0x14, 
    0xb, 0x2, 0x10f, 0x106, 0x3, 0x2, 0x2, 0x2, 0x110, 0x113, 0x3, 0x2, 
    0x2, 0x2, 0x111, 0x10f, 0x3, 0x2, 0x2, 0x2, 0x111, 0x112, 0x3, 0x2, 
    0x2, 0x2, 0x112, 0x115, 0x3, 0x2, 0x2, 0x2, 0x113, 0x111, 0x3, 0x2, 
    0x2, 0x2, 0x114, 0x103, 0x3, 0x2, 0x2, 0x2, 0x114, 0x115, 0x3, 0x2, 
    0x2, 0x2, 0x115, 0x117, 0x3, 0x2, 0x2, 0x2, 0x116, 0x118, 0x7, 0x56, 
    0x2, 0x2, 0x117, 0x116, 0x3, 0x2, 0x2, 0x2, 0x117, 0x118, 0x3, 0x2, 
    0x2, 0x2, 0x118, 0x11c, 0x3, 0x2, 0x2, 0x2, 0x119, 0x11b, 0x7, 0x43, 
    0x2, 0x2, 0x11a, 0x119, 0x3, 0x2, 0x2, 0x2, 0x11b, 0x11e, 0x3, 0x2, 
    0x2, 0x2, 0x11c, 0x11a, 0x3, 0x2, 0x2, 0x2, 0x11c, 0x11d, 0x3, 0x2, 
    0x2, 0x2, 0x11d, 0x11f, 0x3, 0x2, 0x2, 0x2, 0x11e, 0x11c, 0x3, 0x2, 
    0x2, 0x2, 0x11f, 0x120, 0x7, 0x53, 0x2, 0x2, 0x120, 0x13, 0x3, 0x2, 
    0x2, 0x2, 0x121, 0x125, 0x5, 0x6e, 0x38, 0x2, 0x122, 0x125, 0x5, 0x72, 
    0x3a, 0x2, 0x123, 0x125, 0x5, 0x68, 0x35, 0x2, 0x124, 0x121, 0x3, 0x2, 
    0x2, 0x2, 0x124, 0x122, 0x3, 0x2, 0x2, 0x2, 0x124, 0x123, 0x3, 0x2, 
    0x2, 0x2, 0x125, 0x126, 0x3, 0x2, 0x2, 0x2, 0x126, 0x127, 0x7, 0x58, 
    0x2, 0x2, 0x127, 0x128, 0x5, 0x5c, 0x2f, 0x2, 0x128, 0x15, 0x3, 0x2, 
    0x2, 0x2, 0x129, 0x12d, 0x5, 0x18, 0xd, 0x2, 0x12a, 0x12d, 0x5, 0x1a, 
    0xe, 0x2, 0x12b, 0x12d, 0x5, 0x1c, 0xf, 0x2, 0x12c, 0x129, 0x3, 0x2, 
    0x2, 0x2, 0x12c, 0x12a, 0x3, 0x2, 0x2, 0x2, 0x12c, 0x12b, 0x3, 0x2, 
    0x2, 0x2, 0x12d, 0x17, 0x3, 0x2, 0x2, 0x2, 0x12e, 0x12f, 0x7, 0x45, 
    0x2, 0x2, 0x12f, 0x130, 0x5, 0x70, 0x39, 0x2, 0x130, 0x131, 0x7, 0x59, 
    0x2, 0x2, 0x131, 0x132, 0x5, 0x58, 0x2d, 0x2, 0x132, 0x19, 0x3, 0x2, 
    0x2, 0x2, 0x133, 0x137, 0x7, 0x49, 0x2, 0x2, 0x134, 0x136, 0xb, 0x2, 
    0x2, 0x2, 0x135, 0x134, 0x3, 0x2, 0x2, 0x2, 0x136, 0x139, 0x3, 0x2, 
    0x2, 0x2, 0x137, 0x138, 0x3, 0x2, 0x2, 0x2, 0x137, 0x135, 0x3, 0x2, 
    0x2, 0x2, 0x138, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x139, 0x137, 0x3, 0x2, 0x2, 
    0x2, 0x13a, 0x13e, 0x5, 0x1e, 0x10, 0x2, 0x13b, 0x13d, 0x5, 0x20, 0x11, 
    0x2, 0x13c, 0x13b, 0x3, 0x2, 0x2, 0x2, 0x13d, 0x140, 0x3, 0x2, 0x2, 
    0x2, 0x13e, 0x13c, 0x3, 0x2, 0x2, 0x2, 0x13e, 0x13f, 0x3, 0x2, 0x2, 
    0x2, 0x13f, 0x142, 0x3, 0x2, 0x2, 0x2, 0x140, 0x13e, 0x3, 0x2, 0x2, 
    0x2, 0x141, 0x143, 0x5, 0x22, 0x12, 0x2, 0x142, 0x141, 0x3, 0x2, 0x2, 
    0x2, 0x142, 0x143, 0x3, 0x2, 0x2, 0x2, 0x143, 0x144, 0x3, 0x2, 0x2, 
    0x2, 0x144, 0x145, 0x7, 0x48, 0x2, 0x2, 0x145, 0x1d, 0x3, 0x2, 0x2, 
    0x2, 0x146, 0x147, 0x7, 0x4a, 0x2, 0x2, 0x147, 0x149, 0x5, 0x58, 0x2d, 
    0x2, 0x148, 0x14a, 0x7, 0x37, 0x2, 0x2, 0x149, 0x148, 0x3, 0x2, 0x2, 
    0x2, 0x149, 0x14a, 0x3, 0x2, 0x2, 0x2, 0x14a, 0x14c, 0x3, 0x2, 0x2, 
    0x2, 0x14b, 0x14d, 0x5, 0x78, 0x3d, 0x2, 0x14c, 0x14b, 0x3, 0x2, 0x2, 
    0x2, 0x14d, 0x14e, 0x3, 0x2, 0x2, 0x2, 0x14e, 0x14c, 0x3, 0x2, 0x2, 
    0x2, 0x14e, 0x14f, 0x3, 0x2, 0x2, 0x2, 0x14f, 0x15c, 0x3, 0x2, 0x2, 
    0x2, 0x150, 0x152, 0x5, 0xc, 0x7, 0x2, 0x151, 0x150, 0x3, 0x2, 0x2, 
    0x2, 0x152, 0x153, 0x3, 0x2, 0x2, 0x2, 0x153, 0x151, 0x3, 0x2, 0x2, 
    0x2, 0x153, 0x154, 0x3, 0x2, 0x2, 0x2, 0x154, 0x15b, 0x3, 0x2, 0x2, 
    0x2, 0x155, 0x157, 0x5, 0x8, 0x5, 0x2, 0x156, 0x155, 0x3, 0x2, 0x2, 
    0x2, 0x157, 0x158, 0x3, 0x2, 0x2, 0x2, 0x158, 0x156, 0x3, 0x2, 0x2, 
    0x2, 0x158, 0x159, 0x3, 0x2, 0x2, 0x2, 0x159, 0x15b, 0x3, 0x2, 0x2, 
    0x2, 0x15a, 0x151, 0x3, 0x2, 0x2, 0x2, 0x15a, 0x156, 0x3, 0x2, 0x2, 
    0x2, 0x15b, 0x15e, 0x3, 0x2, 0x2, 0x2, 0x15c, 0x15a, 0x3, 0x2, 0x2, 
    0x2, 0x15c, 0x15d, 0x3, 0x2, 0x2, 0x2, 0x15d, 0x1f, 0x3, 0x2, 0x2, 0x2, 
    0x15e, 0x15c, 0x3, 0x2, 0x2, 0x2, 0x15f, 0x160, 0x7, 0x47, 0x2, 0x2, 
    0x160, 0x162, 0x5, 0x58, 0x2d, 0x2, 0x161, 0x163, 0x7, 0x37, 0x2, 0x2, 
    0x162, 0x161, 0x3, 0x2, 0x2, 0x2, 0x162, 0x163, 0x3, 0x2, 0x2, 0x2, 
    0x163, 0x165, 0x3, 0x2, 0x2, 0x2, 0x164, 0x166, 0x5, 0x78, 0x3d, 0x2, 
    0x165, 0x164, 0x3, 0x2, 0x2, 0x2, 0x166, 0x167, 0x3, 0x2, 0x2, 0x2, 
    0x167, 0x165, 0x3, 0x2, 0x2, 0x2, 0x167, 0x168, 0x3, 0x2, 0x2, 0x2, 
    0x168, 0x175, 0x3, 0x2, 0x2, 0x2, 0x169, 0x16b, 0x5, 0xc, 0x7, 0x2, 
    0x16a, 0x169, 0x3, 0x2, 0x2, 0x2, 0x16b, 0x16c, 0x3, 0x2, 0x2, 0x2, 
    0x16c, 0x16a, 0x3, 0x2, 0x2, 0x2, 0x16c, 0x16d, 0x3, 0x2, 0x2, 0x2, 
    0x16d, 0x174, 0x3, 0x2, 0x2, 0x2, 0x16e, 0x170, 0x5, 0x8, 0x5, 0x2, 
    0x16f, 0x16e, 0x3, 0x2, 0x2, 0x2, 0x170, 0x171, 0x3, 0x2, 0x2, 0x2, 
    0x171, 0x16f, 0x3, 0x2, 0x2, 0x2, 0x171, 0x172, 0x3, 0x2, 0x2, 0x2, 
    0x172, 0x174, 0x3, 0x2, 0x2, 0x2, 0x173, 0x16a, 0x3, 0x2, 0x2, 0x2, 
    0x173, 0x16f, 0x3, 0x2, 0x2, 0x2, 0x174, 0x177, 0x3, 0x2, 0x2, 0x2, 
    0x175, 0x173, 0x3, 0x2, 0x2, 0x2, 0x175, 0x176, 0x3, 0x2, 0x2, 0x2, 
    0x176, 0x21, 0x3, 0x2, 0x2, 0x2, 0x177, 0x175, 0x3, 0x2, 0x2, 0x2, 0x178, 
    0x17a, 0x7, 0x46, 0x2, 0x2, 0x179, 0x17b, 0x5, 0x78, 0x3d, 0x2, 0x17a, 
    0x179, 0x3, 0x2, 0x2, 0x2, 0x17b, 0x17c, 0x3, 0x2, 0x2, 0x2, 0x17c, 
    0x17a, 0x3, 0x2, 0x2, 0x2, 0x17c, 0x17d, 0x3, 0x2, 0x2, 0x2, 0x17d, 
    0x18a, 0x3, 0x2, 0x2, 0x2, 0x17e, 0x180, 0x5, 0xc, 0x7, 0x2, 0x17f, 
    0x17e, 0x3, 0x2, 0x2, 0x2, 0x180, 0x181, 0x3, 0x2, 0x2, 0x2, 0x181, 
    0x17f, 0x3, 0x2, 0x2, 0x2, 0x181, 0x182, 0x3, 0x2, 0x2, 0x2, 0x182, 
    0x189, 0x3, 0x2, 0x2, 0x2, 0x183, 0x185, 0x5, 0x8, 0x5, 0x2, 0x184, 
    0x183, 0x3, 0x2, 0x2, 0x2, 0x185, 0x186, 0x3, 0x2, 0x2, 0x2, 0x186, 
    0x184, 0x3, 0x2, 0x2, 0x2, 0x186, 0x187, 0x3, 0x2, 0x2, 0x2, 0x187, 
    0x189, 0x3, 0x2, 0x2, 0x2, 0x188, 0x17f, 0x3, 0x2, 0x2, 0x2, 0x188, 
    0x184, 0x3, 0x2, 0x2, 0x2, 0x189, 0x18c, 0x3, 0x2, 0x2, 0x2, 0x18a, 
    0x188, 0x3, 0x2, 0x2, 0x2, 0x18a, 0x18b, 0x3, 0x2, 0x2, 0x2, 0x18b, 
    0x23, 0x3, 0x2, 0x2, 0x2, 0x18c, 0x18a, 0x3, 0x2, 0x2, 0x2, 0x18d, 0x18e, 
    0x7, 0x8, 0x2, 0x2, 0x18e, 0x18f, 0x5, 0x6e, 0x38, 0x2, 0x18f, 0x196, 
    0x7, 0x50, 0x2, 0x2, 0x190, 0x192, 0x7, 0x3e, 0x2, 0x2, 0x191, 0x193, 
    0x7, 0x56, 0x2, 0x2, 0x192, 0x191, 0x3, 0x2, 0x2, 0x2, 0x192, 0x193, 
    0x3, 0x2, 0x2, 0x2, 0x193, 0x195, 0x3, 0x2, 0x2, 0x2, 0x194, 0x190, 
    0x3, 0x2, 0x2, 0x2, 0x195, 0x198, 0x3, 0x2, 0x2, 0x2, 0x196, 0x194, 
    0x3, 0x2, 0x2, 0x2, 0x196, 0x197, 0x3, 0x2, 0x2, 0x2, 0x197, 0x199, 
    0x3, 0x2, 0x2, 0x2, 0x198, 0x196, 0x3, 0x2, 0x2, 0x2, 0x199, 0x19a, 
    0x7, 0x51, 0x2, 0x2, 0x19a, 0x25, 0x3, 0x2, 0x2, 0x2, 0x19b, 0x19c, 
    0x7, 0xe, 0x2, 0x2, 0x19c, 0x27, 0x3, 0x2, 0x2, 0x2, 0x19d, 0x19e, 0x7, 
    0x13, 0x2, 0x2, 0x19e, 0x1a3, 0x7, 0x3c, 0x2, 0x2, 0x19f, 0x1a3, 0x7, 
    0x14, 0x2, 0x2, 0x1a0, 0x1a1, 0x7, 0x13, 0x2, 0x2, 0x1a1, 0x1a3, 0x7, 
    0x18, 0x2, 0x2, 0x1a2, 0x19d, 0x3, 0x2, 0x2, 0x2, 0x1a2, 0x19f, 0x3, 
    0x2, 0x2, 0x2, 0x1a2, 0x1a0, 0x3, 0x2, 0x2, 0x2, 0x1a3, 0x29, 0x3, 0x2, 
    0x2, 0x2, 0x1a4, 0x1a5, 0x7, 0x18, 0x2, 0x2, 0x1a5, 0x1a6, 0x5, 0x6e, 
    0x38, 0x2, 0x1a6, 0x1a7, 0x7, 0x59, 0x2, 0x2, 0x1a7, 0x1a8, 0x5, 0x58, 
    0x2d, 0x2, 0x1a8, 0x1a9, 0x7, 0x38, 0x2, 0x2, 0x1a9, 0x1ac, 0x5, 0x58, 
    0x2d, 0x2, 0x1aa, 0x1ab, 0x7, 0x32, 0x2, 0x2, 0x1ab, 0x1ad, 0x5, 0x58, 
    0x2d, 0x2, 0x1ac, 0x1aa, 0x3, 0x2, 0x2, 0x2, 0x1ac, 0x1ad, 0x3, 0x2, 
    0x2, 0x2, 0x1ad, 0x1af, 0x3, 0x2, 0x2, 0x2, 0x1ae, 0x1b0, 0x5, 0x78, 
    0x3d, 0x2, 0x1af, 0x1ae, 0x3, 0x2, 0x2, 0x2, 0x1b0, 0x1b1, 0x3, 0x2, 
    0x2, 0x2, 0x1b1, 0x1af, 0x3, 0x2, 0x2, 0x2, 0x1b1, 0x1b2, 0x3, 0x2, 
    0x2, 0x2, 0x1b2, 0x1b6, 0x3, 0x2, 0x2, 0x2, 0x1b3, 0x1b5, 0x5, 0xc, 
    0x7, 0x2, 0x1b4, 0x1b3, 0x3, 0x2, 0x2, 0x2, 0x1b5, 0x1b8, 0x3, 0x2, 
    0x2, 0x2, 0x1b6, 0x1b4, 0x3, 0x2, 0x2, 0x2, 0x1b6, 0x1b7, 0x3, 0x2, 
    0x2, 0x2, 0x1b7, 0x1ba, 0x3, 0x2, 0x2, 0x2, 0x1b8, 0x1b6, 0x3, 0x2, 
    0x2, 0x2, 0x1b9, 0x1bb, 0x5, 0x3e, 0x20, 0x2, 0x1ba, 0x1b9, 0x3, 0x2, 
    0x2, 0x2, 0x1ba, 0x1bb, 0x3, 0x2, 0x2, 0x2, 0x1bb, 0x1be, 0x3, 0x2, 
    0x2, 0x2, 0x1bc, 0x1bd, 0x7, 0xe, 0x2, 0x2, 0x1bd, 0x1bf, 0x7, 0x18, 
    0x2, 0x2, 0x1be, 0x1bc, 0x3, 0x2, 0x2, 0x2, 0x1be, 0x1bf, 0x3, 0x2, 
    0x2, 0x2, 0x1bf, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x1c0, 0x1c1, 0x7, 0x18, 
    0x2, 0x2, 0x1c1, 0x1c2, 0x7, 0xb, 0x2, 0x2, 0x1c2, 0x1c3, 0x5, 0x6e, 
    0x38, 0x2, 0x1c3, 0x1c4, 0x7, 0x1f, 0x2, 0x2, 0x1c4, 0x1c6, 0x5, 0x5a, 
    0x2e, 0x2, 0x1c5, 0x1c7, 0x5, 0x78, 0x3d, 0x2, 0x1c6, 0x1c5, 0x3, 0x2, 
    0x2, 0x2, 0x1c7, 0x1c8, 0x3, 0x2, 0x2, 0x2, 0x1c8, 0x1c6, 0x3, 0x2, 
    0x2, 0x2, 0x1c8, 0x1c9, 0x3, 0x2, 0x2, 0x2, 0x1c9, 0x1cd, 0x3, 0x2, 
    0x2, 0x2, 0x1ca, 0x1cc, 0x5, 0xc, 0x7, 0x2, 0x1cb, 0x1ca, 0x3, 0x2, 
    0x2, 0x2, 0x1cc, 0x1cf, 0x3, 0x2, 0x2, 0x2, 0x1cd, 0x1cb, 0x3, 0x2, 
    0x2, 0x2, 0x1cd, 0x1ce, 0x3, 0x2, 0x2, 0x2, 0x1ce, 0x1d1, 0x3, 0x2, 
    0x2, 0x2, 0x1cf, 0x1cd, 0x3, 0x2, 0x2, 0x2, 0x1d0, 0x1d2, 0x5, 0x3e, 
    0x20, 0x2, 0x1d1, 0x1d0, 0x3, 0x2, 0x2, 0x2, 0x1d1, 0x1d2, 0x3, 0x2, 
    0x2, 0x2, 0x1d2, 0x1d5, 0x3, 0x2, 0x2, 0x2, 0x1d3, 0x1d4, 0x7, 0xe, 
    0x2, 0x2, 0x1d4, 0x1d6, 0x7, 0x18, 0x2, 0x2, 0x1d5, 0x1d3, 0x3, 0x2, 
    0x2, 0x2, 0x1d5, 0x1d6, 0x3, 0x2, 0x2, 0x2, 0x1d6, 0x2d, 0x3, 0x2, 0x2, 
    0x2, 0x1d7, 0x1d8, 0x7, 0x1d, 0x2, 0x2, 0x1d8, 0x1d9, 0x7, 0x40, 0x2, 
    0x2, 0x1d9, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x1da, 0x1eb, 0x5, 0x32, 0x1a, 
    0x2, 0x1db, 0x1df, 0x5, 0x34, 0x1b, 0x2, 0x1dc, 0x1de, 0x5, 0x36, 0x1c, 
    0x2, 0x1dd, 0x1dc, 0x3, 0x2, 0x2, 0x2, 0x1de, 0x1e1, 0x3, 0x2, 0x2, 
    0x2, 0x1df, 0x1dd, 0x3, 0x2, 0x2, 0x2, 0x1df, 0x1e0, 0x3, 0x2, 0x2, 
    0x2, 0x1e0, 0x1e3, 0x3, 0x2, 0x2, 0x2, 0x1e1, 0x1df, 0x3, 0x2, 0x2, 
    0x2, 0x1e2, 0x1e4, 0x5, 0x38, 0x1d, 0x2, 0x1e3, 0x1e2, 0x3, 0x2, 0x2, 
    0x2, 0x1e3, 0x1e4, 0x3, 0x2, 0x2, 0x2, 0x1e4, 0x1e8, 0x3, 0x2, 0x2, 
    0x2, 0x1e5, 0x1e6, 0x7, 0xe, 0x2, 0x2, 0x1e6, 0x1e9, 0x7, 0x1e, 0x2, 
    0x2, 0x1e7, 0x1e9, 0x7, 0x10, 0x2, 0x2, 0x1e8, 0x1e5, 0x3, 0x2, 0x2, 
    0x2, 0x1e8, 0x1e7, 0x3, 0x2, 0x2, 0x2, 0x1e9, 0x1eb, 0x3, 0x2, 0x2, 
    0x2, 0x1ea, 0x1da, 0x3, 0x2, 0x2, 0x2, 0x1ea, 0x1db, 0x3, 0x2, 0x2, 
    0x2, 0x1eb, 0x31, 0x3, 0x2, 0x2, 0x2, 0x1ec, 0x1ed, 0x7, 0x1e, 0x2, 
    0x2, 0x1ed, 0x1ef, 0x5, 0x58, 0x2d, 0x2, 0x1ee, 0x1f0, 0x7, 0x37, 0x2, 
    0x2, 0x1ef, 0x1ee, 0x3, 0x2, 0x2, 0x2, 0x1ef, 0x1f0, 0x3, 0x2, 0x2, 
    0x2, 0x1f0, 0x1f1, 0x3, 0x2, 0x2, 0x2, 0x1f1, 0x1f4, 0x5, 0xe, 0x8, 
    0x2, 0x1f2, 0x1f3, 0x7, 0xc, 0x2, 0x2, 0x1f3, 0x1f5, 0x5, 0xe, 0x8, 
    0x2, 0x1f4, 0x1f2, 0x3, 0x2, 0x2, 0x2, 0x1f4, 0x1f5, 0x3, 0x2, 0x2, 
    0x2, 0x1f5, 0x33, 0x3, 0x2, 0x2, 0x2, 0x1f6, 0x1f7, 0x7, 0x1e, 0x2, 
    0x2, 0x1f7, 0x1f9, 0x5, 0x58, 0x2d, 0x2, 0x1f8, 0x1fa, 0x7, 0x37, 0x2, 
    0x2, 0x1f9, 0x1f8, 0x3, 0x2, 0x2, 0x2, 0x1f9, 0x1fa, 0x3, 0x2, 0x2, 
    0x2, 0x1fa, 0x1fc, 0x3, 0x2, 0x2, 0x2, 0x1fb, 0x1fd, 0x5, 0x78, 0x3d, 
    0x2, 0x1fc, 0x1fb, 0x3, 0x2, 0x2, 0x2, 0x1fd, 0x1fe, 0x3, 0x2, 0x2, 
    0x2, 0x1fe, 0x1fc, 0x3, 0x2, 0x2, 0x2, 0x1fe, 0x1ff, 0x3, 0x2, 0x2, 
    0x2, 0x1ff, 0x203, 0x3, 0x2, 0x2, 0x2, 0x200, 0x202, 0x5, 0xc, 0x7, 
    0x2, 0x201, 0x200, 0x3, 0x2, 0x2, 0x2, 0x202, 0x205, 0x3, 0x2, 0x2, 
    0x2, 0x203, 0x201, 0x3, 0x2, 0x2, 0x2, 0x203, 0x204, 0x3, 0x2, 0x2, 
    0x2, 0x204, 0x35, 0x3, 0x2, 0x2, 0x2, 0x205, 0x203, 0x3, 0x2, 0x2, 0x2, 
    0x206, 0x207, 0x7, 0xc, 0x2, 0x2, 0x207, 0x20a, 0x7, 0x1e, 0x2, 0x2, 
    0x208, 0x20a, 0x7, 0xd, 0x2, 0x2, 0x209, 0x206, 0x3, 0x2, 0x2, 0x2, 
    0x209, 0x208, 0x3, 0x2, 0x2, 0x2, 0x20a, 0x20b, 0x3, 0x2, 0x2, 0x2, 
    0x20b, 0x20d, 0x5, 0x58, 0x2d, 0x2, 0x20c, 0x20e, 0x7, 0x37, 0x2, 0x2, 
    0x20d, 0x20c, 0x3, 0x2, 0x2, 0x2, 0x20d, 0x20e, 0x3, 0x2, 0x2, 0x2, 
    0x20e, 0x210, 0x3, 0x2, 0x2, 0x2, 0x20f, 0x211, 0x5, 0x78, 0x3d, 0x2, 
    0x210, 0x20f, 0x3, 0x2, 0x2, 0x2, 0x211, 0x212, 0x3, 0x2, 0x2, 0x2, 
    0x212, 0x210, 0x3, 0x2, 0x2, 0x2, 0x212, 0x213, 0x3, 0x2, 0x2, 0x2, 
    0x213, 0x217, 0x3, 0x2, 0x2, 0x2, 0x214, 0x216, 0x5, 0xc, 0x7, 0x2, 
    0x215, 0x214, 0x3, 0x2, 0x2, 0x2, 0x216, 0x219, 0x3, 0x2, 0x2, 0x2, 
    0x217, 0x215, 0x3, 0x2, 0x2, 0x2, 0x217, 0x218, 0x3, 0x2, 0x2, 0x2, 
    0x218, 0x37, 0x3, 0x2, 0x2, 0x2, 0x219, 0x217, 0x3, 0x2, 0x2, 0x2, 0x21a, 
    0x21c, 0x7, 0xc, 0x2, 0x2, 0x21b, 0x21d, 0x5, 0x78, 0x3d, 0x2, 0x21c, 
    0x21b, 0x3, 0x2, 0x2, 0x2, 0x21d, 0x21e, 0x3, 0x2, 0x2, 0x2, 0x21e, 
    0x21c, 0x3, 0x2, 0x2, 0x2, 0x21e, 0x21f, 0x3, 0x2, 0x2, 0x2, 0x21f, 
    0x223, 0x3, 0x2, 0x2, 0x2, 0x220, 0x222, 0x5, 0xc, 0x7, 0x2, 0x221, 
    0x220, 0x3, 0x2, 0x2, 0x2, 0x222, 0x225, 0x3, 0x2, 0x2, 0x2, 0x223, 
    0x221, 0x3, 0x2, 0x2, 0x2, 0x223, 0x224, 0x3, 0x2, 0x2, 0x2, 0x224, 
    0x39, 0x3, 0x2, 0x2, 0x2, 0x225, 0x223, 0x3, 0x2, 0x2, 0x2, 0x226, 0x227, 
    0x7, 0x40, 0x2, 0x2, 0x227, 0x228, 0x7, 0x58, 0x2, 0x2, 0x228, 0x3b, 
    0x3, 0x2, 0x2, 0x2, 0x229, 0x22a, 0x7, 0x25, 0x2, 0x2, 0x22a, 0x22b, 
    0x7, 0x3d, 0x2, 0x2, 0x22b, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x22c, 0x22d, 
    0x7, 0x28, 0x2, 0x2, 0x22d, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x22e, 0x23c, 
    0x9, 0x2, 0x2, 0x2, 0x22f, 0x236, 0x5, 0x58, 0x2d, 0x2, 0x230, 0x232, 
    0x7, 0x57, 0x2, 0x2, 0x231, 0x230, 0x3, 0x2, 0x2, 0x2, 0x231, 0x232, 
    0x3, 0x2, 0x2, 0x2, 0x232, 0x233, 0x3, 0x2, 0x2, 0x2, 0x233, 0x235, 
    0x5, 0x58, 0x2d, 0x2, 0x234, 0x231, 0x3, 0x2, 0x2, 0x2, 0x235, 0x238, 
    0x3, 0x2, 0x2, 0x2, 0x236, 0x234, 0x3, 0x2, 0x2, 0x2, 0x236, 0x237, 
    0x3, 0x2, 0x2, 0x2, 0x237, 0x23a, 0x3, 0x2, 0x2, 0x2, 0x238, 0x236, 
    0x3, 0x2, 0x2, 0x2, 0x239, 0x23b, 0x7, 0x57, 0x2, 0x2, 0x23a, 0x239, 
    0x3, 0x2, 0x2, 0x2, 0x23a, 0x23b, 0x3, 0x2, 0x2, 0x2, 0x23b, 0x23d, 
    0x3, 0x2, 0x2, 0x2, 0x23c, 0x22f, 0x3, 0x2, 0x2, 0x2, 0x23c, 0x23d, 
    0x3, 0x2, 0x2, 0x2, 0x23d, 0x41, 0x3, 0x2, 0x2, 0x2, 0x23e, 0x240, 0x7, 
    0x30, 0x2, 0x2, 0x23f, 0x241, 0x5, 0x5c, 0x2f, 0x2, 0x240, 0x23f, 0x3, 
    0x2, 0x2, 0x2, 0x240, 0x241, 0x3, 0x2, 0x2, 0x2, 0x241, 0x43, 0x3, 0x2, 
    0x2, 0x2, 0x242, 0x243, 0x7, 0x33, 0x2, 0x2, 0x243, 0x45, 0x3, 0x2, 
    0x2, 0x2, 0x244, 0x245, 0x7, 0x3c, 0x2, 0x2, 0x245, 0x247, 0x5, 0x58, 
    0x2d, 0x2, 0x246, 0x248, 0x5, 0x78, 0x3d, 0x2, 0x247, 0x246, 0x3, 0x2, 
    0x2, 0x2, 0x248, 0x249, 0x3, 0x2, 0x2, 0x2, 0x249, 0x247, 0x3, 0x2, 
    0x2, 0x2, 0x249, 0x24a, 0x3, 0x2, 0x2, 0x2, 0x24a, 0x24e, 0x3, 0x2, 
    0x2, 0x2, 0x24b, 0x24d, 0x5, 0xc, 0x7, 0x2, 0x24c, 0x24b, 0x3, 0x2, 
    0x2, 0x2, 0x24d, 0x250, 0x3, 0x2, 0x2, 0x2, 0x24e, 0x24c, 0x3, 0x2, 
    0x2, 0x2, 0x24e, 0x24f, 0x3, 0x2, 0x2, 0x2, 0x24f, 0x254, 0x3, 0x2, 
    0x2, 0x2, 0x250, 0x24e, 0x3, 0x2, 0x2, 0x2, 0x251, 0x255, 0x7, 0x12, 
    0x2, 0x2, 0x252, 0x253, 0x7, 0xe, 0x2, 0x2, 0x253, 0x255, 0x7, 0x3c, 
    0x2, 0x2, 0x254, 0x251, 0x3, 0x2, 0x2, 0x2, 0x254, 0x252, 0x3, 0x2, 
    0x2, 0x2, 0x255, 0x47, 0x3, 0x2, 0x2, 0x2, 0x256, 0x258, 0x7, 0x19, 
    0x2, 0x2, 0x257, 0x259, 0x5, 0x50, 0x29, 0x2, 0x258, 0x257, 0x3, 0x2, 
    0x2, 0x2, 0x258, 0x259, 0x3, 0x2, 0x2, 0x2, 0x259, 0x25c, 0x3, 0x2, 
    0x2, 0x2, 0x25a, 0x25b, 0x7, 0x4, 0x2, 0x2, 0x25b, 0x25d, 0x5, 0x54, 
    0x2b, 0x2, 0x25c, 0x25a, 0x3, 0x2, 0x2, 0x2, 0x25c, 0x25d, 0x3, 0x2, 
    0x2, 0x2, 0x25d, 0x25f, 0x3, 0x2, 0x2, 0x2, 0x25e, 0x260, 0x5, 0x78, 
    0x3d, 0x2, 0x25f, 0x25e, 0x3, 0x2, 0x2, 0x2, 0x260, 0x261, 0x3, 0x2, 
    0x2, 0x2, 0x261, 0x25f, 0x3, 0x2, 0x2, 0x2, 0x261, 0x262, 0x3, 0x2, 
    0x2, 0x2, 0x262, 0x266, 0x3, 0x2, 0x2, 0x2, 0x263, 0x265, 0x5, 0xc, 
    0x7, 0x2, 0x264, 0x263, 0x3, 0x2, 0x2, 0x2, 0x265, 0x268, 0x3, 0x2, 
    0x2, 0x2, 0x266, 0x264, 0x3, 0x2, 0x2, 0x2, 0x266, 0x267, 0x3, 0x2, 
    0x2, 0x2, 0x267, 0x26c, 0x3, 0x2, 0x2, 0x2, 0x268, 0x266, 0x3, 0x2, 
    0x2, 0x2, 0x269, 0x26d, 0x7, 0xf, 0x2, 0x2, 0x26a, 0x26b, 0x7, 0xe, 
    0x2, 0x2, 0x26b, 0x26d, 0x7, 0x19, 0x2, 0x2, 0x26c, 0x269, 0x3, 0x2, 
    0x2, 0x2, 0x26c, 0x26a, 0x3, 0x2, 0x2, 0x2, 0x26d, 0x49, 0x3, 0x2, 0x2, 
    0x2, 0x26e, 0x26f, 0x7, 0x19, 0x2, 0x2, 0x26f, 0x271, 0x5, 0x70, 0x39, 
    0x2, 0x270, 0x272, 0x5, 0x50, 0x29, 0x2, 0x271, 0x270, 0x3, 0x2, 0x2, 
    0x2, 0x271, 0x272, 0x3, 0x2, 0x2, 0x2, 0x272, 0x275, 0x3, 0x2, 0x2, 
    0x2, 0x273, 0x274, 0x7, 0x4, 0x2, 0x2, 0x274, 0x276, 0x5, 0x54, 0x2b, 
    0x2, 0x275, 0x273, 0x3, 0x2, 0x2, 0x2, 0x275, 0x276, 0x3, 0x2, 0x2, 
    0x2, 0x276, 0x278, 0x3, 0x2, 0x2, 0x2, 0x277, 0x279, 0x5, 0x78, 0x3d, 
    0x2, 0x278, 0x277, 0x3, 0x2, 0x2, 0x2, 0x279, 0x27a, 0x3, 0x2, 0x2, 
    0x2, 0x27a, 0x278, 0x3, 0x2, 0x2, 0x2, 0x27a, 0x27b, 0x3, 0x2, 0x2, 
    0x2, 0x27b, 0x27f, 0x3, 0x2, 0x2, 0x2, 0x27c, 0x27e, 0x5, 0xc, 0x7, 
    0x2, 0x27d, 0x27c, 0x3, 0x2, 0x2, 0x2, 0x27e, 0x281, 0x3, 0x2, 0x2, 
    0x2, 0x27f, 0x27d, 0x3, 0x2, 0x2, 0x2, 0x27f, 0x280, 0x3, 0x2, 0x2, 
    0x2, 0x280, 0x285, 0x3, 0x2, 0x2, 0x2, 0x281, 0x27f, 0x3, 0x2, 0x2, 
    0x2, 0x282, 0x286, 0x7, 0xf, 0x2, 0x2, 0x283, 0x284, 0x7, 0xe, 0x2, 
    0x2, 0x284, 0x286, 0x7, 0x19, 0x2, 0x2, 0x285, 0x282, 0x3, 0x2, 0x2, 
    0x2, 0x285, 0x283, 0x3, 0x2, 0x2, 0x2, 0x286, 0x4b, 0x3, 0x2, 0x2, 0x2, 
    0x287, 0x289, 0x7, 0x35, 0x2, 0x2, 0x288, 0x28a, 0x5, 0x50, 0x29, 0x2, 
    0x289, 0x288, 0x3, 0x2, 0x2, 0x2, 0x289, 0x28a, 0x3, 0x2, 0x2, 0x2, 
    0x28a, 0x28c, 0x3, 0x2, 0x2, 0x2, 0x28b, 0x28d, 0x5, 0x78, 0x3d, 0x2, 
    0x28c, 0x28b, 0x3, 0x2, 0x2, 0x2, 0x28d, 0x28e, 0x3, 0x2, 0x2, 0x2, 
    0x28e, 0x28c, 0x3, 0x2, 0x2, 0x2, 0x28e, 0x28f, 0x3, 0x2, 0x2, 0x2, 
    0x28f, 0x293, 0x3, 0x2, 0x2, 0x2, 0x290, 0x292, 0x5, 0xc, 0x7, 0x2, 
    0x291, 0x290, 0x3, 0x2, 0x2, 0x2, 0x292, 0x295, 0x3, 0x2, 0x2, 0x2, 
    0x293, 0x291, 0x3, 0x2, 0x2, 0x2, 0x293, 0x294, 0x3, 0x2, 0x2, 0x2, 
    0x294, 0x299, 0x3, 0x2, 0x2, 0x2, 0x295, 0x293, 0x3, 0x2, 0x2, 0x2, 
    0x296, 0x29a, 0x7, 0x11, 0x2, 0x2, 0x297, 0x298, 0x7, 0xe, 0x2, 0x2, 
    0x298, 0x29a, 0x7, 0x35, 0x2, 0x2, 0x299, 0x296, 0x3, 0x2, 0x2, 0x2, 
    0x299, 0x297, 0x3, 0x2, 0x2, 0x2, 0x29a, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x29b, 
    0x29c, 0x7, 0x35, 0x2, 0x2, 0x29c, 0x29e, 0x5, 0x70, 0x39, 0x2, 0x29d, 
    0x29f, 0x5, 0x50, 0x29, 0x2, 0x29e, 0x29d, 0x3, 0x2, 0x2, 0x2, 0x29e, 
    0x29f, 0x3, 0x2, 0x2, 0x2, 0x29f, 0x2a1, 0x3, 0x2, 0x2, 0x2, 0x2a0, 
    0x2a2, 0x5, 0x78, 0x3d, 0x2, 0x2a1, 0x2a0, 0x3, 0x2, 0x2, 0x2, 0x2a2, 
    0x2a3, 0x3, 0x2, 0x2, 0x2, 0x2a3, 0x2a1, 0x3, 0x2, 0x2, 0x2, 0x2a3, 
    0x2a4, 0x3, 0x2, 0x2, 0x2, 0x2a4, 0x2a8, 0x3, 0x2, 0x2, 0x2, 0x2a5, 
    0x2a7, 0x5, 0xc, 0x7, 0x2, 0x2a6, 0x2a5, 0x3, 0x2, 0x2, 0x2, 0x2a7, 
    0x2aa, 0x3, 0x2, 0x2, 0x2, 0x2a8, 0x2a6, 0x3, 0x2, 0x2, 0x2, 0x2a8, 
    0x2a9, 0x3, 0x2, 0x2, 0x2, 0x2a9, 0x2ae, 0x3, 0x2, 0x2, 0x2, 0x2aa, 
    0x2a8, 0x3, 0x2, 0x2, 0x2, 0x2ab, 0x2af, 0x7, 0x11, 0x2, 0x2, 0x2ac, 
    0x2ad, 0x7, 0xe, 0x2, 0x2, 0x2ad, 0x2af, 0x7, 0x35, 0x2, 0x2, 0x2ae, 
    0x2ab, 0x3, 0x2, 0x2, 0x2, 0x2ae, 0x2ac, 0x3, 0x2, 0x2, 0x2, 0x2af, 
    0x4f, 0x3, 0x2, 0x2, 0x2, 0x2b0, 0x2b9, 0x7, 0x54, 0x2, 0x2, 0x2b1, 
    0x2b6, 0x5, 0x52, 0x2a, 0x2, 0x2b2, 0x2b3, 0x7, 0x56, 0x2, 0x2, 0x2b3, 
    0x2b5, 0x5, 0x52, 0x2a, 0x2, 0x2b4, 0x2b2, 0x3, 0x2, 0x2, 0x2, 0x2b5, 
    0x2b8, 0x3, 0x2, 0x2, 0x2, 0x2b6, 0x2b4, 0x3, 0x2, 0x2, 0x2, 0x2b6, 
    0x2b7, 0x3, 0x2, 0x2, 0x2, 0x2b7, 0x2ba, 0x3, 0x2, 0x2, 0x2, 0x2b8, 
    0x2b6, 0x3, 0x2, 0x2, 0x2, 0x2b9, 0x2b1, 0x3, 0x2, 0x2, 0x2, 0x2b9, 
    0x2ba, 0x3, 0x2, 0x2, 0x2, 0x2ba, 0x2bb, 0x3, 0x2, 0x2, 0x2, 0x2bb, 
    0x2bc, 0x7, 0x55, 0x2, 0x2, 0x2bc, 0x51, 0x3, 0x2, 0x2, 0x2, 0x2bd, 
    0x2c0, 0x5, 0x64, 0x33, 0x2, 0x2be, 0x2c0, 0x5, 0x6e, 0x38, 0x2, 0x2bf, 
    0x2bd, 0x3, 0x2, 0x2, 0x2, 0x2bf, 0x2be, 0x3, 0x2, 0x2, 0x2, 0x2c0, 
    0x2c3, 0x3, 0x2, 0x2, 0x2, 0x2c1, 0x2c2, 0x7, 0x59, 0x2, 0x2, 0x2c2, 
    0x2c4, 0x5, 0x5c, 0x2f, 0x2, 0x2c3, 0x2c1, 0x3, 0x2, 0x2, 0x2, 0x2c3, 
    0x2c4, 0x3, 0x2, 0x2, 0x2, 0x2c4, 0x2c7, 0x3, 0x2, 0x2, 0x2, 0x2c5, 
    0x2c6, 0x7, 0x4, 0x2, 0x2, 0x2c6, 0x2c8, 0x5, 0x54, 0x2b, 0x2, 0x2c7, 
    0x2c5, 0x3, 0x2, 0x2, 0x2, 0x2c7, 0x2c8, 0x3, 0x2, 0x2, 0x2, 0x2c8, 
    0x53, 0x3, 0x2, 0x2, 0x2, 0x2c9, 0x2ca, 0x9, 0x3, 0x2, 0x2, 0x2ca, 0x55, 
    0x3, 0x2, 0x2, 0x2, 0x2cb, 0x2d0, 0x5, 0x5a, 0x2e, 0x2, 0x2cc, 0x2cd, 
    0x7, 0x56, 0x2, 0x2, 0x2cd, 0x2cf, 0x5, 0x5a, 0x2e, 0x2, 0x2ce, 0x2cc, 
    0x3, 0x2, 0x2, 0x2, 0x2cf, 0x2d2, 0x3, 0x2, 0x2, 0x2, 0x2d0, 0x2ce, 
    0x3, 0x2, 0x2, 0x2, 0x2d0, 0x2d1, 0x3, 0x2, 0x2, 0x2, 0x2d1, 0x57, 0x3, 
    0x2, 0x2, 0x2, 0x2d2, 0x2d0, 0x3, 0x2, 0x2, 0x2, 0x2d3, 0x2d4, 0x8, 
    0x2d, 0x1, 0x2, 0x2d4, 0x2db, 0x5, 0x62, 0x32, 0x2, 0x2d5, 0x2db, 0x5, 
    0x5e, 0x30, 0x2, 0x2d6, 0x2d7, 0x9, 0x4, 0x2, 0x2, 0x2d7, 0x2db, 0x5, 
    0x58, 0x2d, 0xb, 0x2d8, 0x2d9, 0x7, 0x29, 0x2, 0x2, 0x2d9, 0x2db, 0x5, 
    0x58, 0x2d, 0x5, 0x2da, 0x2d3, 0x3, 0x2, 0x2, 0x2, 0x2da, 0x2d5, 0x3, 
    0x2, 0x2, 0x2, 0x2da, 0x2d6, 0x3, 0x2, 0x2, 0x2, 0x2da, 0x2d8, 0x3, 
    0x2, 0x2, 0x2, 0x2db, 0x303, 0x3, 0x2, 0x2, 0x2, 0x2dc, 0x2dd, 0xc, 
    0x9, 0x2, 0x2, 0x2dd, 0x2de, 0x9, 0x5, 0x2, 0x2, 0x2de, 0x302, 0x5, 
    0x58, 0x2d, 0xa, 0x2df, 0x2e0, 0xc, 0x8, 0x2, 0x2, 0x2e0, 0x2e1, 0x9, 
    0x4, 0x2, 0x2, 0x2e1, 0x302, 0x5, 0x58, 0x2d, 0x9, 0x2e2, 0x2e3, 0xc, 
    0x7, 0x2, 0x2, 0x2e3, 0x2e4, 0x9, 0x6, 0x2, 0x2, 0x2e4, 0x302, 0x5, 
    0x58, 0x2d, 0x8, 0x2e5, 0x2e6, 0xc, 0x6, 0x2, 0x2, 0x2e6, 0x2e7, 0x9, 
    0x7, 0x2, 0x2, 0x2e7, 0x302, 0x5, 0x58, 0x2d, 0x7, 0x2e8, 0x2e9, 0xc, 
    0x4, 0x2, 0x2, 0x2e9, 0x2ea, 0x9, 0x8, 0x2, 0x2, 0x2ea, 0x302, 0x5, 
    0x58, 0x2d, 0x5, 0x2eb, 0x2ec, 0xc, 0xe, 0x2, 0x2, 0x2ec, 0x2ef, 0x9, 
    0x9, 0x2, 0x2, 0x2ed, 0x2f0, 0x5, 0x6e, 0x38, 0x2, 0x2ee, 0x2f0, 0x5, 
    0x72, 0x3a, 0x2, 0x2ef, 0x2ed, 0x3, 0x2, 0x2, 0x2, 0x2ef, 0x2ee, 0x3, 
    0x2, 0x2, 0x2, 0x2f0, 0x302, 0x3, 0x2, 0x2, 0x2, 0x2f1, 0x2f2, 0xc, 
    0xd, 0x2, 0x2, 0x2f2, 0x2f3, 0x7, 0x50, 0x2, 0x2, 0x2f3, 0x2f4, 0x5, 
    0x58, 0x2d, 0x2, 0x2f4, 0x2f5, 0x7, 0x51, 0x2, 0x2, 0x2f5, 0x302, 0x3, 
    0x2, 0x2, 0x2, 0x2f6, 0x2f7, 0xc, 0xc, 0x2, 0x2, 0x2f7, 0x2f9, 0x7, 
    0x54, 0x2, 0x2, 0x2f8, 0x2fa, 0x5, 0x56, 0x2c, 0x2, 0x2f9, 0x2f8, 0x3, 
    0x2, 0x2, 0x2, 0x2f9, 0x2fa, 0x3, 0x2, 0x2, 0x2, 0x2fa, 0x2fb, 0x3, 
    0x2, 0x2, 0x2, 0x2fb, 0x302, 0x7, 0x55, 0x2, 0x2, 0x2fc, 0x2fd, 0xc, 
    0xa, 0x2, 0x2, 0x2fd, 0x302, 0x9, 0xa, 0x2, 0x2, 0x2fe, 0x2ff, 0xc, 
    0x3, 0x2, 0x2, 0x2ff, 0x300, 0x9, 0xb, 0x2, 0x2, 0x300, 0x302, 0x5, 
    0x5c, 0x2f, 0x2, 0x301, 0x2dc, 0x3, 0x2, 0x2, 0x2, 0x301, 0x2df, 0x3, 
    0x2, 0x2, 0x2, 0x301, 0x2e2, 0x3, 0x2, 0x2, 0x2, 0x301, 0x2e5, 0x3, 
    0x2, 0x2, 0x2, 0x301, 0x2e8, 0x3, 0x2, 0x2, 0x2, 0x301, 0x2eb, 0x3, 
    0x2, 0x2, 0x2, 0x301, 0x2f1, 0x3, 0x2, 0x2, 0x2, 0x301, 0x2f6, 0x3, 
    0x2, 0x2, 0x2, 0x301, 0x2fc, 0x3, 0x2, 0x2, 0x2, 0x301, 0x2fe, 0x3, 
    0x2, 0x2, 0x2, 0x302, 0x305, 0x3, 0x2, 0x2, 0x2, 0x303, 0x301, 0x3, 
    0x2, 0x2, 0x2, 0x303, 0x304, 0x3, 0x2, 0x2, 0x2, 0x304, 0x59, 0x3, 0x2, 
    0x2, 0x2, 0x305, 0x303, 0x3, 0x2, 0x2, 0x2, 0x306, 0x30a, 0x5, 0x58, 
    0x2d, 0x2, 0x307, 0x30a, 0x5, 0x10, 0x9, 0x2, 0x308, 0x30a, 0x5, 0x12, 
    0xa, 0x2, 0x309, 0x306, 0x3, 0x2, 0x2, 0x2, 0x309, 0x307, 0x3, 0x2, 
    0x2, 0x2, 0x309, 0x308, 0x3, 0x2, 0x2, 0x2, 0x30a, 0x5b, 0x3, 0x2, 0x2, 
    0x2, 0x30b, 0x311, 0x5, 0x58, 0x2d, 0x2, 0x30c, 0x311, 0x5, 0x10, 0x9, 
    0x2, 0x30d, 0x311, 0x5, 0x12, 0xa, 0x2, 0x30e, 0x311, 0x5, 0x48, 0x25, 
    0x2, 0x30f, 0x311, 0x5, 0x4c, 0x27, 0x2, 0x310, 0x30b, 0x3, 0x2, 0x2, 
    0x2, 0x310, 0x30c, 0x3, 0x2, 0x2, 0x2, 0x310, 0x30d, 0x3, 0x2, 0x2, 
    0x2, 0x310, 0x30e, 0x3, 0x2, 0x2, 0x2, 0x310, 0x30f, 0x3, 0x2, 0x2, 
    0x2, 0x311, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x312, 0x313, 0x5, 0x60, 0x31, 
    0x2, 0x313, 0x315, 0x7, 0x54, 0x2, 0x2, 0x314, 0x316, 0x5, 0x56, 0x2c, 
    0x2, 0x315, 0x314, 0x3, 0x2, 0x2, 0x2, 0x315, 0x316, 0x3, 0x2, 0x2, 
    0x2, 0x316, 0x317, 0x3, 0x2, 0x2, 0x2, 0x317, 0x318, 0x7, 0x55, 0x2, 
    0x2, 0x318, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x319, 0x31a, 0x9, 0xc, 0x2, 0x2, 
    0x31a, 0x61, 0x3, 0x2, 0x2, 0x2, 0x31b, 0x31c, 0x7, 0x54, 0x2, 0x2, 
    0x31c, 0x31d, 0x5, 0x58, 0x2d, 0x2, 0x31d, 0x31e, 0x7, 0x55, 0x2, 0x2, 
    0x31e, 0x322, 0x3, 0x2, 0x2, 0x2, 0x31f, 0x322, 0x5, 0x64, 0x33, 0x2, 
    0x320, 0x322, 0x5, 0x6e, 0x38, 0x2, 0x321, 0x31b, 0x3, 0x2, 0x2, 0x2, 
    0x321, 0x31f, 0x3, 0x2, 0x2, 0x2, 0x321, 0x320, 0x3, 0x2, 0x2, 0x2, 
    0x322, 0x63, 0x3, 0x2, 0x2, 0x2, 0x323, 0x328, 0x5, 0x66, 0x34, 0x2, 
    0x324, 0x328, 0x5, 0x68, 0x35, 0x2, 0x325, 0x328, 0x5, 0x6a, 0x36, 0x2, 
    0x326, 0x328, 0x5, 0x6c, 0x37, 0x2, 0x327, 0x323, 0x3, 0x2, 0x2, 0x2, 
    0x327, 0x324, 0x3, 0x2, 0x2, 0x2, 0x327, 0x325, 0x3, 0x2, 0x2, 0x2, 
    0x327, 0x326, 0x3, 0x2, 0x2, 0x2, 0x328, 0x65, 0x3, 0x2, 0x2, 0x2, 0x329, 
    0x32a, 0x9, 0xd, 0x2, 0x2, 0x32a, 0x67, 0x3, 0x2, 0x2, 0x2, 0x32b, 0x32c, 
    0x7, 0x3d, 0x2, 0x2, 0x32c, 0x69, 0x3, 0x2, 0x2, 0x2, 0x32d, 0x32e, 
    0x9, 0xe, 0x2, 0x2, 0x32e, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x32f, 0x330, 0x7, 
    0x23, 0x2, 0x2, 0x330, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x331, 0x333, 0x7, 
    0x40, 0x2, 0x2, 0x332, 0x334, 0x7, 0x41, 0x2, 0x2, 0x333, 0x332, 0x3, 
    0x2, 0x2, 0x2, 0x333, 0x334, 0x3, 0x2, 0x2, 0x2, 0x334, 0x6f, 0x3, 0x2, 
    0x2, 0x2, 0x335, 0x336, 0x7, 0x40, 0x2, 0x2, 0x336, 0x71, 0x3, 0x2, 
    0x2, 0x2, 0x337, 0x338, 0x9, 0xf, 0x2, 0x2, 0x338, 0x73, 0x3, 0x2, 0x2, 
    0x2, 0x339, 0x33a, 0x7, 0x42, 0x2, 0x2, 0x33a, 0x75, 0x3, 0x2, 0x2, 
    0x2, 0x33b, 0x33e, 0x7, 0x43, 0x2, 0x2, 0x33c, 0x33e, 0x5, 0x74, 0x3b, 
    0x2, 0x33d, 0x33b, 0x3, 0x2, 0x2, 0x2, 0x33d, 0x33c, 0x3, 0x2, 0x2, 
    0x2, 0x33e, 0x342, 0x3, 0x2, 0x2, 0x2, 0x33f, 0x341, 0x7, 0x43, 0x2, 
    0x2, 0x340, 0x33f, 0x3, 0x2, 0x2, 0x2, 0x341, 0x344, 0x3, 0x2, 0x2, 
    0x2, 0x342, 0x340, 0x3, 0x2, 0x2, 0x2, 0x342, 0x343, 0x3, 0x2, 0x2, 
    0x2, 0x343, 0x77, 0x3, 0x2, 0x2, 0x2, 0x344, 0x342, 0x3, 0x2, 0x2, 0x2, 
    0x345, 0x348, 0x5, 0x76, 0x3c, 0x2, 0x346, 0x348, 0x7, 0x58, 0x2, 0x2, 
    0x347, 0x345, 0x3, 0x2, 0x2, 0x2, 0x347, 0x346, 0x3, 0x2, 0x2, 0x2, 
    0x348, 0x34c, 0x3, 0x2, 0x2, 0x2, 0x349, 0x34b, 0x7, 0x43, 0x2, 0x2, 
    0x34a, 0x349, 0x3, 0x2, 0x2, 0x2, 0x34b, 0x34e, 0x3, 0x2, 0x2, 0x2, 
    0x34c, 0x34a, 0x3, 0x2, 0x2, 0x2, 0x34c, 0x34d, 0x3, 0x2, 0x2, 0x2, 
    0x34d, 0x79, 0x3, 0x2, 0x2, 0x2, 0x34e, 0x34c, 0x3, 0x2, 0x2, 0x2, 0x7d, 
    0x7d, 0x83, 0x8b, 0x92, 0x98, 0x9e, 0xa4, 0xa9, 0xb0, 0xb6, 0xbc, 0xc1, 
    0xc9, 0xcf, 0xe1, 0xe7, 0xed, 0xf0, 0xf3, 0xf7, 0x100, 0x106, 0x10b, 
    0x111, 0x114, 0x117, 0x11c, 0x124, 0x12c, 0x137, 0x13e, 0x142, 0x149, 
    0x14e, 0x153, 0x158, 0x15a, 0x15c, 0x162, 0x167, 0x16c, 0x171, 0x173, 
    0x175, 0x17c, 0x181, 0x186, 0x188, 0x18a, 0x192, 0x196, 0x1a2, 0x1ac, 
    0x1b1, 0x1b6, 0x1ba, 0x1be, 0x1c8, 0x1cd, 0x1d1, 0x1d5, 0x1df, 0x1e3, 
    0x1e8, 0x1ea, 0x1ef, 0x1f4, 0x1f9, 0x1fe, 0x203, 0x209, 0x20d, 0x212, 
    0x217, 0x21e, 0x223, 0x231, 0x236, 0x23a, 0x23c, 0x240, 0x249, 0x24e, 
    0x254, 0x258, 0x25c, 0x261, 0x266, 0x26c, 0x271, 0x275, 0x27a, 0x27f, 
    0x285, 0x289, 0x28e, 0x293, 0x299, 0x29e, 0x2a3, 0x2a8, 0x2ae, 0x2b6, 
    0x2b9, 0x2bf, 0x2c3, 0x2c7, 0x2d0, 0x2da, 0x2ef, 0x2f9, 0x301, 0x303, 
    0x309, 0x310, 0x315, 0x321, 0x327, 0x333, 0x33d, 0x342, 0x347, 0x34c, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

BrightScriptParser::Initializer BrightScriptParser::_init;
