#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* print_list - prints all elements of a linked list
* @h: a linked_list
* Return: the number of nodes
**/

size_t print_list(const list_t *h)
{
	unsigned int num_of_nodes = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%i] %s\n", h->len, h->str);

		h = h->next;
		num_of_nodes += 1;
	}

	return (num_of_nodes);
}
