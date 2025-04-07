#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data (n) of
 * a dlistint_t linked list.
 * @head: Pointer to the head of the doubly linked list.
 * Return: Sum of all data (n), otherwise return 0 if empty.
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0; /* Initialise sum to 0 */

	/* Traverse through the list */
	while (head != NULL)
	{
		sum = sum + head->n; /* Add current node's data to sum */
		head = head->next; /* Move to the next node */
	}

	return (sum); /* Return total sum */
}
