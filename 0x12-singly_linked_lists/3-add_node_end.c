#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
* add_node_end - adds a new node to the end of a linked list
* @head: pointer to the head of a linked list
* @str: string
* Return: address of head of node
**/

list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int size;
	list_t *new_node;
	list_t *next_ptr;
	char *str_copy;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	str_copy = strdup(str);
	size = 0;

	while (str[size] != '\0')
		size += 1;

	new_node->str = str_copy;
	new_node->len = size;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	next_ptr = *head;

	while (next_ptr->next != NULL)
		next_ptr = next_ptr->next;

	next_ptr->next = new_node;
	return (*head);
}
