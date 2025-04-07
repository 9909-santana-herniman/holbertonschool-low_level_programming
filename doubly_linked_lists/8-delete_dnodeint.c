#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node at a given index in a dlistint_t
 * list.
 * @head: Double pointer to the head of the doubly linked list.
 * @index: Index of the node to delete (starting from 0).
 * Return: 1 if successful, otherwise -1 if failed.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int current_index = 0;

	if (*head == NULL || head == NULL) /* Check if list is empty */
	{
		return (-1);
	}

	if (index == 0) /* Handle deletion at index 0 (head node) */
	{
		*head = temp->next; /* Move head to next node */
		if (*head != NULL)
		{
			(*head)->prev = NULL; /* Update prev of new head */
		}
		free(temp); /* Free memory of old head */
		return (1);
	}
	/* Traverse to find the node at index */
	while (temp != NULL && current_index < index)
	{
		temp = temp->next;
		current_index++;
	}
	/* Check if index is out of bounds */
	if (temp == NULL)
		return (1);

	/* Update pointers to remove temp from the list */
	if (temp->next != NULL)
		temp->next->prev = temp->prev;
	if (temp->prev != NULL)
		temp->prev->next = temp->next;

	free(temp); /* Free memory of deleted node */
	return (1);
}
