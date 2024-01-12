%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
extern int line, collumn;
int yylex();
char yywrap() {
    return 1;
}
extern FILE *yyin, *yyout;
FILE *Kurs_in;
void yyerror(char *s) {
printf("error:%s in line %d and column %d\n", s, line, collumn);
}

/* Sensors */
int senshallaway = 1;
int senslivingroom = 2;
int sensbedroom = 3;
int senskitchen = 3;
int sensbathroom = 0;
int senspantry = 2;
int magnestconnected = 1;
int wlivingroomm = 1;
int wbedroomm = 0;
int sensgas = 1;
int sensbathlvl=0;
int waterleakage = 0; /* датчик утечки воды */

int lvlbath = 0;

/* Device status */
int shallaway = 0;
int slivingroom = 0;
int sbedroom = 0;
int skitchen = 0;
int sbathroom = 0;
int spantry = 0;
int livingroomwindow = 0;
int bedroomwindow = 0;
int kitchenhood = 0;
int massagesent = 0;
int mixertap = 0; /* кран в ванной */
int globysl = 0;
int livingroomheater = 0;

%}

%token HALLAWAY LIVINGROOM BEDROOM KITCHEN BATHROOM 
PANTRY LIGHT WINDOW DOOR HOOD MASSAGE MIXERTAP DMAGNETS 
LIVINGROOMWINDOW BEDROOMWINDOW WLIVINGROOMM WBEDROOMM 
MOVE GAS WATER LVLBATH VALUE IF ON AND OR OFF CLOSE OPEN SENT


%%
commands:
        /*empty*/
        |
        commands command

command:
        IF '(' packysl ')' '{'  actions  '}' 

actions:
        action andaction
        |
        action
        
andaction:
        AND actions
        
        
action:
        room device '=' switch {
            if (globysl==1) {
                if ($2==DOOR) {
                    if ($4==OPEN) {
                        magnestconnected = 1;
                    }
                    if ($4==CLOSE) {    
                        magnestconnected = 0;
                    }
                }
                if ($2==LIVINGROOMWINDOW) {
                    if ($4==OPEN) {
                        if ($1==LIVINGROOM) { 
                            livingroomwindow = 1;
                        }
                    } else {
                        if ($1==LIVINGROOM) { 
                            livingroomwindow = 0;
                        }
                    }
                } else if ($2==BEDROOMWINDOW) {
                    if ($4==OPEN) {
                        if ($1==BEDROOM) { 
                            bedroomwindow = 1;
                        }
                    } else {
                        if ($1==BEDROOM) { 
                            bedroomwindow = 0;
                        }
                    }
                }
                if ($2==LIGHT) {
                    if ($4==ON) {
                            if ($1==HALLAWAY) {
                                shallaway=1;
                            } else if ($1==LIVINGROOM) {
                                slivingroom=1;
                            } else if ($1==BEDROOM) {
                                sbedroom = 1;
                            } else if ($1==KITCHEN) {
                                skitchen = 1;
                            } else if ($1==BATHROOM) {
                                sbathroom = 1;
                            } else if ($1==PANTRY) {
                                spantry = 1;
                            }
                    }
                }
                if ($2==KITCHEN) {
                    if ($4==ON) {
                        kitchenhood = 1;
                    }
                }
                if ($1==BATHROOM) {
                    if ($2==MASSAGE) {
                        if ($4==SENT){
                            massagesent = 1;
                        }
                    }
                    if ($2==MIXERTAP) {
                        if ($4==ON) {
                            mixertap = 1;
                        }
                    }
                }
            }
        }
    
packysl:
        ysl orysl {globysl=0; if (($1==1) || ($2==1)) {globysl=1;}}
        |
        ysl andysl {globysl=0; if  (($1==1) && ($2==1)) {globysl=1;}}
        |
        ysl {globysl=0; if  ($1==1) {$$=1; globysl=1;}}
        |
        ;
andysl:
        AND packysl {$$=$2;}
        
orysl:
        OR packysl {$$=$2;}
        
ysl:
        sensor room '<' VALUE {
            if ($1==MOVE) {
                if ($2==HALLAWAY) {
                    if (senshallaway < $4) { 
                        $$=1;
                    }
                }
                else if ($2==LIVINGROOM) {
                    if (senslivingroom < $4) {
                        $$=1;
                    }
                }
                else if ($2==BEDROOM) {
                    if (sensbedroom < $4) {
                        $$=1;
                    }
                }
                else if ($2==KITCHEN) {
                    if (senskitchen < $4) {
                        $$=1;
                    }
                }
                else if ($2==BATHROOM) {
                    if (sensbathroom < $4) {
                        $$=1;
                    }
                }
                else if ($2==PANTRY) {
                    if (senspantry < $4) {
                        $$=1;
                    }
                }
            }
        }
        |
        sensor room '=' VALUE {
            if ($1==WLIVINGROOMM) {
                if (wlivingroomm == 2 || wlivingroomm == 4 || wlivingroomm == 9) {
                        $$=1;
                    }
            } else if ($1==WBEDROOMM) {
                if (wbedroomm == 2 || wbedroomm == 4 || wbedroomm == 9) {
                        $$=1;
                    }
                }
            if ($1==WATER) {
                if ($2==BATHROOM) {
                    if ($4==1) {
                        if (waterleakage == $4) {
                            $$=1;
                        }
                    }
                }
            }
            if ($1==LVLBATH) {
                if ($2==BATHROOM) {
                    if (lvlbath = sensbathlvl) {
                        $$=1;
                    }
                }
            }
        }
        |
        sensor room '>' VALUE {
            if ($1==GAS) {
                if ($2==KITCHEN) {
                    if (sensgas > $4) {
                        $$=1;
                    }
                }
            }
        }

device:
        LIGHT
        |
        DOOR
        |
        WINDOW
        |
        LIVINGROOMWINDOW
        |
        BEDROOMWINDOW
        |
        HOOD
        |
        MASSAGE
        |
        MIXERTAP
        
sensor:
        MOVE
        |
        DMAGNETS
        |
        WLIVINGROOMM
        |
        WBEDROOMM
        |
        GAS
        |
        WATER
        |
        LVLBATH
        
room:
        HALLAWAY
        |
        LIVINGROOM
        |
        BEDROOM
        |
        KITCHEN
        |
        BATHROOM
        |
        PANTRY
        
switch:
        ON
        |
        OFF
        |
        CLOSE
        |
        OPEN
        |
        SENT

andysl:
        '&' packysl {$$=$2;}
        
orysl:
        '|' packysl {$$=$2;}
        
%%
void readsensors(){
    fscanf(Kurs_in,"температура в гостинной = %d\n",&wlivingroomm);
    fscanf(Kurs_in,"температура в спальне = %d\n",&wbedroomm);
    fscanf(Kurs_in,"свет в прихожей =  %d\n",&senshallaway);
    fscanf(Kurs_in,"свет в гостинной =  %d\n",&senslivingroom);
    fscanf(Kurs_in,"свет в спальне =  %d\n",&sensbedroom);
    fscanf(Kurs_in,"свет на кухне =  %d\n",&senskitchen);
    fscanf(Kurs_in,"свет в ванной =  %d\n",&sensbathroom);
    fscanf(Kurs_in,"свет в кладовке =  %d\n",&senspantry);
    fscanf(Kurs_in,"Дверь в прихожую = %d\n",&magnestconnected);
    fscanf(Kurs_in,"Газ на кухне = %d\n",&kitchenhood);
    fscanf(Kurs_in,"Кран в ванной = %d\n",&waterleakage);
    fscanf(Kurs_in,"Вода в ванной = %d\n",&sensbathlvl);
    fscanf(Kurs_in,"---\n");
}

void printresoners() {
        if (shallaway==1) {
            fprintf(yyout, "Свет в прихожей включен\n");
        } else {
           fprintf(yyout, "Свет в прихожей выключен\n");
        }
        if (slivingroom==1) {
            fprintf(yyout, "Свет в гостинной включен\n");
        } else {
            fprintf(yyout, "Свет в гостинной выключен\n");
        }
        if (sbedroom==1) {
            fprintf(yyout, "Свет в спальне включен\n");
        } else {
            fprintf(yyout, "Свет в спальне выключен\n");
        }
        if (skitchen==1) {
            fprintf(yyout, "Свет на кухне включен\n");
        } else {
            fprintf(yyout, "Свет на кухне выключен\n");
        }
        if (sbathroom==1) {
            fprintf(yyout, "Свет в ванной включен\n");
        } else {
            fprintf(yyout, "Свет в ванной выключен\n");
        }
        if (spantry==1) {
            fprintf(yyout, "Свет в кладовке включен\n");
        } else {
            fprintf(yyout, "Свет в кладовке выключен\n");
        }
        if (magnestconnected == 1) {
            fprintf(yyout, "Дверь в прихожую закрыта\n");
        } else {
            fprintf(yyout, "Дверь в прихожую открыта\n");
        }
        if (livingroomwindow == 1) {
            fprintf(yyout, "Окно в гостинной открыто\n");
        } else {
            fprintf(yyout, "Окно в гостинной закрыто\n");
        } 
        if (bedroomwindow == 1) {
            fprintf(yyout, "Окно в спальне открыто\n");
        } else {
            fprintf(yyout, "Окно в спальне закрыто\n");
        }
        if (kitchenhood == 0 && sensgas == 0) {
            fprintf(yyout, "Газ и вытяжка отключены \n");
        } else if (kitchenhood == 0 && sensgas == 1) {
            fprintf(yyout, "Газ обнаружен, вытяжка отключена\n");
        } else if (kitchenhood == 1 && sensgas == 0) {
            fprintf(yyout, "Газа нет, вытяжка включена\n");
        } else if (kitchenhood == 1 && sensgas == 1) {
            fprintf(yyout, "Газ и вытяжка включены\n");
        }
        if (lvlbath == sensbathlvl && mixertap == 1) {
            fprintf(yyout, "Ванна полная, кран отключается\n");
        } else if (lvlbath == sensbathlvl && mixertap == 0) {
        }
        if (lvlbath < sensbathlvl && mixertap == 1) {
            fprintf(yyout, "Ванна наполняется\n");
        } else if (lvlbath < sensbathlvl && mixertap == 0) {
            fprintf(yyout, "Сейчас ванна будет наполняться\n");
        }
        if (lvlbath > sensbathlvl && mixertap == 1) {
            fprintf(yyout, "Ванна полная но кран включен, выключаем.\n");
        } else if (lvlbath > sensbathlvl && mixertap == 1) {
            fprintf(yyout, "Ванна полная кран выключен\n");
        }
        if (waterleakage == 0 && massagesent == 0) {
            fprintf(yyout, "Утечки воды нет\n");
        } else if (waterleakage == 1 && massagesent == 0) {
            fprintf(yyout, "Утечка есть, сообщение о ней сейчас будет отправленно\n");
            massagesent = 1;
        } else if (waterleakage == 0 && massagesent == 1) {
            fprintf(yyout, "Утечки нет, но сообщение случайно отправилось\n");
            massagesent = 0;
        } else if (waterleakage == 1 && massagesent == 1) {
            fprintf(yyout, "Утечка есть, сообщение уже отправленно\n");
        }
        fprintf(yyout, "---конец отчета----\n");
}

int main() {
    Kurs_in = fopen("dom_in.txt", "r");
    if (Kurs_in==NULL) {
        printf("Не могу открыть файл\n");
    }
    yyin = fopen("dom_sc.txt", "r");
    yyout = fopen("dom_out.txt", "w");
    
    while (!feof(Kurs_in)) {
        rewind(yyin);
        readsensors();
        yyparse();
        printresoners();

    }
    fclose(Kurs_in);
    fclose(yyin);
    fclose(yyout);
    return 0;
}

