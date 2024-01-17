#include "monty.h"

/**
 * pop - prints all the values on the stack,
 * starting from the top of the stack.
 * @stack: Pointer to the top of stack.
 * @line_number:  Current line number for the monty bytecode.
 *
 * Return: Nothing.
 */
void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *curr = *stack;

	while (curr)
	{
		printf("%d\n", curr->n);
		curr = curr->next;
	}
	printf("This is POP function on line %u.\n", line_number);
}
