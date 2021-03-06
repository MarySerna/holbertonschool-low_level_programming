#include "lists.h"
/**
* sum_listint - adds the integers contained in a list
* @head: pointer to the first node of the list
*
* Return: the sum of all the elements
**/

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tmp = head;

	if (head == NULL)
		return (0);
	while (tmp)
	{
		sum += tmp->n;
		tmp =  tmp->next;
	}
	return (sum);
}
