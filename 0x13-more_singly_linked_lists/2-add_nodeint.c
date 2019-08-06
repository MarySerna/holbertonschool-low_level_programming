#include "lists.h"
/**
* add_nodeint - adds a node at the end of a list
* @head: pointer to the start of the list
*
* Return: pointer to the new node
**/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *codenew;

	codenew = *head;
	codenew = malloc(sizeof(listint_t));

	if (codenew == NULL)
	return (NULL);

	codenew->n = n;
	codenew->next = *head;
	*head = codenew;

	return (*head);
}
