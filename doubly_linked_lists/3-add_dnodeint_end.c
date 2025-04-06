#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node to the end of the dlistint_t list.
 * @head: Double pointer to the head of the doubly linked list.
 * @n: Value for the new node.
 * Return: Address of the new element, otherwise NULL.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *temp_node;

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	/* Set data value for new node, and initialise it's next pointer */
	new_node->n = n;
	new_node->next = NULL;

	/* If the list is empty, set new_node as the head */
	if (*head == NULL)
	{
		/* If it's the only node, prev is NULL */
		new_node->prev = NULL;
		*head = new_node; /* Update head to point to new node */
		return (new_node); /* Return address of the new node */
	}

	/* Traverse the list to find the last node */
	temp_node = *head; /* Start from the head */
	while (temp_node->next != NULL)
	{
		temp_node = temp_node->next;
	}

	/* Add the new node at the end of the list */
	/* Point current last node's next to the new node */
	temp_node->next = new_node;
	new_node->prev = temp_node;

	return (new_node);
}
