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
		if (type == IDENTIFIER)
		{
			tk.value = malloc(sizeof(char) * (len + 13));
			sprintf(tk.value, "IDENTIFIER(%s)", data);
		}
		else if (type == L_INTEGER_8)
		{
			tk.value = malloc(sizeof(char) * (len + 15));
			sprintf(tk.value, "L_INTEGER(%s, 8)", data);
		}
		else if (type == L_INTEGER_16)
		{
			tk.value = malloc(sizeof(char) * (len + 16));
			sprintf(tk.value, "L_INTEGER(%s, 16)", data);
		}
		else if (type == L_INTEGER_2)
		{
			tk.value = malloc(sizeof(char) * (len + 15));
			sprintf(tk.value, "L_INTEGER(%s, 2)", data);
		}
		else if (type == L_INTEGER_10)
		{
			tk.value = malloc(sizeof(char) * (len + 16));
			sprintf(tk.value, "L_INTEGER(%s, 10)", data);
		}
		else if (type == L_STRING)
		{
			tk.value = malloc(sizeof(char) * (len + 11));
			sprintf(tk.value, "L_STRING(%s)", data);
		}
		else if (type == INVALID)
		{
			tk.value = malloc(sizeof(char) * (len + 1));
			sprintf(tk.value, "%s", data);
		}
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

char print_token_array(void)
{
	token *arr = get_data_DA(token_da);
	for (unsigned int i = 0; i < get_size_DA(token_da); i++)
	{
		printf("%s ", arr[i].value);
		if (arr[i].type == OP_NEWLINE)
		{
			printf("\n");
		}
		else if (arr[i].type == INVALID)
		{
			printf("\n\"Invalid token encountered: %s\"\n", arr[i].value);
			return 1;
		}
	}
	return 0;
}