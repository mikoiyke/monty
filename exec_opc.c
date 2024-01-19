#include "monty.h"

/**
 * exec_opc - executes the opcodes
 * @stack: Pointer to stack.
 * @opc: The current opcode to be executed.
 * @l: The current line number.
 *
 * Return: Nothing.
 */
void exec_opc(stack_t **stack, char *opc, unsigned int l)
{
	unsigned int i, length = 0;

	instruction_t op_fun[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", add},
		{"nop", nop},
		{"sub", sub},
		{"div", _div}
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
