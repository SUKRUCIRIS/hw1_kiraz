#include "token.h"

const char *static_token_names[] = {
	"OP_RETURNS",
	"OP_EQUALS",
	"OP_ASSIGN",
	"OP_GT",
	"OP_LT",
	"OP_GE",
	"OP_LE",
	"OP_LPAREN",
	"OP_RPAREN",
	"OP_LBRACE",
	"OP_RBRACE",
	"OP_PLUS",
	"OP_MINUS",
	"OP_MULT",
	"OP_DIVF",
	"OP_COMMA",
	"OP_NEWLINE",
	"OP_COLON",
	"OP_SCOLON",
	"OP_DOT",
	"KW_IMPORT",
	"KW_FUNC",
	"KW_IF",
	"KW_WHILE",
	"KW_CLASS",
}; // op and kw tokens will get their values from here instead of getting separated values to use less ram

void init_token_array(void)
{
}

token *get_token_array(void)
{
	return 0;
}

void push_token_array(token *tk)
{
}

void delete_token_array(void)
{
}

void print_token_array(void)
{
}