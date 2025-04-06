#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head; /* Pointer to head */
    dlistint_t *new; /* Pointer to new node */
    dlistint_t hello = {8, NULL, NULL}; /*Initialise a node with value 8 */
    size_t n; /* Variable to store the number elements in the list */

    head = &hello; /* Set the head of the list to point to 'hello' */
    new = malloc(sizeof(dlistint_t)); /* Allocate memory for a new node */
    if (new == NULL) /* Check if malloc failed */
    {
        dprintf(2, "Error: Can't malloc\n");
        return (EXIT_FAILURE);
    }
    /* Assign values and linke the new node to the existing node */
    new->n = 9; /* Assign data value to the new node */
    head->prev = new; /* Set prev node to new node */
    new->next = head; /* Link new node to the exisiting node as its next */
    new->prev = NULL; /* As new is now the first node, its prev should be NULL */
    head = new; /* Update head to point to the new first node */

    n = print_dlistint(head); /* Print the doubly linked list */
    printf("-> %lu elements\n", n);
    free(new); /* Free the memory allocated for the new node */
    return (EXIT_SUCCESS);
}
