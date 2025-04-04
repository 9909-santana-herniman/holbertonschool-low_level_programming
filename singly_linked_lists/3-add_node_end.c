#include "lists.h"

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
	list_t *node, *temp;
	/* Allocate memory for the node */
	node = (list_t *)malloc(sizeof(list_t));
	/* Check if malloc fails */
	if (node == NULL)
	{
		return (NULL);
	}
	/* Duplicate string to avoid modifying the original */
	node->str = strdup(str);
	/* Free memory allocated */
	if (node->str == NULL)
	{
		free(node);
		return (NULL);
	}
	/* Set length of the string */
	node->len = _strlen(str);
	/* Set the node to the previous head */
	node->next = NULL;
	/* Need new temp node to equal head*/
	temp = *head;
	/* While temp->next is not equal to null */
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = node;
	return (node);
}
