#include "lists.h"
/**
* pop_listint - deletes the head node of a listint_t linked list
* @pointer to the first node
*
* Return: the head node
*/
int pop_listint(listint_t **head)
{
	int node_copy;
	listint_t *tmp;

	if (*head == NULL)
	return (0);

	tmp = *head;
	*head = (*head)->next;
	node_copy = tmp->n;

	free(tmp);
	return (node_copy);
}
