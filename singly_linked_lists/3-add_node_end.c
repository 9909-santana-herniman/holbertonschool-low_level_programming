#include "lists.h"

/**
 * _strlen - Calulates the length of a string manually.
 * @s: The string whose length is to be counted.
 * Return: The length of the string.
 */
size_t _strlen(const char *s)
{
	size_t len = 0;

	while (s[len] != '\0') /* Loop until we reach '\0' */
	{
		len++;
	}
	return (len);
}

/**
 * add_node_end - A function that adds a new node at the end
 * of a list_t list.
 * @head: Pointer to the head of the list.
 * @str: String to be duplicated and stored in the new node.
 * Return: The address of the new node, otherwise NULL.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	/* Initialise a node */
	list_t *new_node, *temp_node;
	/* Allocate memory for the node */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL) /* Check if malloc fails */
	{
		return (NULL);
	}
	/* Duplicate string to avoid modifying the original */
	new_node->str = strdup(str);
	/* Free memory allocated */
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	/* Set length of the string */
	new_node->len = _strlen(str);
	/* Set the node to the previous head */
	new_node->next = NULL;
	/* Need new temp node to equal head*/
	if (*head == NULL) /* Check if the linked list is empty */
	{
		*head = new_node; /* Head points to new node */
		return (new_node);
	}
	temp_node = *head; /* Otherwise, traverse to the end of the list */
	while (temp_node->next != NULL) /* Move through each node */
	{
		temp_node = temp_node->next; /* Go to next node */
	}

	temp_node->next = new_node; /* Link the last node to the new node */
	return (new_node); /* Return address of the new node */
}
