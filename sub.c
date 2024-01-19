#include "monty.h"

/**
 * sub - subtracts the top element of the stack from the second top element.
 * @stack: Pointer to the top of stack.
 * @line_number:  Current line number for the monty bytecode.
 *
 * Return: Nothing.
 */
void sub(stack_t **stack, unsigned int line_number)
{
	stack_t *curr = *stack;
	int result;

	if (!curr || !(curr->next))
	{
		fprintf(stderr, "L%u: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	result = curr->next->n - curr->n;
	curr->next->n = result;
	*stack = (*stack)->next;
	free(curr);
}
