#include "monty.h"

/**
 * push_pall - prints all the values on the stack, starting from the top
 * @stack: pointer to the top of the stack
 * @line_number: line number of the opcode
 *
 * Return: void
 */
void push(stack_t **stack, unsigned int line_number)
{
    stack_t *new;
    

    new = malloc(sizeof(stack_t));
    if (!new)
    {
        fprintf(stderr, "Error: malloc failed\n");
        exit(EXIT_FAILURE);
    }

    new->n = line_number;
    new->prev = NULL;
    new->next = *stack;

    if (*stack)
        (*stack)->prev = new;
    *stack = new;
}

