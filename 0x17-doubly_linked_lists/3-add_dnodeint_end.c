#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_dnodeint_end - Adds a new node at the end of a double linked list.
 * @head: Double pointer that point to the list
 * @n: Value to add to the list
 *
 * Return: The elements of the list
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp, *new_node;

	tmp = *head;

	new_node = malloc(sizeof(dlistint_t));

	while (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (!*head)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	new_node->prev = tmp;
	tmp->next = new_node;
	return (new_node);
}
