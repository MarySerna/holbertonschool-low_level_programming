#include "lists.h"
/**
* free_listint - Function that frees a list.
* @head: The list's beginning
*
* Return: Void
*/
void free_listint(listint_t *head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	tmp = head;
	while (head != NULL)
	{
	tmp = head;
	head = head->next;
	free(tmp);
	}
}
