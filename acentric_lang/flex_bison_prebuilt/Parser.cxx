// A Bison parser, made by GNU Bison 3.0.4.

// Skeleton implementation for Bison LALR(1) parsers in C++

// Copyright (C) 2002-2015 Free Software Foundation, Inc.

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

// As a special exception, you may create a larger work that contains
// part or all of the Bison parser skeleton and distribute that work
// under terms of your choice, so long as that work isn't itself a
// parser generator using the skeleton or a modified version thereof
// as a parser skeleton.  Alternatively, if you modify or redistribute
// the parser skeleton itself, you may (at your option) remove this
// special exception, which will cause the skeleton and the resulting
// Bison output files to be licensed under the GNU General Public
// License without this special exception.

// This special exception was added by the Free Software Foundation in
// version 2.2 of Bison.


// First part of user declarations.

#line 37 "C:/Users/a/Documents/programming/acentric/build/acentric_lang/Parser.cxx" // lalr1.cc:404

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

#include "Parser.hxx"

// User implementation prologue.

#line 51 "C:/Users/a/Documents/programming/acentric/build/acentric_lang/Parser.cxx" // lalr1.cc:412
// Unqualified %code blocks.
#line 43 "src/Parser.y" // lalr1.cc:413

    #include <iostream>     // cerr, endl
    #include <utility>      // move
    #include <string>

    #include "Lexer.h"

    #define yylex lexer->lex

    #define OUT_RESULT(output) \
        if (res->interactive) lexer->getyyout() << output;

	#define OUT_ERROR \
		if (res->interactive) lexer->getyyout() << "Syntax error";

	#define OUT_NEWLINE \
		if (res->interactive) lexer->getyyout() << std::endl;

	#define OUT_PROMPT \
		if (res->interactive) lexer->getyyout() << "> ";

	#define OUT_UNHANDLED_CHAR(output) \
		if (res->interactive) lexer->getyyout() << "Syntax error";


#line 79 "C:/Users/a/Documents/programming/acentric/build/acentric_lang/Parser.cxx" // lalr1.cc:413


#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> // FIXME: INFRINGES ON USER NAME SPACE.
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K].location)
/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

# ifndef YYLLOC_DEFAULT
#  define YYLLOC_DEFAULT(Current, Rhs, N)                               \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).begin  = YYRHSLOC (Rhs, 1).begin;                   \
          (Current).end    = YYRHSLOC (Rhs, N).end;                     \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).begin = (Current).end = YYRHSLOC (Rhs, 0).end;      \
        }                                                               \
    while (/*CONSTCOND*/ false)
# endif


// Suppress unused-variable warnings by "using" E.
#define YYUSE(E) ((void) (E))

// Enable debugging if requested.
#if YYDEBUG

// A pseudo ostream that takes yydebug_ into account.
# define YYCDEBUG if (yydebug_) (*yycdebug_)

# define YY_SYMBOL_PRINT(Title, Symbol)         \
  do {                                          \
    if (yydebug_)                               \
    {                                           \
      *yycdebug_ << Title << ' ';               \
      yy_print_ (*yycdebug_, Symbol);           \
      *yycdebug_ << std::endl;                  \
    }                                           \
  } while (false)

# define YY_REDUCE_PRINT(Rule)          \
  do {                                  \
    if (yydebug_)                       \
      yy_reduce_print_ (Rule);          \
  } while (false)

# define YY_STACK_PRINT()               \
  do {                                  \
    if (yydebug_)                       \
      yystack_print_ ();                \
  } while (false)

#else // !YYDEBUG

# define YYCDEBUG if (false) std::cerr
# define YY_SYMBOL_PRINT(Title, Symbol)  YYUSE(Symbol)
# define YY_REDUCE_PRINT(Rule)           static_cast<void>(0)
# define YY_STACK_PRINT()                static_cast<void>(0)

#endif // !YYDEBUG

#define yyerrok         (yyerrstatus_ = 0)
#define yyclearin       (yyla.clear ())

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYRECOVERING()  (!!yyerrstatus_)

#line 6 "src/Parser.y" // lalr1.cc:479
namespace acentric_lang {
#line 165 "C:/Users/a/Documents/programming/acentric/build/acentric_lang/Parser.cxx" // lalr1.cc:479

  /* Return YYSTR after stripping away unnecessary quotes and
     backslashes, so that it's suitable for yyerror.  The heuristic is
     that double-quoting is unnecessary unless the string contains an
     apostrophe, a comma, or backslash (other than backslash-backslash).
     YYSTR is taken from yytname.  */
  std::string
  Parser::yytnamerr_ (const char *yystr)
  {
    if (*yystr == '"')
      {
        std::string yyr = "";
        char const *yyp = yystr;

        for (;;)
          switch (*++yyp)
            {
            case '\'':
            case ',':
              goto do_not_strip_quotes;

            case '\\':
              if (*++yyp != '\\')
                goto do_not_strip_quotes;
              // Fall through.
            default:
              yyr += *yyp;
              break;

            case '"':
              return yyr;
            }
      do_not_strip_quotes: ;
      }

    return yystr;
  }


  /// Build a parser object.
  Parser::Parser (acentric_lang::Lexer* lexer_yyarg, acentric_lang::ParseResult* res_yyarg)
    :
#if YYDEBUG
      yydebug_ (false),
      yycdebug_ (&std::cerr),
#endif
      lexer (lexer_yyarg),
      res (res_yyarg)
  {}

  Parser::~Parser ()
  {}


  /*---------------.
  | Symbol types.  |
  `---------------*/



  // by_state.
  inline
  Parser::by_state::by_state ()
    : state (empty_state)
  {}

  inline
  Parser::by_state::by_state (const by_state& other)
    : state (other.state)
  {}

  inline
  void
  Parser::by_state::clear ()
  {
    state = empty_state;
  }

  inline
  void
  Parser::by_state::move (by_state& that)
  {
    state = that.state;
    that.clear ();
  }

  inline
  Parser::by_state::by_state (state_type s)
    : state (s)
  {}

  inline
  Parser::symbol_number_type
  Parser::by_state::type_get () const
  {
    if (state == empty_state)
      return empty_symbol;
    else
      return yystos_[state];
  }

  inline
  Parser::stack_symbol_type::stack_symbol_type ()
  {}


  inline
  Parser::stack_symbol_type::stack_symbol_type (state_type s, symbol_type& that)
    : super_type (s, that.location)
  {
      switch (that.type_get ())
    {
      case 31: // chord
        value.move< acentric_core::Chord > (that.value);
        break;

      case 29: // interval
        value.move< acentric_core::Interval > (that.value);
        break;

      case 26: // note
        value.move< acentric_core::Note > (that.value);
        break;

      case 18: // BASIC_NOTE
      case 19: // INTERVAL_TYPE
      case 20: // UNHANDLED_CHAR
        value.move< char > (that.value);
        break;

      case 21: // POS_INTEGER
      case 22: // DOTS
      case 27: // offset
      case 28: // octave
        value.move< int > (that.value);
        break;

      case 30: // interval_list
        value.move< std::vector<acentric_core::Interval> > (that.value);
        break;

      default:
        break;
    }

    // that is emptied.
    that.type = empty_symbol;
  }

  inline
  Parser::stack_symbol_type&
  Parser::stack_symbol_type::operator= (const stack_symbol_type& that)
  {
    state = that.state;
      switch (that.type_get ())
    {
      case 31: // chord
        value.copy< acentric_core::Chord > (that.value);
        break;

      case 29: // interval
        value.copy< acentric_core::Interval > (that.value);
        break;

      case 26: // note
        value.copy< acentric_core::Note > (that.value);
        break;

      case 18: // BASIC_NOTE
      case 19: // INTERVAL_TYPE
      case 20: // UNHANDLED_CHAR
        value.copy< char > (that.value);
        break;

      case 21: // POS_INTEGER
      case 22: // DOTS
      case 27: // offset
      case 28: // octave
        value.copy< int > (that.value);
        break;

      case 30: // interval_list
        value.copy< std::vector<acentric_core::Interval> > (that.value);
        break;

      default:
        break;
    }

    location = that.location;
    return *this;
  }


  template <typename Base>
  inline
  void
  Parser::yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const
  {
    if (yymsg)
      YY_SYMBOL_PRINT (yymsg, yysym);
  }

#if YYDEBUG
  template <typename Base>
  void
  Parser::yy_print_ (std::ostream& yyo,
                                     const basic_symbol<Base>& yysym) const
  {
    std::ostream& yyoutput = yyo;
    YYUSE (yyoutput);
    symbol_number_type yytype = yysym.type_get ();
    // Avoid a (spurious) G++ 4.8 warning about "array subscript is
    // below array bounds".
    if (yysym.empty ())
      std::abort ();
    yyo << (yytype < yyntokens_ ? "token" : "nterm")
        << ' ' << yytname_[yytype] << " ("
        << yysym.location << ": ";
    YYUSE (yytype);
    yyo << ')';
  }
#endif

  inline
  void
  Parser::yypush_ (const char* m, state_type s, symbol_type& sym)
  {
    stack_symbol_type t (s, sym);
    yypush_ (m, t);
  }

  inline
  void
  Parser::yypush_ (const char* m, stack_symbol_type& s)
  {
    if (m)
      YY_SYMBOL_PRINT (m, s);
    yystack_.push (s);
  }

  inline
  void
  Parser::yypop_ (unsigned int n)
  {
    yystack_.pop (n);
  }

#if YYDEBUG
  std::ostream&
  Parser::debug_stream () const
  {
    return *yycdebug_;
  }

  void
  Parser::set_debug_stream (std::ostream& o)
  {
    yycdebug_ = &o;
  }


  Parser::debug_level_type
  Parser::debug_level () const
  {
    return yydebug_;
  }

  void
  Parser::set_debug_level (debug_level_type l)
  {
    yydebug_ = l;
  }
#endif // YYDEBUG

  inline Parser::state_type
  Parser::yy_lr_goto_state_ (state_type yystate, int yysym)
  {
    int yyr = yypgoto_[yysym - yyntokens_] + yystate;
    if (0 <= yyr && yyr <= yylast_ && yycheck_[yyr] == yystate)
      return yytable_[yyr];
    else
      return yydefgoto_[yysym - yyntokens_];
  }

  inline bool
  Parser::yy_pact_value_is_default_ (int yyvalue)
  {
    return yyvalue == yypact_ninf_;
  }

  inline bool
  Parser::yy_table_value_is_error_ (int yyvalue)
  {
    return yyvalue == yytable_ninf_;
  }

  int
  Parser::parse ()
  {
    // State.
    int yyn;
    /// Length of the RHS of the rule being reduced.
    int yylen = 0;

    // Error handling.
    int yynerrs_ = 0;
    int yyerrstatus_ = 0;

    /// The lookahead symbol.
    symbol_type yyla;

    /// The locations where the error started and ended.
    stack_symbol_type yyerror_range[3];

    /// The return value of parse ().
    int yyresult;

    // FIXME: This shoud be completely indented.  It is not yet to
    // avoid gratuitous conflicts when merging into the master branch.
    try
      {
    YYCDEBUG << "Starting parse" << std::endl;


    /* Initialize the stack.  The initial state will be set in
       yynewstate, since the latter expects the semantical and the
       location values to have been already stored, initialize these
       stacks with a primary value.  */
    yystack_.clear ();
    yypush_ (YY_NULLPTR, 0, yyla);

    // A new symbol was pushed on the stack.
  yynewstate:
    YYCDEBUG << "Entering state " << yystack_[0].state << std::endl;

    // Accept?
    if (yystack_[0].state == yyfinal_)
      goto yyacceptlab;

    goto yybackup;

    // Backup.
  yybackup:

    // Try to take a decision without lookahead.
    yyn = yypact_[yystack_[0].state];
    if (yy_pact_value_is_default_ (yyn))
      goto yydefault;

    // Read a lookahead token.
    if (yyla.empty ())
      {
        YYCDEBUG << "Reading a token: ";
        try
          {
            symbol_type yylookahead (yylex ());
            yyla.move (yylookahead);
          }
        catch (const syntax_error& yyexc)
          {
            error (yyexc);
            goto yyerrlab1;
          }
      }
    YY_SYMBOL_PRINT ("Next token is", yyla);

    /* If the proper action on seeing token YYLA.TYPE is to reduce or
       to detect an error, take that action.  */
    yyn += yyla.type_get ();
    if (yyn < 0 || yylast_ < yyn || yycheck_[yyn] != yyla.type_get ())
      goto yydefault;

    // Reduce or error.
    yyn = yytable_[yyn];
    if (yyn <= 0)
      {
        if (yy_table_value_is_error_ (yyn))
          goto yyerrlab;
        yyn = -yyn;
        goto yyreduce;
      }

    // Count tokens shifted since error; after three, turn off error status.
    if (yyerrstatus_)
      --yyerrstatus_;

    // Shift the lookahead token.
    yypush_ ("Shifting", yyn, yyla);
    goto yynewstate;

  /*-----------------------------------------------------------.
  | yydefault -- do the default action for the current state.  |
  `-----------------------------------------------------------*/
  yydefault:
    yyn = yydefact_[yystack_[0].state];
    if (yyn == 0)
      goto yyerrlab;
    goto yyreduce;

  /*-----------------------------.
  | yyreduce -- Do a reduction.  |
  `-----------------------------*/
  yyreduce:
    yylen = yyr2_[yyn];
    {
      stack_symbol_type yylhs;
      yylhs.state = yy_lr_goto_state_(yystack_[yylen].state, yyr1_[yyn]);
      /* Variants are always initialized to an empty instance of the
         correct type. The default '$$ = $1' action is NOT applied
         when using variants.  */
        switch (yyr1_[yyn])
    {
      case 31: // chord
        yylhs.value.build< acentric_core::Chord > ();
        break;

      case 29: // interval
        yylhs.value.build< acentric_core::Interval > ();
        break;

      case 26: // note
        yylhs.value.build< acentric_core::Note > ();
        break;

      case 18: // BASIC_NOTE
      case 19: // INTERVAL_TYPE
      case 20: // UNHANDLED_CHAR
        yylhs.value.build< char > ();
        break;

      case 21: // POS_INTEGER
      case 22: // DOTS
      case 27: // offset
      case 28: // octave
        yylhs.value.build< int > ();
        break;

      case 30: // interval_list
        yylhs.value.build< std::vector<acentric_core::Interval> > ();
        break;

      default:
        break;
    }


      // Compute the default @$.
      {
        slice<stack_symbol_type, stack_type> slice (yystack_, yylen);
        YYLLOC_DEFAULT (yylhs.location, slice, yylen);
      }

      // Perform the reduction.
      YY_REDUCE_PRINT (yyn);
      try
        {
          switch (yyn)
            {
  case 3:
#line 111 "src/Parser.y" // lalr1.cc:859
    { OUT_NEWLINE OUT_PROMPT }
#line 628 "C:/Users/a/Documents/programming/acentric/build/acentric_lang/Parser.cxx" // lalr1.cc:859
    break;

  case 4:
#line 112 "src/Parser.y" // lalr1.cc:859
    { OUT_NEWLINE OUT_ERROR OUT_NEWLINE OUT_PROMPT }
#line 634 "C:/Users/a/Documents/programming/acentric/build/acentric_lang/Parser.cxx" // lalr1.cc:859
    break;

  case 5:
#line 113 "src/Parser.y" // lalr1.cc:859
    { OUT_ERROR OUT_NEWLINE OUT_PROMPT }
#line 640 "C:/Users/a/Documents/programming/acentric/build/acentric_lang/Parser.cxx" // lalr1.cc:859
    break;

  case 6:
#line 114 "src/Parser.y" // lalr1.cc:859
    { OUT_PROMPT }
#line 646 "C:/Users/a/Documents/programming/acentric/build/acentric_lang/Parser.cxx" // lalr1.cc:859
    break;

  case 7:
#line 118 "src/Parser.y" // lalr1.cc:859
    { res->noteResult = yystack_[0].value.as< acentric_core::Note > (); OUT_RESULT(yystack_[0].value.as< acentric_core::Note > ()) }
#line 652 "C:/Users/a/Documents/programming/acentric/build/acentric_lang/Parser.cxx" // lalr1.cc:859
    break;

  case 8:
#line 119 "src/Parser.y" // lalr1.cc:859
    { res->intervalResult = yystack_[0].value.as< acentric_core::Interval > (); OUT_RESULT(yystack_[0].value.as< acentric_core::Interval > ()) }
#line 658 "C:/Users/a/Documents/programming/acentric/build/acentric_lang/Parser.cxx" // lalr1.cc:859
    break;

  case 9:
#line 126 "src/Parser.y" // lalr1.cc:859
    { OUT_RESULT(yystack_[0].value.as< acentric_core::Chord > ()) }
#line 664 "C:/Users/a/Documents/programming/acentric/build/acentric_lang/Parser.cxx" // lalr1.cc:859
    break;

  case 10:
#line 127 "src/Parser.y" // lalr1.cc:859
    { OUT_UNHANDLED_CHAR(yystack_[0].value.as< char > ()) }
#line 670 "C:/Users/a/Documents/programming/acentric/build/acentric_lang/Parser.cxx" // lalr1.cc:859
    break;

  case 11:
#line 130 "src/Parser.y" // lalr1.cc:859
    { yylhs.value.as< acentric_core::Note > () = acentric_core::Note{yystack_[2].value.as< char > (), yystack_[1].value.as< int > (), yystack_[0].value.as< int > ()}; }
#line 676 "C:/Users/a/Documents/programming/acentric/build/acentric_lang/Parser.cxx" // lalr1.cc:859
    break;

  case 12:
#line 131 "src/Parser.y" // lalr1.cc:859
    { yylhs.value.as< acentric_core::Note > () = yystack_[2].value.as< acentric_core::Note > () + yystack_[0].value.as< acentric_core::Interval > (); }
#line 682 "C:/Users/a/Documents/programming/acentric/build/acentric_lang/Parser.cxx" // lalr1.cc:859
    break;

  case 13:
#line 132 "src/Parser.y" // lalr1.cc:859
    { yylhs.value.as< acentric_core::Note > () = yystack_[2].value.as< acentric_core::Note > () - yystack_[0].value.as< acentric_core::Interval > (); }
#line 688 "C:/Users/a/Documents/programming/acentric/build/acentric_lang/Parser.cxx" // lalr1.cc:859
    break;

  case 14:
#line 133 "src/Parser.y" // lalr1.cc:859
    { yylhs.value.as< acentric_core::Note > () = yystack_[0].value.as< acentric_core::Note > () + yystack_[2].value.as< acentric_core::Interval > (); }
#line 694 "C:/Users/a/Documents/programming/acentric/build/acentric_lang/Parser.cxx" // lalr1.cc:859
    break;

  case 15:
#line 136 "src/Parser.y" // lalr1.cc:859
    { yylhs.value.as< int > () = 0; }
#line 700 "C:/Users/a/Documents/programming/acentric/build/acentric_lang/Parser.cxx" // lalr1.cc:859
    break;

  case 16:
#line 137 "src/Parser.y" // lalr1.cc:859
    { yylhs.value.as< int > () = yystack_[0].value.as< int > () - 1; }
#line 706 "C:/Users/a/Documents/programming/acentric/build/acentric_lang/Parser.cxx" // lalr1.cc:859
    break;

  case 17:
#line 138 "src/Parser.y" // lalr1.cc:859
    { yylhs.value.as< int > () = yystack_[0].value.as< int > () + 1; }
#line 712 "C:/Users/a/Documents/programming/acentric/build/acentric_lang/Parser.cxx" // lalr1.cc:859
    break;

  case 18:
#line 141 "src/Parser.y" // lalr1.cc:859
    { yylhs.value.as< int > () = 4; }
#line 718 "C:/Users/a/Documents/programming/acentric/build/acentric_lang/Parser.cxx" // lalr1.cc:859
    break;

  case 19:
#line 142 "src/Parser.y" // lalr1.cc:859
    { yylhs.value.as< int > () = yystack_[0].value.as< int > (); }
#line 724 "C:/Users/a/Documents/programming/acentric/build/acentric_lang/Parser.cxx" // lalr1.cc:859
    break;

  case 20:
#line 143 "src/Parser.y" // lalr1.cc:859
    { yylhs.value.as< int > () = 0; }
#line 730 "C:/Users/a/Documents/programming/acentric/build/acentric_lang/Parser.cxx" // lalr1.cc:859
    break;

  case 21:
#line 146 "src/Parser.y" // lalr1.cc:859
    { yylhs.value.as< acentric_core::Interval > () = acentric_core::Interval{yystack_[1].value.as< char > (), yystack_[0].value.as< int > ()}; }
#line 736 "C:/Users/a/Documents/programming/acentric/build/acentric_lang/Parser.cxx" // lalr1.cc:859
    break;

  case 22:
#line 147 "src/Parser.y" // lalr1.cc:859
    { yylhs.value.as< acentric_core::Interval > () = yystack_[2].value.as< acentric_core::Note > ().getInterval(yystack_[0].value.as< acentric_core::Note > ()); }
#line 742 "C:/Users/a/Documents/programming/acentric/build/acentric_lang/Parser.cxx" // lalr1.cc:859
    break;

  case 23:
#line 148 "src/Parser.y" // lalr1.cc:859
    { yylhs.value.as< acentric_core::Interval > () = yystack_[2].value.as< acentric_core::Interval > () + yystack_[0].value.as< acentric_core::Interval > (); }
#line 748 "C:/Users/a/Documents/programming/acentric/build/acentric_lang/Parser.cxx" // lalr1.cc:859
    break;

  case 24:
#line 149 "src/Parser.y" // lalr1.cc:859
    { yylhs.value.as< acentric_core::Interval > () = yystack_[2].value.as< acentric_core::Interval > () - yystack_[0].value.as< acentric_core::Interval > (); }
#line 754 "C:/Users/a/Documents/programming/acentric/build/acentric_lang/Parser.cxx" // lalr1.cc:859
    break;

  case 25:
#line 152 "src/Parser.y" // lalr1.cc:859
    { yylhs.value.as< std::vector<acentric_core::Interval> > () = std::vector<acentric_core::Interval>{}; }
#line 760 "C:/Users/a/Documents/programming/acentric/build/acentric_lang/Parser.cxx" // lalr1.cc:859
    break;

  case 26:
#line 153 "src/Parser.y" // lalr1.cc:859
    { yystack_[0].value.as< std::vector<acentric_core::Interval> > ().insert(yystack_[0].value.as< std::vector<acentric_core::Interval> > ().begin(), yystack_[1].value.as< acentric_core::Interval > ()); yylhs.value.as< std::vector<acentric_core::Interval> > () = std::move(yystack_[0].value.as< std::vector<acentric_core::Interval> > ()); }
#line 766 "C:/Users/a/Documents/programming/acentric/build/acentric_lang/Parser.cxx" // lalr1.cc:859
    break;

  case 27:
#line 154 "src/Parser.y" // lalr1.cc:859
    { yystack_[0].value.as< std::vector<acentric_core::Interval> > ().insert(yystack_[0].value.as< std::vector<acentric_core::Interval> > ().begin(), yystack_[2].value.as< acentric_core::Interval > ()); yylhs.value.as< std::vector<acentric_core::Interval> > () = std::move(yystack_[0].value.as< std::vector<acentric_core::Interval> > ()); }
#line 772 "C:/Users/a/Documents/programming/acentric/build/acentric_lang/Parser.cxx" // lalr1.cc:859
    break;

  case 28:
#line 158 "src/Parser.y" // lalr1.cc:859
    { yylhs.value.as< acentric_core::Chord > () = acentric_core::Chord{yystack_[2].value.as< acentric_core::Note > (), yystack_[0].value.as< std::vector<acentric_core::Interval> > ()}; }
#line 778 "C:/Users/a/Documents/programming/acentric/build/acentric_lang/Parser.cxx" // lalr1.cc:859
    break;


#line 782 "C:/Users/a/Documents/programming/acentric/build/acentric_lang/Parser.cxx" // lalr1.cc:859
            default:
              break;
            }
        }
      catch (const syntax_error& yyexc)
        {
          error (yyexc);
          YYERROR;
        }
      YY_SYMBOL_PRINT ("-> $$ =", yylhs);
      yypop_ (yylen);
      yylen = 0;
      YY_STACK_PRINT ();

      // Shift the result of the reduction.
      yypush_ (YY_NULLPTR, yylhs);
    }
    goto yynewstate;

  /*--------------------------------------.
  | yyerrlab -- here on detecting error.  |
  `--------------------------------------*/
  yyerrlab:
    // If not already recovering from an error, report this error.
    if (!yyerrstatus_)
      {
        ++yynerrs_;
        error (yyla.location, yysyntax_error_ (yystack_[0].state, yyla));
      }


    yyerror_range[1].location = yyla.location;
    if (yyerrstatus_ == 3)
      {
        /* If just tried and failed to reuse lookahead token after an
           error, discard it.  */

        // Return failure if at end of input.
        if (yyla.type_get () == yyeof_)
          YYABORT;
        else if (!yyla.empty ())
          {
            yy_destroy_ ("Error: discarding", yyla);
            yyla.clear ();
          }
      }

    // Else will try to reuse lookahead token after shifting the error token.
    goto yyerrlab1;


  /*---------------------------------------------------.
  | yyerrorlab -- error raised explicitly by YYERROR.  |
  `---------------------------------------------------*/
  yyerrorlab:

    /* Pacify compilers like GCC when the user code never invokes
       YYERROR and the label yyerrorlab therefore never appears in user
       code.  */
    if (false)
      goto yyerrorlab;
    yyerror_range[1].location = yystack_[yylen - 1].location;
    /* Do not reclaim the symbols of the rule whose action triggered
       this YYERROR.  */
    yypop_ (yylen);
    yylen = 0;
    goto yyerrlab1;

  /*-------------------------------------------------------------.
  | yyerrlab1 -- common code for both syntax error and YYERROR.  |
  `-------------------------------------------------------------*/
  yyerrlab1:
    yyerrstatus_ = 3;   // Each real token shifted decrements this.
    {
      stack_symbol_type error_token;
      for (;;)
        {
          yyn = yypact_[yystack_[0].state];
          if (!yy_pact_value_is_default_ (yyn))
            {
              yyn += yyterror_;
              if (0 <= yyn && yyn <= yylast_ && yycheck_[yyn] == yyterror_)
                {
                  yyn = yytable_[yyn];
                  if (0 < yyn)
                    break;
                }
            }

          // Pop the current state because it cannot handle the error token.
          if (yystack_.size () == 1)
            YYABORT;

          yyerror_range[1].location = yystack_[0].location;
          yy_destroy_ ("Error: popping", yystack_[0]);
          yypop_ ();
          YY_STACK_PRINT ();
        }

      yyerror_range[2].location = yyla.location;
      YYLLOC_DEFAULT (error_token.location, yyerror_range, 2);

      // Shift the error token.
      error_token.state = yyn;
      yypush_ ("Shifting", error_token);
    }
    goto yynewstate;

    // Accept.
  yyacceptlab:
    yyresult = 0;
    goto yyreturn;

    // Abort.
  yyabortlab:
    yyresult = 1;
    goto yyreturn;

  yyreturn:
    if (!yyla.empty ())
      yy_destroy_ ("Cleanup: discarding lookahead", yyla);

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYABORT or YYACCEPT.  */
    yypop_ (yylen);
    while (1 < yystack_.size ())
      {
        yy_destroy_ ("Cleanup: popping", yystack_[0]);
        yypop_ ();
      }

    return yyresult;
  }
    catch (...)
      {
        YYCDEBUG << "Exception caught: cleaning lookahead and stack"
                 << std::endl;
        // Do not try to display the values of the reclaimed symbols,
        // as their printer might throw an exception.
        if (!yyla.empty ())
          yy_destroy_ (YY_NULLPTR, yyla);

        while (1 < yystack_.size ())
          {
            yy_destroy_ (YY_NULLPTR, yystack_[0]);
            yypop_ ();
          }
        throw;
      }
  }

  void
  Parser::error (const syntax_error& yyexc)
  {
    error (yyexc.location, yyexc.what());
  }

  // Generate an error message.
  std::string
  Parser::yysyntax_error_ (state_type yystate, const symbol_type& yyla) const
  {
    // Number of reported tokens (one for the "unexpected", one per
    // "expected").
    size_t yycount = 0;
    // Its maximum.
    enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
    // Arguments of yyformat.
    char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];

    /* There are many possibilities here to consider:
       - If this state is a consistent state with a default action, then
         the only way this function was invoked is if the default action
         is an error action.  In that case, don't check for expected
         tokens because there are none.
       - The only way there can be no lookahead present (in yyla) is
         if this state is a consistent state with a default action.
         Thus, detecting the absence of a lookahead is sufficient to
         determine that there is no unexpected or expected token to
         report.  In that case, just report a simple "syntax error".
       - Don't assume there isn't a lookahead just because this state is
         a consistent state with a default action.  There might have
         been a previous inconsistent state, consistent state with a
         non-default action, or user semantic action that manipulated
         yyla.  (However, yyla is currently not documented for users.)
       - Of course, the expected token list depends on states to have
         correct lookahead information, and it depends on the parser not
         to perform extra reductions after fetching a lookahead from the
         scanner and before detecting a syntax error.  Thus, state
         merging (from LALR or IELR) and default reductions corrupt the
         expected token list.  However, the list is correct for
         canonical LR with one exception: it will still contain any
         token that will not be accepted due to an error action in a
         later state.
    */
    if (!yyla.empty ())
      {
        int yytoken = yyla.type_get ();
        yyarg[yycount++] = yytname_[yytoken];
        int yyn = yypact_[yystate];
        if (!yy_pact_value_is_default_ (yyn))
          {
            /* Start YYX at -YYN if negative to avoid negative indexes in
               YYCHECK.  In other words, skip the first -YYN actions for
               this state because they are default actions.  */
            int yyxbegin = yyn < 0 ? -yyn : 0;
            // Stay within bounds of both yycheck and yytname.
            int yychecklim = yylast_ - yyn + 1;
            int yyxend = yychecklim < yyntokens_ ? yychecklim : yyntokens_;
            for (int yyx = yyxbegin; yyx < yyxend; ++yyx)
              if (yycheck_[yyx + yyn] == yyx && yyx != yyterror_
                  && !yy_table_value_is_error_ (yytable_[yyx + yyn]))
                {
                  if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                    {
                      yycount = 1;
                      break;
                    }
                  else
                    yyarg[yycount++] = yytname_[yyx];
                }
          }
      }

    char const* yyformat = YY_NULLPTR;
    switch (yycount)
      {
#define YYCASE_(N, S)                         \
        case N:                               \
          yyformat = S;                       \
        break
        YYCASE_(0, YY_("syntax error"));
        YYCASE_(1, YY_("syntax error, unexpected %s"));
        YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
        YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
        YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
        YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
      }

    std::string yyres;
    // Argument number.
    size_t yyi = 0;
    for (char const* yyp = yyformat; *yyp; ++yyp)
      if (yyp[0] == '%' && yyp[1] == 's' && yyi < yycount)
        {
          yyres += yytnamerr_ (yyarg[yyi++]);
          ++yyp;
        }
      else
        yyres += *yyp;
    return yyres;
  }


  const signed char Parser::yypact_ninf_ = -33;

  const signed char Parser::yytable_ninf_ = -1;

  const signed char
  Parser::yypact_[] =
  {
     -33,    10,   -33,    29,   -33,     9,    -6,   -33,     0,    -2,
      30,   -33,   -33,     9,     9,     4,   -33,    31,   -33,   -12,
     -12,   -12,   -12,   -12,   -12,   -33,   -33,   -33,   -33,   -33,
     -33,    28,   -33,   -33,    25,   -33,    32,    30,   -33,   -33,
     -33,   -12,   -33,   -33
  };

  const unsigned char
  Parser::yydefact_[] =
  {
       2,     0,     1,     0,     6,    15,     0,    10,     0,     7,
       8,     9,     5,    15,    15,    18,    21,     0,     3,     0,
       0,    25,     0,     0,     0,    17,    16,    20,    19,    11,
       4,     0,    13,    12,    25,    28,    22,     0,    24,    14,
      23,    25,    26,    27
  };

  const signed char
  Parser::yypgoto_[] =
  {
     -33,   -33,   -33,     2,    27,   -33,    -1,   -32,   -33
  };

  const signed char
  Parser::yydefgoto_[] =
  {
      -1,     1,     8,    31,    15,    29,    34,    35,    11
  };

  const unsigned char
  Parser::yytable_[] =
  {
      10,    17,    42,     9,    19,    20,     5,     6,    21,    43,
       2,     3,    22,    13,    14,    16,     0,    18,    32,    33,
      27,    37,    38,    40,    36,    28,    39,     4,     5,     6,
       7,    23,    24,    41,    19,    20,    23,    24,    19,    20,
      25,    26,    22,     5,     6,     0,    12,     0,    30
  };

  const signed char
  Parser::yycheck_[] =
  {
       1,     1,    34,     1,     6,     7,    18,    19,    10,    41,
       0,     1,    14,     4,     5,    21,    -1,    17,    19,    20,
      16,    22,    23,    24,    22,    21,    24,    17,    18,    19,
      20,     6,     7,     8,     6,     7,     6,     7,     6,     7,
      13,    14,    14,    18,    19,    -1,    17,    -1,    17
  };

  const unsigned char
  Parser::yystos_[] =
  {
       0,    24,     0,     1,    17,    18,    19,    20,    25,    26,
      29,    31,    17,     4,     5,    27,    21,     1,    17,     6,
       7,    10,    14,     6,     7,    27,    27,    16,    21,    28,
      17,    26,    29,    29,    29,    30,    26,    29,    29,    26,
      29,     8,    30,    30
  };

  const unsigned char
  Parser::yyr1_[] =
  {
       0,    23,    24,    24,    24,    24,    24,    25,    25,    25,
      25,    26,    26,    26,    26,    27,    27,    27,    28,    28,
      28,    29,    29,    29,    29,    30,    30,    30,    31
  };

  const unsigned char
  Parser::yyr2_[] =
  {
       0,     2,     0,     3,     4,     3,     2,     1,     1,     1,
       1,     3,     3,     3,     3,     0,     2,     2,     0,     1,
       1,     2,     3,     3,     3,     0,     2,     3,     3
  };



  // YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
  // First, the terminals, then, starting at \a yyntokens_, nonterminals.
  const char*
  const Parser::yytname_[] =
  {
  "END", "error", "$undefined", "REST", "SHARP", "FLAT", "MINUS_SIGN",
  "PLUS_SIGN", "UNDERSCORE", "CARAT", "STAR", "LPAREN", "RPAREN",
  "WHITESPACE", "COLON", "SEMICOLON", "ZERO", "NEWLINE", "BASIC_NOTE",
  "INTERVAL_TYPE", "UNHANDLED_CHAR", "POS_INTEGER", "DOTS", "$accept",
  "root", "complete_phrase", "note", "offset", "octave", "interval",
  "interval_list", "chord", YY_NULLPTR
  };

#if YYDEBUG
  const unsigned char
  Parser::yyrline_[] =
  {
       0,   110,   110,   111,   112,   113,   114,   118,   119,   126,
     127,   130,   131,   132,   133,   136,   137,   138,   141,   142,
     143,   146,   147,   148,   149,   152,   153,   154,   158
  };

  // Print the state stack on the debug stream.
  void
  Parser::yystack_print_ ()
  {
    *yycdebug_ << "Stack now";
    for (stack_type::const_iterator
           i = yystack_.begin (),
           i_end = yystack_.end ();
         i != i_end; ++i)
      *yycdebug_ << ' ' << i->state;
    *yycdebug_ << std::endl;
  }

  // Report on the debug stream that the rule \a yyrule is going to be reduced.
  void
  Parser::yy_reduce_print_ (int yyrule)
  {
    unsigned int yylno = yyrline_[yyrule];
    int yynrhs = yyr2_[yyrule];
    // Print the symbols being reduced, and their result.
    *yycdebug_ << "Reducing stack by rule " << yyrule - 1
               << " (line " << yylno << "):" << std::endl;
    // The symbols being reduced.
    for (int yyi = 0; yyi < yynrhs; yyi++)
      YY_SYMBOL_PRINT ("   $" << yyi + 1 << " =",
                       yystack_[(yynrhs) - (yyi + 1)]);
  }
#endif // YYDEBUG


#line 6 "src/Parser.y" // lalr1.cc:1167
} // acentric_lang
#line 1175 "C:/Users/a/Documents/programming/acentric/build/acentric_lang/Parser.cxx" // lalr1.cc:1167
#line 161 "src/Parser.y" // lalr1.cc:1168


void acentric_lang::Parser::error(const acentric_lang::Parser::location_type& l, const std::string& m)
{
    //throw acentric_lang::Parser::syntax_error(l, m);
}
