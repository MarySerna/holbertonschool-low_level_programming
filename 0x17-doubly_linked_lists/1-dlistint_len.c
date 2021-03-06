#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* dlistint_len - returns the number of elements in a linked list
* @h:pointer
*
* Return:The elements' number of the list
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		h = h->next;
		len++;
	}
	return (len);
}
