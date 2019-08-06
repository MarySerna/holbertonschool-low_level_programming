#include "lists.h"
/**
* add_nodeint - adds a node at the end of a list
* @head: pointer to the start of the list
* 
* Return: pointer to the new node
**/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
