#include "monty.h"

/**
 * 
 */
char **strtoken(char *entry)
{
	int x = 0;
	char **each_word, *token = NULL;

	each_word = malloc(sizeof(char*) * 3);
	if (each_word == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	token = strtok(entry, "\t\n ");
	while (token)
	{
		each_word[x] = token;
		x++;
		token = strtok(NULL, "\t\n ");
	}

	return (each_word);
}