#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* pop_listint - a function that deletes the head node of a linked list
* @head: a double pointer that point to a list
* Return: the head node's data(n)
**/

int pop_listint(listint_t **head)
{
	int data_n;
	listint_t *free_n;

	if (head == NULL)
		return (0);
	if (*head == NULL)
		return (0);
	data_n = 0;
	free_n = *head;
	data_n = (*head)->n;
	*head = (*head)->next;
	free(free_n);
	return (data_n);
}
