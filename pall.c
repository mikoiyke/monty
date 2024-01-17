#include "monty.h"

/**
 * pall - prints all elements in the stack
 * @stack: Pointer to the top of stack.
 * @line_number:  Current line number for the monty bytecode.
 *
 * Return: Nothing.
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *curr = *stack;

	if (!curr)
	{
		fprintf(stderr, "L%u: Stack is empty.", line_number);
	}

	while (curr)
	{
		printf("%d\n", curr->n);
		curr = curr->next;
	}
}
