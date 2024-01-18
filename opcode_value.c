#include "monty.h"

/**
 * opcode_value - Updates the global variable 'data' after
 * atoi() conversion
 * @value: The current value after the opcode.
 *
 * Return: If value is valid, returns the converted value
 * from string to integer. Otherwise, return -1.
 */
int opcode_value(char *value)
{
	if ((strcmp(value, "0") != 0) && (atoi(value) == 0))
		return (-1);

	return (atoi(value));
}
