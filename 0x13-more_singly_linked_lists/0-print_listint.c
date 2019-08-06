#include "lists.h"
#include <stdio.h>

/**
* print_listint - prints all the elements of a list
* @h: pointer head
*
* Return: numbers of nodes
*/
size_t print_listint(const listint_t *h)
{
	size_t countnum = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		countnum++;
	}
	return (countnum);
}
