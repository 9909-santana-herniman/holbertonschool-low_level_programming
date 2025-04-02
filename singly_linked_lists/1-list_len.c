#include "lists.h"

/**
 * list_len - A function that returns the number of elements in a
 * linked list_t list.
 * @h: Pointer to 'head' node of list.
 *
 * Return: The number of elements in the list.
 */

size_t list_len(const list_t *h)
{
	size_t n = 0; /* Initialise a counter to track the number of nodes */

	/* Loop through the list until we reach the end (NULL) */
	while (h != NULL)
	{
		n++; /* Increment the counter for each node visited */
		h = h->next; /* Move to the next node in linked list */
	}
	return (n);
}
