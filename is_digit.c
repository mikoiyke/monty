#include "monty.h"

/**
 * is_digit - check if character is digit (0 -9)
 * @c: The character to check for
 *
 * Return: On success, 1.
 * On error, 0 is returned.
 */
int is_digit(char *str)
{
	char *ch = str;
	
	if (!str)
		return 0;

	while (*ch)
	{
		if (*ch >= '0' && *ch <= '9')
			return (1);
		ch++;
	}

	return (0);
}
