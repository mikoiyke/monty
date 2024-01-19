#include "monty.h"

/**
 * mul - multiplies the top two elements of the stack.
 * @stack: Pointer to the top of stack.
 * @line_number:  Current line number for the monty bytecode.
 *
 * Return: Nothing.
 */
void mul(stack_t **stack, unsigned int line_number)
{
	stack_t *curr = *stack;
	int sum;

	if (!curr || !(curr->next))
	{
		fprintf(stderr, "L%u: can't mul, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	sum = curr->n * curr->next->n;
	curr->next->n = sum;
	*stack = (*stack)->next;
	(*stack)->prev = NULL;
	free(curr);
}
