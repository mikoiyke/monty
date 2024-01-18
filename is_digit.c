#include "monty.h"

/**
 * is_digit - check if character is digit (0 -9)
 * @str: The string to check for
 *
 * Return: On success, 1.
 * On error, 0 is returned.
 */
int is_digit(char *str)
{
	char *ch = str;

	if (!str)
		return (0);

	if (ch[0] == '-')
		ch++;

	while (*ch)
	{
		if (!(*ch >= '0' && *ch <= '9'))
			return (0);
		ch++;
	}
	return (1);
}
