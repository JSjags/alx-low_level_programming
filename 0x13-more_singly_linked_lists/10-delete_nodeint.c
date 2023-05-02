#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* delete_nodeint_at_index - a function that deletes the node at
*index of a listint_t linked list.
* @head: a double pointer point to head of list
* @index: the index of the node that should be deleted
* Return: 1 if succeeded, -1 if failed
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev_p;
	listint_t *next_p;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	next_p = *head;
	prev_p = NULL;
	if (index == 0)
	{
		*head = (*head)->next;
		free(next_p);
		return (1);
	}
	for (i = 0; i < index; i += 1)
	{
		if (next_p == NULL)
			return (-1);
		prev_p = next_p;
		next_p = next_p->next;
	}
	if (prev_p)
		prev_p->next = next_p->next;
	free(next_p);

	return (1);
}
