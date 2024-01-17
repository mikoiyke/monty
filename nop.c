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
	stack_t *curr = *stack;

	while (curr)
	{
		printf("%d\n", curr->n);
		curr = curr->next;
	}
	printf("This is NOP function on line %u.\n", line_number);
}
