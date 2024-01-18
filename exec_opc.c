#include "monty.h"

/**
 *
 */
void exec_opc(stack_t **stack, char *opc, unsigned int l)
{
	unsigned int i, length = 0;

	instruction_t op_fun[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop}
	};

	length = sizeof(op_fun) / sizeof(op_fun[0]);

	for (i = 0; i < length; i++)
	{
		if (strcmp(op_fun[i].opcode, opc) == 0)
		{
			op_fun[i].f(stack, l);
			break;
		}
	}

	if (i == length)
	{
		fprintf(stderr, "L%u: unknown instruction %s\n", l, opc);
		exit(EXIT_FAILURE);
	}
}