#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the 'nth' node of a dlistint_t
 * linked list.
 * @head: Pointer to the head of the doubly linked list.
 * @index: Index of the node, starting from 0.
 * Return: Pointer to the 'nth' node, or NULL.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int current_index = 0;

	/* Travers through the list */
	while (head != NULL)
	{
		/* Check if current index matches */
		if (current_index == index)
		{
			return (head);
		}
		head = head->next; /* Move to the next node */
		current_index++; /* Increment index count */
	}
	/* If node doesn't exist */
	return (NULL);
}
