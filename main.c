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
	char buffer[1024];
	int i;
	instruction_t op_fun[] = {
		{"push", push},
		{"pop", pop},
		{"pall", pall},
		{"pint", pint},
		{"nop", nop},
	};

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
		printf("%lu\n", sizeof(op_fun));
	}
	fclose(file);
	return (0);
}
