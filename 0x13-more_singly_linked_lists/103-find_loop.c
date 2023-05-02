#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "lists.h"

/**
* find_listint_loop - a function that finds the
*loop in a linked list
* @head: pointer to a list
* Return: The address of the node where the loop starts,
*or NULL if there is no loop
*/

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *f_p, *s_p;
	bool is_loop;

	if (head == NULL)
		return (NULL);
	f_p = head;
	s_p = head;
	is_loop = false;

	while (f_p && s_p && f_p->next)
	{
		f_p = f_p->next->next;
		s_p = s_p->next;

		if (s_p == f_p)
		{
			is_loop = ue;
			break;
		}
	}
	if (is_loop)
	{
		f_p = head->next;
		s_p = head;
	}
	while (f_p && f_p < s_p && is_loop)
	{
		s_p = s_p->next;
		f_p = f_p->next;
	}
	return (f_p);
}
