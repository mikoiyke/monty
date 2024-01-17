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
	char *opcodes[5] = { "push", "pop", "pall", "pint", "nop" };
	char buffer[1024];
	int i;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	file = fopen(argv[1], "r");
	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	while (fgets(buffer, sizeof(buffer), file))
	{
		i = 0;
		token = strtok(buffer, " ");
		while (i < 2)
		{
			monty_cmd[i] = token;
			token = strtok(NULL, " ");
			i++;
		}
		i = 0;
		while (i < 2) /* For testing purposes */
		{
			printf("monty_cmd[%d] = %s\n", i, monty_cmd[i]);
			i++;
		}
	}
	fclose(file);
	return (0);
}
