#ifndef LEXER_H
#define LEXER_H

#undef yyFlexLexer
#include <FlexLexer.h>
#include "Parser.hxx"

// Tell flex which function to define
#ifdef  YY_DECL
# undef YY_DECL
#endif

#define YY_DECL acentric_lang::Parser::symbol_type acentric_lang::Lexer::lex()

namespace acentric_lang
{
    // To feed data back to bison, the yylex method needs yylval and
    // yylloc parameters. Since the yyFlexLexer class is defined in the
    // system header <FlexLexer.h> the signature of its yylex() method
    // can not be changed anymore. This makes it necessary to derive a
    // scanner class that provides a method with the desired signature:

    class Lexer : public yyFlexLexer
    {
    public:
        explicit Lexer(std::istream& in = std::cin, std::ostream& out = std::cout);
        acentric_lang::Parser::symbol_type lex(); // TODO figure out location reporting (make sure it works correctly)

		std::ostream& getyyout() { return yyout; } // For use by the parser, so it will automatically have the same ostream as the lexer
		std::istream& getyyin() { return yyin; }
		void restart() { yyrestart(yyin); } // does this even do anything useful?
    };
}

#endif // LEXER_H