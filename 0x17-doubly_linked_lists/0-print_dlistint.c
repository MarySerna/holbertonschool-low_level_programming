#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* print_dlistint - function that prints all the elements of a list
* @h:pointer
*
* Return:The number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	int len = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h)
	{
		printf("%d\n", h->n);
	len++;
	h = h->next;
	}
	return (len);
}
