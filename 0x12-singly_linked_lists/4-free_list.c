#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* free_list - frees a linked list in memory
* @head: pointer to the head of a linked list
* Return: nothing | void
*/

void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
