#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* listint_len - a function that returns the number of elements in a linked list
* @h: points to the head of list
* Return: the number of elements in a linked list
**/

size_t listint_len(const listint_t *h)
{
	size_t node_count;
	const listint_t *next_ptr;

	node_count = 0;
	next_ptr = h;

	while (next_ptr != NULL)
	{
		next_ptr = next_ptr->next;
		node_count += 1;
	}
	return (node_count);
}
