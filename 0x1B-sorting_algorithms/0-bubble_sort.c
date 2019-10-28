#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
/**
* bubble_sort - this function sorts an array of integers in ascending order
* @array: number of items
* @size: size of array
* return: Nothing
*/

void bubble_sort(int *array, size_t size)
{
	size_t number = 0, i = 0;
	int item = 0;

	while (number <= size)
	{
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				item = array[i];
				array[i] = array[i + 1];
				array[i + 1] = item;
				number = 0;

				print_array(array, size);
			}
			else
			{
			number = number + 1;
			}
			}
	}
}
