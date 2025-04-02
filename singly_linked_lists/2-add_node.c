#include "lists.h"
#include <string.h>


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
 * add_node - A function that adds a new node at the beginning
 * of a list_t list.
 * @head: Pointer to the head of the list.
 * @str: String to be duplicated and stored in the new node.
 *
 * Return: The address of the new node, otherwise NULL
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
	name_node->len = _strlen(str);
	/* Set the name_node's 'next' to the previous head */
	name_node->next = *head;
	/* Change 'head' to point to recently created node */
	*head = name_node;

	return (name_node);
}

