#include "token.h"
#include "dynamic.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

DA *token_da = 0;

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
	token_da = create_DA(sizeof(token));
}

token *get_token_array(void)
{
	return get_data_DA(token_da);
}

void push_token_array(tokenType type, char *data)
{
	if (type == REJECTED)
	{
		return;
	}
	token tk;
	tk.type = type;
	if (type >= OP_RETURNS && type <= KW_CLASS)
	{
		tk.value = static_token_names[tk.type];
	}
	else
	{
		int len = strlen(data);
		char *value = 0;
		if (type == IDENTIFIER)
		{
			value = malloc(sizeof(char) * len + 13);
			sprintf(value, "IDENTIFIER(%s)", data);
		}
		else if (type == L_INTEGER)
		{
			value = malloc(sizeof(char) * len + 12);
			sprintf(value, "L_INTEGER(%s)", data);
		}
		else if (type == L_STRING)
		{
			value = malloc(sizeof(char) * len + 11);
			sprintf(value, "L_STRING(%s)", data);
		}
		tk.value = value;
	}
	pushback_DA(token_da, &tk);
}

void delete_token_array(void)
{
	token *arr = get_data_DA(token_da);
	for (unsigned int i = 0; i < get_size_DA(token_da); i++)
	{
		if (arr[i].type > KW_CLASS)
		{
			free(arr[i].value);
		}
	}
	delete_DA(token_da);
}

void print_token_array(void)
{
	token *arr = get_data_DA(token_da);
	for (unsigned int i = 0; i < get_size_DA(token_da); i++)
	{
		printf("%s ", arr[i].value);
		if (arr[i].type == OP_NEWLINE)
		{
			printf("\n");
		}
	}
}