%{
#include "all_class_tokens.h"
%}

OP_RETURNS ->
OP_EQUALS ==
OP_ASSIGN =
OP_GT >
OP_LT <
OP_GE >=
OP_LE <=
OP_LPAREN \(
OP_RPAREN \)
OP_LBRACE \{
OP_RBRACE \}
OP_PLUS \+
OP_MINUS \-
OP_MULT \*
OP_DIVF \/
OP_COMMA ,
OP_NEWLINE \n
OP_COLON :
OP_SCOLON ;
OP_DOT \.

KW_IMPORT import
KW_FUNC func
KW_IF if
KW_WHILE while
KW_CLASS class

L_INTEGER_8 (-|\+)?0[0-7]+
L_INTEGER_16 (-|\+)?0[xX][0-9a-fA-F]+
L_INTEGER_2 (-|\+)?0[bB][01]+
L_INTEGER_10 (-|\+)?[0-9]+
L_STRING \"([^\\\"]|\\.)*\"
IDENTIFIER [_a-zA-Z][_a-zA-Z0-9]*
REJECTED [ \t]

INVALID .

%%

{OP_RETURNS} {constructor_OP_RETURNS();}
{OP_EQUALS} {constructor_OP_EQUALS();}
{OP_ASSIGN} {constructor_OP_ASSIGN();}
{OP_GT} {constructor_OP_GT();}
{OP_LT} {constructor_OP_LT();}
{OP_GE} {constructor_OP_GE();}
{OP_LE} {constructor_OP_LE();}
{OP_LPAREN} {constructor_OP_LPAREN();}
{OP_RPAREN} {constructor_OP_RPAREN();}
{OP_LBRACE} {constructor_OP_LBRACE();}
{OP_RBRACE} {constructor_OP_RBRACE();}
{OP_PLUS} {constructor_OP_PLUS();}
{OP_MINUS} {constructor_OP_MINUS();}
{OP_MULT} {constructor_OP_MULT();}
{OP_DIVF} {constructor_OP_DIVF();}
{OP_COMMA} {constructor_OP_COMMA();}
{OP_NEWLINE} {constructor_OP_NEWLINE();}
{OP_COLON} {constructor_OP_COLON();}
{OP_SCOLON} {constructor_OP_SCOLON();}
{OP_DOT} {constructor_OP_DOT();}

{KW_IMPORT} {constructor_KW_IMPORT();}
{KW_FUNC} {constructor_KW_FUNC();}
{KW_IF} {constructor_KW_IF();}
{KW_WHILE} {constructor_KW_WHILE();}
{KW_CLASS} {constructor_KW_CLASS();}

{L_INTEGER_8} {constructor_L_INTEGER_8(yytext);}
{L_INTEGER_16} {constructor_L_INTEGER_16(yytext);}
{L_INTEGER_2} {constructor_L_INTEGER_2(yytext);}
{L_INTEGER_10} {constructor_L_INTEGER_10(yytext);}
{L_STRING} {constructor_L_STRING(yytext);}
{IDENTIFIER} {constructor_IDENTIFIER(yytext);}
{REJECTED} {}

{INVALID} {constructor_INVALID(yytext); return 0;}

%%
