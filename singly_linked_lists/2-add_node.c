#include "lists.h"
#include <string.h>

/**
 * add_node - A function that adds a new node at the beginning
 * of a list_t list.
 * @head: Pointer to a pointer of type list_t. Represents the
 * address of the head pointer.
 * @str: Constant character pointer. Represents a string that
 * will be stored in the 'new' node being added to the list.
 *
 * Description: Designed to add a new node to a linked list.
 * It creates a new node with the string str.
 * Updates the 'next' pointer of this 'new' node to point to
 * the current head of the list. Modifies the 'head' pointer
 * so that it points to this newly created node.
 *
 * Return: The address of the new element, otherwise NULL
 * if it failed.
 */

list_t *add_node(list_t **head, const char *str)
{
	/* Initialised a node called 'name_node' */
	list_t *name_node;
	/* Allocate memory for name_node */
	name_node = (list_t *)malloc(sizeof(list_t));
	if (name_node == NULL)
	{
		return (NULL); /* If malloc fails, return NULL */
	}

	/* Duplicate string to avoid modifying the original */
	name_node->str = strdup(str);
	if (name_node->str == NULL)
	{
		free(name_node); /* Free memory allocated for the node */
		return (NULL);
	}
	/* Set the length of the string */
	name_node->len = strlen(str);
	/* Set the name_node's 'next' to the previous head */
	name_node->next = *head;
	/* Change 'head' to point to recently created node */
	*head = name_node;

	return (name_node);
}
