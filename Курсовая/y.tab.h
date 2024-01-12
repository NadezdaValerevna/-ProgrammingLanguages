/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    HALLAWAY = 258,                /* HALLAWAY  */
    LIVINGROOM = 259,              /* LIVINGROOM  */
    BEDROOM = 260,                 /* BEDROOM  */
    KITCHEN = 261,                 /* KITCHEN  */
    BATHROOM = 262,                /* BATHROOM  */
    PANTRY = 263,                  /* PANTRY  */
    LIGHT = 264,                   /* LIGHT  */
    WINDOW = 265,                  /* WINDOW  */
    DOOR = 266,                    /* DOOR  */
    HOOD = 267,                    /* HOOD  */
    MASSAGE = 268,                 /* MASSAGE  */
    MIXERTAP = 269,                /* MIXERTAP  */
    DMAGNETS = 270,                /* DMAGNETS  */
    LIVINGROOMWINDOW = 271,        /* LIVINGROOMWINDOW  */
    BEDROOMWINDOW = 272,           /* BEDROOMWINDOW  */
    WLIVINGROOMM = 273,            /* WLIVINGROOMM  */
    WBEDROOMM = 274,               /* WBEDROOMM  */
    MOVE = 275,                    /* MOVE  */
    GAS = 276,                     /* GAS  */
    WATER = 277,                   /* WATER  */
    LVLBATH = 278,                 /* LVLBATH  */
    VALUE = 279,                   /* VALUE  */
    IF = 280,                      /* IF  */
    ON = 281,                      /* ON  */
    AND = 282,                     /* AND  */
    OR = 283,                      /* OR  */
    OFF = 284,                     /* OFF  */
    CLOSE = 285,                   /* CLOSE  */
    OPEN = 286,                    /* OPEN  */
    SENT = 287                     /* SENT  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define HALLAWAY 258
#define LIVINGROOM 259
#define BEDROOM 260
#define KITCHEN 261
#define BATHROOM 262
#define PANTRY 263
#define LIGHT 264
#define WINDOW 265
#define DOOR 266
#define HOOD 267
#define MASSAGE 268
#define MIXERTAP 269
#define DMAGNETS 270
#define LIVINGROOMWINDOW 271
#define BEDROOMWINDOW 272
#define WLIVINGROOMM 273
#define WBEDROOMM 274
#define MOVE 275
#define GAS 276
#define WATER 277
#define LVLBATH 278
#define VALUE 279
#define IF 280
#define ON 281
#define AND 282
#define OR 283
#define OFF 284
#define CLOSE 285
#define OPEN 286
#define SENT 287

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
