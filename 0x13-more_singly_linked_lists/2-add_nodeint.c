#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* add_nodeint - a function that adds a node at the beginning of a list
* @head: a pointer to a pointer to a head of linked list
* @n: holds the data for the node
* Return: address of the new element, or NULL if it failed
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_n;

	if (head == NULL)
		return (NULL);
	new_n = malloc(sizeof(listint_t));
	if (!new_n)
		return (NULL);
	new_n->n = n;
	new_n->next = *head;
	*head = new_n;

	return (*head);
}
