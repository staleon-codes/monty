#include "monty.h"

/**
 * free_stack - frees a stack_t list and so on
 * @stack: pointer to the top of the stack
 */
void free_stack(stack_t *stack)
{
	stack_t *current;

	while (stack != NULL)
	{
		current = stack;
		stack = stack->next;
		free(current);
	}
}
