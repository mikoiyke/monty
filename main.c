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
	unsigned int i, ln = 1;

	file = open_file(argv[1], "r", argc);

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
			/*data = opcode_value(monty_cmd[0], monty_cmd[1]);*/
			data = monty_cmd[1];
			exec_opc(&stack, monty_cmd[0], ln);
		}
		ln++;
	}

	free_stack(stack);
	fclose(file);
	return (0);
}
