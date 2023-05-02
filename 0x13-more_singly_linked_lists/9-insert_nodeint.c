#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* insert_nodeint_at_index - a function that inserts a new
*node at a given position
* @head: a double pointer to a struct
* @idx: is the index where the new node
*is to be added.
* @n: the data for the new node
* Return: address of the new node, or NULL if it failed
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *next_p;
	listint_t *previous_p;
	listint_t *new_node;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	next_p = *head;
	previous_p = NULL;
	for (i = 0; i < idx; i += 1)
	{
		if (next_p == NULL)
			return (NULL);
		previous_p = next_p;
		next_p = next_p->next;
	}

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = next_p;
	if (idx == 0)
		*head = new_node;
	else
		previous_p->next = new_node;

	return (new_node);
}
