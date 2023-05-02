#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* sum_listint - a function that returns the sum of all the data
*of a linked list
* @head: a pointer that point to the head of linked list
* Return: sum of all the data
**/

int sum_listint(listint_t *head)
{
	int sum;
	listint_t *next_p;

	if (!head)
		return (0);
	next_p = head;
	sum = 0;
	while (next_p != NULL)
	{
		sum += next_p->n;
		next_p = next_p->next;
	}
	return (sum);
}
