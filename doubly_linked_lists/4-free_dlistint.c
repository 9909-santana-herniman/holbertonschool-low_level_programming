#include "lists.h"

/**
 * free_dlistint - Frees a doubly linked list.
 * @head: Pointer to the head of the doubly linked list.
 */

void free_dlistint(dlistint_t *head)
{
	/* Use a temp pointer to store node while moving to next node */
	dlistint_t *temp_node;

	/* Traverse through the list */
	while (head != NULL)
	{
		/* Store current node in temp */
		temp_node = head;
		/* Move to the next node */
		head = head->next;
		/* Free current node */
		free(temp_node);
	}
}
