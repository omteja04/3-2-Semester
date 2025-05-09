// Program:
// Implementation of calculator using LEX and YACC
// LEX PART:
%
{
#include "y.tab.h"

#include <stdio.h>
    extern int yylval;
    %
}
% %
    [0 - 9] +
{
    yylval = atoi(yytext);
    return NUMBER;
}
[\t];
[\n] return 0;
.return yytext[0];
% %
  int yywrap() {
    return 1;
}
YACC PART:
    %
{
#include <stdio.h>
    int flag = 0;
    %
}
% token NUMBER % left '+' '-' % left '*' '/' '%' % left '(' ')' % %
  ArithmeticExpression: E {
    printf("\nResult=%d\n", $$);
    return 0;
};
E: E '+' E {
    $$ = $1 + $3;
}
| E '-' E {
    $$ = $1 - $3;
}
| E '*' E {
    $$ = $1 * $3;
}
| E '/' E {
    $$ = $1 / $3;
}
| E '%' E {
    $$ = $1 % $3;
}
| '(' E ')' {
    $$ = $2;
}
| NUMBER {
    $$ = $1;
};
% %
  void main() {
printf("\nEnter Any Arithmetic Expression which can have operations Addition, 
Subtraction, Multiplication, Divison, Modulus and Round brackets:\n"); 
yyparse(); 
if(flag==0) 
printf("\nEntered arithmetic expression is Valid\n\n");
}
void yyerror() {
    printf("\nEntered arithmetic expression is Invalid\n\n");
    flag = 1;
}
