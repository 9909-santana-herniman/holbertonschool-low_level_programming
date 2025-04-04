#include "lists.h"

/**
 * free_list - A function that frees a linked list.
 * @head: Pointer to first node in linked list.
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

		/* Free the string if it exists */
		if (temp->str != NULL)
		{
			free(temp->str); /* Free memory for the string */
		}
		free(temp); /* Free memory allocated for current node */
	}
	head = NULL; /* Set head to NULL after freeing all nodes */
}
