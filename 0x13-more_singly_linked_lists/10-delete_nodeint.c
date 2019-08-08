#include "lists.h"
/**
* delete_nodeint_at_index - deletes a node
* @head: pointer to the fist node
* @idx: index of the node to delete
* Return: 1 if sucees, -1 if fails
*/
int delete_nodeint_at_index(listint_t **head, unsigned int idx)
{
	listint_t *tmp, *tmp_addr;
	unsigned int count;

	tmp = *head;
	count = 0;
	while (tmp)
	{
		if (count == (idx - 1))
		{
			tmp_addr = (tmp->next)->next;
			free(tmp->next);
			tmp->next = tmp_addr;
			return (1);
		}
		else if (idx == 0)
		{
			tmp = *head;
			*head = (*head)->next;
			free(tmp);
			return (1);
		}
	count++;
	tmp = tmp->next;
	}
	return (-1);
}
