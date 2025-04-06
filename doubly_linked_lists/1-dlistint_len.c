#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a doubly linked list.
 * @h: Pointer to the head of the doubly linked list.
 * Return: Number of elements in the list.
 */

size_t dlistint_len(const  dlistint_t *h)
{
	size_t n = 0; /* Initialise counter for the nodes */

	while (h != NULL) /* Initialise node counter */
	{
		n++; /* Increment node counter */
		h = h->next; /* Move to the next node */
	}
	return (n); /* Return total number of nodes */
}
