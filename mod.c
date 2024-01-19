#include "monty.h"

/**
 * mod - computes the rest of the division of the second top
 * element by the top element of the stack.
 * @stack: Pointer to the top of stack.
 * @line_number:  Current line number for the monty bytecode.
 *
 * Return: Nothing.
 */
void add(stack_t **stack, unsigned int line_number)
{
	stack_t *curr = *stack;
	int res;

	if (!curr || !(curr->next))
	{
		fprintf(stderr, "L%u: can't mod, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	if (curr->n == 0)
	{
		fprintf(stderr, "L%u: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}

	res = curr->n % curr->next->n;
	curr->next->n = res;
	*stack = (*stack)->next;
	(*stack)->prev = NULL;
	free(curr);
}
