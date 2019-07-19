#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 *_calloc - allocates memory for an array, using malloc.
 *@nmemb: number of elements
 *@size: size of variable
 *
 *Return: a pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ary;
	unsigned int i = 0;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	ary = malloc(nmemb * size);
	if (ary == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		ary[i] = 0;
	return (ary);
}
