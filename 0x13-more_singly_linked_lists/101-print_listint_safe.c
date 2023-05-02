#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "lists.h"

/**
* print_listint_safe - a function that prints a listint_t
*linked list
* @head: points to the beginning of a linked list
* Return: the number of nodes in the list
**/

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *f_p, *s_p;
	size_t size;

	size = 0;

	if (head == NULL)
		return (0);

	s_p = head;
	f_p = head->next;

	while (f_p != NULL && f_p < s_p)
	{
		size += 1;
	printf("[%p] %i\n", (void *)s_p, s_p->n);
		s_p = s_p->next;
		f_p = f_p->next;
	}
	printf("[%p] %i\n", (void *)s_p, s_p->n);
	size += 1;
	if (f_p)
		printf("-> [%p] %i\n", (void *)f_p, f_p->n);

	return (size);
}
