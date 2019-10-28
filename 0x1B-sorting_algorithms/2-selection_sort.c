#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
/**
* swap - exchange items
* @x:integer
* @y:integer
* Return: Nothing
*/
void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

/**
* selection_sort - function that sorts an array of integer
* @array: array of number
* @size: size of array
*
* Return: Nothing
*/
void selection_sort(int *array, size_t size)
{
	size_t i;
	size_t j;
	size_t min_element;

	if (size < 2)
		return;

	for (i = 0; i < size; i++)
	{
		min_element = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_element])
			{
				min_element = j;
			}
		}
		if (min_element != i)
		{
			swap(&array[min_element], &array[i]);
			print_array(array, size);
		}
	}
}
