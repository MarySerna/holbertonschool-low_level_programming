#include "lists.h"
/**
* free_listint2 - Function that frees a list
* @head: head of the list
*
* Return: Nothing
*/
void free_listint2(listint_t **head)
{
	listint_t *tmp2, *next;

	tmp2 = *head;
	while (tmp2)
	{
		next = tmp2->next;
		free(tmp2);
		tmp2 = next;
	}
	*head = NULL;
}
