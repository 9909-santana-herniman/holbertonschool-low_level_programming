#include "lists.h"

/**
 * print_dlistint - A function that prints all the elements of a
 * dlistint_t list.
 * @h: Pointer to the head node.
 * Return: The number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n = 0; /* Initialise a counter to track the number of nodes */

	while (h != NULL) /* Traverse until we reach NULL */
	{
		printf("%d\n", h->n); /* Print current node's value */
		h = h->next; /* Move to the next node */
		n++; /* Increment node counter */
	}

	return (n); /* Return total number of nodes */
}
