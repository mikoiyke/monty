#include "monty.h"

/**
 * open_file - opens a file for reading
 * @file: Name of file to be read.
 * @mode: Describes the mode in which to read the given file.
 * @argc: Number of arguments passed to the command line.
 *
 * Return: Pointer to file created.
 */
FILE *open_file(char *file, char *mode, int argc)
{
	FILE *fp;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	fp = fopen(file, mode);
	if (!fp)
	{
		fprintf(stderr, "Error: Can't open file %s\n", file);
		exit(EXIT_FAILURE);
	}

	return (fp);
}
