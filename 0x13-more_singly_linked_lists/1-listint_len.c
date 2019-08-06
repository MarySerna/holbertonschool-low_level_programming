#include <stdio.h>
#include "lists.h"
/**
* listint_len - function that counts  amount of nodes.
* @h: The pointer that points to header of the struct
*
* Return: i.
*/
size_t listint_len(const listint_t *h)
{
	int i = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
