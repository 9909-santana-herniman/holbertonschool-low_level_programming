#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>

/* Data Structure */
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */

typedef struct list_s
{
	char *str; /* Pointer to a string (character array) */
	unsigned int len; /* This holds the length of the string */
	struct list_s *next; /* Pointer to the next node in the linked list */
} list_t; /* Defines a data type called list_t */

/* Function Prototypes */
/* Prints all the elements */
size_t print_list(const list_t *h);

/* Returns a number of elements linked */
size_t list_len(const list_t *h);

/* Adds a new node at the beginning of a list_t list*/
list_t *add_node(list_t **head, const char *str);

/* Adds a new node at the end of a list_t list */
list_t *add_node_end(list_t **head, const char *str);

/* Frees a list_t list */
void free_list(list_t *head);

/* Helper Functions */
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

#endif
