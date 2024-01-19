#include "monty.h"

/**
 * sub - prints all the values on the stack,
 * starting from the top of the stack.
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
