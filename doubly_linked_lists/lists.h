#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Data Structure */
/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 *
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t; /* Alias name */

/* Function Prototypes */
/* Prints all the elements */
size_t print_dlistint(const dlistint_t *h);

/* Returns the number of elements in a linked list */
size_t dlistint_len(const dlistint_t *h);

/* Adds a new node at the beginning */
dlistint_t *add_dnodeint(dlistint_t **head, const int n);

/* Adds a node a the end of */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);

/* A function that frees a list */
void free_dlistint(dlistint_t *head);

/* Return the 'nth' node of a linked list */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);

/* Return the sum of all the data (n) of a linked list */
int sum_dlistint(dlistint_t *head);

/* Insert a node at a given position */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);

/* Delete the node at index of a linked list */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);

#endif
