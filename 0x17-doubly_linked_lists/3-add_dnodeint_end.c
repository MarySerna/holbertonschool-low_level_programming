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
	dlistint_t *tmp, *new_element;

	tmp = *head;
	new_element = malloc(sizeof(dlistint_t));

	while (new_element == NULL)
	{
		return (NULL);
	}
	new_element->n = n;
	new_element->next = NULL;

	if (!*head)
	{
		new_element->prev = NULL;
		*head = new_element;
		return (new_element);
	}

	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	new_element->prev = tmp;
	tmp->next = new_element;
	return (new_element);
}
