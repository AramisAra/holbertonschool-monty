#include "monty.c"

/**
 * pall - prints all the values on the stack, starting from the top
 * @stack: pointer to the top of the stack
 * @line_number: line number of the opcode
 * 
 * Return: void
 */
void swap(stack_t **stack, unsigned int line_number)
{
    stack_t *first = *stack;
    stack_t *second = *stack;

    if (!*stack || !stack || !(*first)->next)
    {
        fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
        exit(EXIT_FAILURE);
    }

    first = first->next;
    first->prev = NULL;

    second->next = first->next;
    first->next = second;
    (first->next)->prev = first;

    *stack = first;

}