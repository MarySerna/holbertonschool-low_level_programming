#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - function that searches for an integer
 * @array: the array to check
 * @size: parameter for size
 * @cmp: parameter for cmp
 * Return: 0 if false
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int m;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}

	for (m = 0; m < size; m++)
	{
		if (cmp(array[m]))
		{
			return (m);
		}
	}
	return (-1);
}
