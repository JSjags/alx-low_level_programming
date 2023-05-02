#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* free_listint_safe - frees a linked list safely
* @h: holds a double pointer of a linked list
* Return: the size of the list
*/

size_t free_listint_safe(listint_t **h)
{
	listint_t *s_p, *f_p, *free_p;
	size_t size;

	size = 0;

	if (!h || *h == NULL)
		return (0);
	f_p = (*h)->next;
	s_p = *h;

	while (f_p && f_p < s_p)
	{
		free_p = s_p;
		f_p = f_p->next;
		s_p = s_p->next;
		size += 1;

		free(free_p);
	}
	size += 1;
	free(s_p);
	*h = NULL;
	return (size);
}
