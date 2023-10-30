#include "base_class_token.h"
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

struct token
{
	void *owner_class; // pointer to the owner
	tokenType type;	   // owner type
	char *value;	   // this will store the string
};

token *constructor_token(tokenType type, void *owner, char *data)
{
	if (token_da == 0)
	{
		token_da = create_DA(sizeof(token *));
	}
	token *tk = malloc(sizeof(token));
	tk->type = type;
	tk->owner_class = owner;
	if (type >= E_OP_RETURNS && type <= E_KW_CLASS)
	{
		tk->value = (char *)static_token_names[tk->type];
	}
	else
	{
		int len = strlen(data);
		if (type == E_IDENTIFIER)
		{
			tk->value = malloc(sizeof(char) * (len + 13));
			sprintf(tk->value, "IDENTIFIER(%s)", data);
		}
		else if (type == E_L_INTEGER_8)
		{
			tk->value = malloc(sizeof(char) * (len + 15));
			sprintf(tk->value, "L_INTEGER(%s, 8)", data);
		}
		else if (type == E_L_INTEGER_16)
		{
			tk->value = malloc(sizeof(char) * (len + 16));
			sprintf(tk->value, "L_INTEGER(%s, 16)", data);
		}
		else if (type == E_L_INTEGER_2)
		{
			tk->value = malloc(sizeof(char) * (len + 15));
			sprintf(tk->value, "L_INTEGER(%s, 2)", data);
		}
		else if (type == E_L_INTEGER_10)
		{
			tk->value = malloc(sizeof(char) * (len + 16));
			sprintf(tk->value, "L_INTEGER(%s, 10)", data);
		}
		else if (type == E_L_STRING)
		{
			tk->value = malloc(sizeof(char) * (len + 11));
			sprintf(tk->value, "L_STRING(%s)", data);
		}
		else if (type == E_INVALID)
		{
			tk->value = malloc(sizeof(char) * (len + 1));
			sprintf(tk->value, "%s", data);
		}
	}
	pushback_DA(token_da, &tk);
	return tk;
}

void deconstructor_token(token *tk)
{
	unsigned int index = get_index_DA(token_da, &tk);
	if (index != UINT_MAX)
	{
		remove_DA(token_da, index);
	}
	if (tk->type > E_KW_CLASS)
	{
		free(tk->value);
	}
	free(tk->owner_class);
	free(tk);
}

char print_all_tokens_string(void)
{
	printf("\n");
	token **arr = get_data_DA(token_da);
	for (unsigned int i = 0; i < get_size_DA(token_da); i++)
	{
		printf("%s ", arr[i]->value);
		if (arr[i]->type == E_OP_NEWLINE)
		{
			printf("\n");
		}
		else if (arr[i]->type == E_INVALID)
		{
			printf("\n\"Invalid token encountered: %s\"\n", arr[i]->value);
			printf("\n");
			return 1;
		}
	}
	printf("\n");
	return 0;
}

void print_all_tokens_enum(void)
{
	printf("\n");
	token **arr = get_data_DA(token_da);
	for (unsigned int i = 0; i < get_size_DA(token_da); i++)
	{
		printf("%d ", arr[i]->type);
		if (arr[i]->type == E_OP_NEWLINE)
		{
			printf("\n");
		}
	}
	printf("\n");
}

void delete_all_tokens(void)
{
	token **arr = get_data_DA(token_da);
	while (get_size_DA(token_da) > 0)
	{
		arr = get_data_DA(token_da);
		deconstructor_token(arr[0]);
	}
	delete_DA(token_da);
	token_da = 0;
}