#include "monty.h"

/**
 * nop - does nothing when called
 * @stack: Pointer to the top of stack.
 * @line_number:  Current line number for the monty bytecode.
 *
 * Return: Nothing.
 */
void nop(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
}
