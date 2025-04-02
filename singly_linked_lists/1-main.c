#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    list_t *head; /* Pointer to the first node 'head' of the linked list */
    list_t *new; /* Pointer to 'new' node that will be added */
    list_t hello = {"World", 5, NULL}; /* Initialise a node with "World" */
    size_t n; /* Variable to store the number of elements in the list */

    head = &hello; /* Set the head of the list to point to 'hello' */
    new = malloc(sizeof(list_t)); /* Allocate memory for 'new' node */
    if (new == NULL)
    {
        printf("Error\n"); /* If malloc fails, print Error */
        return (1);
    }
    /* Assign values to 'new' node */
    new->str = strdup("Hello"); /* Duplicate the string "Hello" */
    new->len = 5; /* Store the length of the string */
    new->next = head; /* Link 'new' node to the previous head */
    head = new; /* Update head to point to the new first node */

    n = list_len(head); /* Get the number of elements in the linked list*/
    printf("-> %lu elements\n", n);
    free(new->str); /* Free the allocated memory */
    free(new);
    return (0);
}
