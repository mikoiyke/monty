#include "monty.h"

/**
 * pint - prints value at the top of stack, followed by a new line
 * @stack: Pointer to the top of stack.
 * @line_number:  Current line number for the monty bytecode.
 *
 * Return: Nothing.
 */
void pint(stack_t **stack, unsigned int line_number)
{
	stack_t *curr = *stack;

	while (curr)
	{
		printf("%d\n", curr->n);
		curr = curr->next;
	}
	printf("This is PINT function on line %u.\n", line_number);
}
