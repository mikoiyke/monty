#include "monty.h"

/**
 * _div - divides the second top element of the stack by the top element
 * @stack: pointer to the top of stack
 * @line_number: current line number for the monty bytecode
 */
void _div(stack_t **stack, unsigned int line_number)
{
	stack_t *curr = *stack;
	int outcome;

	if (!curr || !(curr->next))
	{
		fprintf(stderr, "L%u: can't div, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	if (curr->n == 0)
	{
		fprintf(stderr, "L%u: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}

	outcome = curr->next->n / curr->n;
	curr->next->n = outcome;
	*stack = (*stack)->next;
	free(curr);
}
