#include "monty.h"

int data = 0;

/**
 * push - pushes an element to the stack
 * @stack: Pointer to the top of stack.
 * @line_number:  Current line number for the monty bytecode.
 *
 * Return: Nothing.
 */
void push(stack_t **stack, unsigned int line_number)
{
	stack_t *new_node, *curr = *stack;

	if (data == 0)
		fprintf(stderr, "L%u: Invalid data.", line_number);

	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	new_node->n = data;

	new_node->prev = NULL;
	new_node->next = curr;
	if (curr)
		curr->prev = new_node;

	*stack = new_node;
}
