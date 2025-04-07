#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: Double pointer to the head of the doubly linked list.
 * @idx: Index where the new node should be added (starting from 0).
 * @n: Value for the new node.
 * Return: Address of the new node, otherwise NULL.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp;
	unsigned int current_index = 0;

	if (idx == 0) /* Handle insertion at beginning (index 0) */
		return (add_dnodeint(h, n));

	temp = *h; /* Traverse to find position just before idx */

	while (temp != NULL && current_index < idx - 1)
	{
		temp = temp->next;
		current_index++;
	}

	/* If idx is out of bounds or temp is NULL */
	if (temp == NULL || (temp->next == NULL && current_index + 1 < idx))
	{
		return (NULL);
	}
	/* Handle insertion at the end of the list */
	if (temp->next == NULL && current_index + 1 == idx)
		return (add_dnodeint_end(h, n));

	/* Allocate memory for new node */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	/* Initialise new node */
	new_node->n = n;
	new_node->next = temp->next; /* Points to current node at index */
	new_node->prev = temp; /* Points back to previous node */

	/* Update pointers */
	if (temp->next != NULL)
	{
		temp->next->prev = new_node;
		temp->next = new_node;
	}
	return (new_node);
}
