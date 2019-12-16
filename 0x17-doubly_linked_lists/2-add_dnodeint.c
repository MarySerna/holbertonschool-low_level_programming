#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a double linked list.
 * @head: Double pointer that point to the list
 * @n: Value to add to the list
 *
 * Return: The elements of the list
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_element;

	new_element = *head;
	new_element = malloc(sizeof(dlistint_t));

	while (new_element == NULL)
	{
		return (NULL);
	}
	new_element->n = n;
	new_element->prev = NULL;
	new_element->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = new_element;
	}
	*head = new_element;
	return (new_element);
}
