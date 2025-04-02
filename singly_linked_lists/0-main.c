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
    list_t *head; /* Pointer to first node in list */
    list_t *new; /* Pointer to temporary new node */
    list_t hello = {"World", 5, NULL}; /* Initialise node with "World" */
    size_t n; /* Variable to store the number of elements in the list */

    head = &hello; /* Set the head of the list to point to 'hello' */
    new = malloc(sizeof(list_t)); /* Allocate memory for a new node*/
    if (new == NULL)
    {
        printf("Error\n"); /* Print Error if malloc fails */
        return (1);
    }
    /* Assign values to the 'new' node */
    new->str = strdup("Hello"); /* Duplicate the string */
    new->len = 5; /* Store the length of the string */
    new->next = head; /* Link the new node to the previous head */
    head = new; /* Update head to point to the new first node */
    
    n = print_list(head); /* Print the linked list */
    printf("-> %lu elements\n", n);

    printf("\n");
    free(new->str); /* Free the meory allocated for the first node's string */
    new->str = NULL; /* Set pointer to NULL to avoid dangling references */ 
    n = print_list(head); /* Print the linked list again after modifying the first node */
    printf("-> %lu elements\n", n);

    free(new); /* Free the memory allocated for the first node itself */
    return (0);
}
