#include "monty.h"
/**
 *push - adds to the stack
 *@stack:a pointer to the head of the stack
 *@line_number:data to be stored
 */

void push(m_stack_t **stack, unsigned int line_number)
{
    m_stack_t *new_node;

    /*Allocate memory for a new stack node*/
    ne_node = malloc(sizeof(m_stack_t));
    if (new_node == NULL)
    {
        fprintf(stderr, "Error: malloc failure\n");
        exit(EXIT_FAILURE);
    }
}