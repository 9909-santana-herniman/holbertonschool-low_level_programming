#include "lists.h"

/**
 * free_list -
 * @head:
 */

void free_list(list_t *head)
{
	/* Initialise two pointers to nodes */
	list_t *current, *temp;

	current = head; /* Start with the head of the linked list */

	while (current != NULL) /* Loop until all nodes are freed */
	{
		temp = current; /* Store reference to current node */
		current = current->next; /* Move to next node in the list */
		free(temp); /* Free memory allocated for current node */
	}
}
