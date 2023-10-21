%{
#include "token.h"
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

L_INTEGER (0(x|b)?)?[0-9]+
L_STRING \"([^\\\"]|\\.)*\"
IDENTIFIER [_a-zA-Z][_a-zA-Z0-9]*
REJECTED [ /t]

%%

{OP_RETURNS} {push_token_array(OP_RETURNS, yytext);}
{OP_EQUALS} {push_token_array(OP_EQUALS, yytext);}
{OP_ASSIGN} {push_token_array(OP_ASSIGN, yytext);}
{OP_GT} {push_token_array(OP_GT, yytext);}
{OP_LT} {push_token_array(OP_LT, yytext);}
{OP_GE} {push_token_array(OP_GE, yytext);}
{OP_LE} {push_token_array(OP_LE, yytext);}
{OP_LPAREN} {push_token_array(OP_LPAREN, yytext);}
{OP_RPAREN} {push_token_array(OP_RPAREN, yytext);}
{OP_LBRACE} {push_token_array(OP_LBRACE, yytext);}
{OP_RBRACE} {push_token_array(OP_RBRACE, yytext);}
{OP_PLUS} {push_token_array(OP_PLUS, yytext);}
{OP_MINUS} {push_token_array(OP_MINUS, yytext);}
{OP_MULT} {push_token_array(OP_MULT, yytext);}
{OP_DIVF} {push_token_array(OP_DIVF, yytext);}
{OP_COMMA} {push_token_array(OP_COMMA, yytext);}
{OP_NEWLINE} {push_token_array(OP_NEWLINE, yytext);}
{OP_COLON} {push_token_array(OP_COLON, yytext);}
{OP_SCOLON} {push_token_array(OP_SCOLON, yytext);}
{OP_DOT} {push_token_array(OP_DOT, yytext);}

{KW_IMPORT} {push_token_array(KW_IMPORT, yytext);}
{KW_FUNC} {push_token_array(KW_FUNC, yytext);}
{KW_IF} {push_token_array(KW_IF, yytext);}
{KW_WHILE} {push_token_array(KW_WHILE, yytext);}
{KW_CLASS} {push_token_array(KW_CLASS, yytext);}

{L_INTEGER} {push_token_array(L_INTEGER, yytext);}
{L_STRING} {push_token_array(L_STRING, yytext);}
{IDENTIFIER} {push_token_array(IDENTIFIER, yytext);}
{REJECTED} {push_token_array(REJECTED, yytext);}

%%
