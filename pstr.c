#include "monty.h"

/**
 * pstr - prints the starting at the top of the stack,
 * followed by a new line.
 * @stack: Pointer to the top of stack.
 * @line_number:  Current line number for the monty bytecode.
 *
 * Return: Nothing.
 */
void pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *curr = *stack;

	(void)line_number;
	while (curr && curr->n != 0)
	{
		putchar(curr->n);
		curr = curr->next;
	}
	putchar(10);
}
