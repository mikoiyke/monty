#include "monty.h"

/**
 * swap - swaps an element to the stack
 * @stack: Pointer to the top of stack.
 * @line_number:  Current line number for the monty bytecode.
 *
 * Return: Nothing.
 */
void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *curr = *stack;
	int temp;

	if (!curr || !(curr->next))
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	temp = curr->n;
	curr->n = curr->next->n;
	curr->next->n = temp;
}
