#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* reverse_listint - a function that reverses a list
* @head: a double pointer that point to head of list
* Return: a pointer to the first node of the reversed list
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_p;
	listint_t *cly_p;

	if (*head == NULL || (*head)->next == NULL)
		return (*head);
	prev_p = *head;
	cly_p = (*head)->next;

	while (cly_p != NULL)
	{
		(*head)->next = cly_p->next;
		cly_p->next = prev_p;
		prev_p = cly_p;
		cly_p = (*head)->next;
	}
	*head = prev_p;

	return (*head);
}
