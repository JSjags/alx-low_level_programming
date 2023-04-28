#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* add_node - add a new node to the beginning of a linked list
* @head: a pointer to a linked list
* @str: string
* Return: linked list
**/

list_t *add_node(list_t **head, const char *str)
{
	char *str_copy;
	list_t *new_node;
	unsigned int i;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	str_copy = strdup(str);
	for (i = 0; str[i] != '\0';)
		i += 1;

	new_node->str = str_copy;
	new_node->next = *head;
	new_node->len = i;
	*head = new_node;
	return (*head);
}
