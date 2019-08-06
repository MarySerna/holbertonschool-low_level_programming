#include "lists.h"
/**
* add_nodeint_end - adds a node at the end of a list
* @head: pointer to the first element of the list
*
* Return: pointer to the first element of the list
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *new;

	temp = *head;
	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = new;
	return (*head);
}
