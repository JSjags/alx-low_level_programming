#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* list_len - returns number of elements in a linked list
* @h: pointer to the struct linked list
* Return: number of elements in linked list
**/

size_t list_len(const list_t *h)
{
	size_t num_of_elements;

	num_of_elements = 0;
	while (h)
	{
		h = h->next;
		num_of_elements += 1;
	}

	return (num_of_elements);
}
