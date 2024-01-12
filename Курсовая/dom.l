%{
#include <stdlib.h>
#include "y.tab.h"
#include <string.h>

int line=1;
int collumn=0;
%}

%%
hallaway {collumn+=strlen(yytext); yylval = HALLAWAY; return HALLAWAY; }
livingroom {collumn+=strlen(yytext); yylval = LIVINGROOM; return LIVINGROOM; }
bedroom {collumn+=strlen(yytext); yylval = BEDROOM; return BEDROOM; }
kitchen {collumn+=strlen(yytext); yylval = KITCHEN; return KITCHEN; }
bathroom {collumn+=strlen(yytext); yylval = BATHROOM; return BATHROOM; }
pantry {collumn+=strlen(yytext); yylval = PANTRY; return PANTRY; }

light {collumn+=strlen(yytext); yylval = LIGHT; return LIGHT; }
door {collumn+=strlen(yytext); yylval = DOOR; return DOOR; }
window {collumn+=strlen(yytext); yylval = WINDOW; return WINDOW; }
livingroomwindow {collumn+=strlen(yytext); yylval = LIVINGROOMWINDOW; return 
LIVINGROOMWINDOW; }
bedroomwindow {collumn+=strlen(yytext); yylval = BEDROOMWINDOW; return 
BEDROOMWINDOW; }
hood {collumn+=strlen(yytext); yylval = HOOD; return HOOD; }
massage {collumn+=strlen(yytext); yylval = MASSAGE; return MASSAGE; }
mixertap {collumn+=strlen(yytext); yylval = MIXERTAP; return MIXERTAP; }

move {collumn+=strlen(yytext); yylval = MOVE; return MOVE; }
dmagnets {collumn+=strlen(yytext); yylval = DMAGNETS; return DMAGNETS; }
wlivingroomm {collumn+=strlen(yytext); yylval = WLIVINGROOMM; return 
WLIVINGROOMM; }
wbedroomm {collumn+=strlen(yytext); yylval = WBEDROOMM; return WBEDROOMM; }
gas {collumn+=strlen(yytext); yylval = GAS; return GAS; }
waterleakage {collumn+=strlen(yytext); yylval = WATER; return WATER; }
lvlbath {collumn+=strlen(yytext); yylval = LVLBATH; return LVLBATH; }

[0-9]+ {collumn+=strlen(yytext); yylval = atoi(yytext); return VALUE; }
on {collumn+=strlen(yytext); yylval=ON;return ON; }
off {collumn+=strlen(yytext); yylval=OFF;return OFF; }
close {collumn+=strlen(yytext); yylval=CLOSE;return CLOSE; }
open {collumn+=strlen(yytext); yylval=OPEN;return OPEN; }
sent {collumn+=strlen(yytext); yylval=SENT;return SENT; }
and {collumn+=strlen(yytext); yylval=AND;return AND; }
or {collumn+=strlen(yytext); yylval=OR;return OR; }
if {collumn+=strlen(yytext); yylval=IF;return IF; }

[ \t] {collumn+=strlen(yytext);}/*do nothing*/
[\n] {collumn=0; line++;}

.   {collumn+=strlen(yytext);return yytext[0];};
%%
