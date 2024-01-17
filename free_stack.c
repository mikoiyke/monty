#include "monty.h"

/**
 * free_stack - free up the memory used up by the stack
 * @stack: Pointer to first element in stack.
 *
 * Return: Nothing.
 */
void free_stack(stack_t *stack)
{
	stack_t *prev = stack;

	while (prev)
	{
		stack = stack->next;
		free(prev);
		prev = stack;
	}
}
