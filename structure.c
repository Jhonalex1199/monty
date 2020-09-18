#include "monty.h"
EXTERN;

/**
 * check_instruction - check for instruction
 * @command: given command
 * Return: match fucntion
 */
void (*check_instruction(char *command))(stack_t**, unsigned int)
{
	instruction_t instructions[] = {
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"nop", nop},
		{"add", add},
		{NULL, NULL}
	};
	int i = 0;

	while (instructions[i].opcode)
	{
		if (!strcmp(instructions[i].opcode, command))
			return (instructions[i].f);
		i++;
	}
	return (NULL);
}
