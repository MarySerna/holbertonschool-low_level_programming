#include "holberton.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: array starts
 * @max: array ends
 *
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int b, size, *p;

	if (min > max)
		return (NULL);
	size = (max - min) + 1;
	p = malloc(sizeof(int) * size);
	if (p == NULL)
		return (NULL);
	for (b = 0; b < size; b++)
	{
		p[b] = min;
	min++;
	}
	return (p);
}
