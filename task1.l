%{
#include <stdio.h>
%}

%%
[0-9]+           printf("%s\n", yytext);
[a-zA-Z]+ 	 printf("%s\n", yytext);
%%
