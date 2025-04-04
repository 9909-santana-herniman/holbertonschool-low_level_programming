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
    list_t *head; /* Declare a pointer to the head of the linked list */
    head = NULL; /* Initialise the head as empty (head points to NULL) */
    
    add_node_end(&head, "Bob"); /* Adds a node to the end of the list */
    add_node_end(&head, "&");
    add_node_end(&head, "Kris");
    add_node_end(&head, "love");
    add_node_end(&head, "asm");

    /* Print all nodes in the linked list */
    /* This function traverses the list and prints each nodes data */
    print_list(head);
    /* Free all nodes in the linked list */
    /* This function releases memory allocated for each node to */
    /* prevent memory leaks */
    free_list(head);
    /* After freeing all nodes, set head back to NULL to */
    /* indicate that the list is empty */
    head = NULL;

    return (0);
}
