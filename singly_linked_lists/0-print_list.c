#include "lists.h"
#include <stdio.h>

/**
 * print_list - A function that prints all the elements of a list_t list.
 * @h: Pointer to 'head' node of list.
 *
 * Description: This function traverses through a singly linked list and
 * prints the string and length stored in each node. If a node's string is
 * NULL, it prints "(nil)" instead. It also counts the total number of
 * nodes in the list and returns the count.
 *
 * Return: Number of nodes printed.
 */

size_t print_list(const list_t *h)
{
	size_t n = 0; /* Initialize a counter to track the number of nodes */

	/* Check if list is empty */
	if (h == NULL)
	{
		return (0);
	}
	/* Loop through the list until we reach the end (NULL) */
	while (h != NULL)
	{
		/* Check if the current node's string is NULL */
		if (h->str == NULL)
		{
		/* Print a placeholder for NULL strings with length 0 */
			printf("[%d] (nil)\n", 0); /* Output: [0] (nil) */
		}
		else
		{
		/* Print the length and string stored in the current node */
			printf("[%d] %s\n", h->len, h->str);
		}
		n++; /* Increment the counter for each node visited */
		h = h->next; /* Move to the next node in linked list */
	}
	/* Return the total number of nodes in the list */
	return (n);
}
