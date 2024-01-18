#include "monty.h"

/**
 * main - Entry point.
 * @argc: Total number of command line argument.
 * @argv: Actual arguments passed to command line.
 *
 * Return: On success, 0.
 */
int main(int argc, char *argv[])
{
	FILE *file;
	char *monty_cmd[2], *token;
	stack_t *stack = NULL;
	char buffer[1024];
	unsigned int i, length, ln = 1;
	instruction_t op_fun[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop}
	};

	file = open_file(argv[1], "r", argc);

	length = sizeof(op_fun) / sizeof(op_fun[0]);
	while (fgets(buffer, sizeof(buffer), file))
	{
		i = 0;
		token = strtok(buffer, " \n");
		while (i < 2)
		{
			monty_cmd[i] = token;
			token = strtok(NULL, " \n");
			i++;
		}


		if (monty_cmd[0])
		{
			data = opcode_value(monty_cmd[0], monty_cmd[1]);

			for (i = 0; i < length; i++)
				if (strcmp(op_fun[i].opcode, monty_cmd[0]) == 0)
					op_fun[i].f(&stack, ln);
		}
		ln++;
	}

	free_stack(stack);
	fclose(file);
	return (0);
}
