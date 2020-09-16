#include "monty.h"

/**
 *  
 */
void (*structure(char *str))(stack_t **stack, unsigned int line_number)
{
    int i = 0;
    instruction_t opcode[]=
    {
        {"push", push},
        /*{"pall", pall},*/
        {NULL, NULL}
    };
    while (opcode[i].opcode)
    {
        if (strcmp(str, opcode[i].opcode) == 0)
        {
            return (opcode[i].f);
        }
        i++;
    }
    return (NULL);
}