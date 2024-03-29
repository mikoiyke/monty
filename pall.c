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

	(void)line_number;

	if (!curr)
		return;

	while (curr)
	{
		printf("%d\n", curr->n);
		curr = curr->next;
	}
}
