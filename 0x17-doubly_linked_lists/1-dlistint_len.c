#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * dlistint_len - prints all the elements of the list.
 * @h: pointer
 * 
 *Return: 1
 */
size_t dlistint_len(const dlistint_t *h)
{
	int l = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		l++;
		h = h->next;
	}
	return (l);
}
