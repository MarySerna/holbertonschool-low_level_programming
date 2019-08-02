#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* print_list - prints all the elements of a list
* @h: pointer head
*
* Return: numbers of nodes
*/
size_t print_list(const list_t *h)
{
	size_t cnodes = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
			h = h->next;
		}
		cnodes++;
	}
	return (cnodes);
}
