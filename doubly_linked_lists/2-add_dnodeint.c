#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list.
 * @head: Double pointer to the head of the doubly linked list.
 * @n: Value for the new node.
 * Return: Address of the new element, otherwise NULL.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	/* Inititalise the new node */
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	/* Update the current head's prev pointer, it it exists */
	if (*head != NULL)
	{
		(*head)->prev = new_node;
	}
	/* Update head to point ot the new node */
	*head = new_node;

	return (new_node);

}
