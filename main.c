#include <stdio.h>
#include "base_class_token.h"
#include "kiraz-lexer.h"

int main(int argc, char **argv)
{
	if (argc < 2)
	{
		printf("Usage: %s <input_file>\n", argv[0]);
		return 1;
	}

	yyin = fopen(argv[1], "rb");
	if (!yyin)
	{
		printf("File can't be opened.\n");
		return 2;
	}

	int tok = 0;
	while ((tok = yylex()))
	{
		printf("%d\n", tok);
	}

	printf("\nToken enums:\n");
	print_all_tokens_enum();

	printf("\nToken strings:\n");
	if (print_all_tokens_string() != 0)
	{
		delete_all_tokens();
		return 3; // there is invalid token
	}

	delete_all_tokens();
	return 0;
}