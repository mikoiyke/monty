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
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	return (0);
}
