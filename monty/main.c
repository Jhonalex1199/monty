#include "monty.h"

void main(int argc, char **argv)
{
	FILE *fd;
	char *entry = NULL, **token;
	void (*funct)(stack_t, unsigned int);
	ssize_t numlines = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	fd = fopen(argv[1], "r");
	if(fd == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	while (getline(&entry, &numlines, fd) != EOF)
	{
		token = strtoken(entry);
		funct = structure(token[0]);
		printf("%s %s\n", token[0], token[1]);
	}
}