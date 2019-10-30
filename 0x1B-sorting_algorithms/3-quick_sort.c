#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
/**
* swap - exchange items
* @x:int pointer
* @y:int pointer
* Return: Nothing
*/
void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

/**
* partition - Takes higher element as pivot
* @lower: First element
* @higher: last element
* @array: set of number to be sorted
* @size: size of array
* Return: Nothing
*/

int partition(int *array, int lower, int higher, size_t size)
{
	int pivot;
	int i = (lower);
	int j;

	if (higher < 0)
		return (0);
	pivot = array[higher];
	for (j = lower ; j < higher; j++)
	{
		if (array[j] < pivot)
		{

			swap(&array[i], &array[j]);

			if (i != j)
				print_array(array, size);

			i++;

		}
	}

	swap(&array[i], &array[higher]);
	if (i + 1 != j)
		print_array(array, size);

	return (i);
	}

/**
* quicksort_arr - function that divides the array
* @array:Array to be sorted
* @lower:Starting index
* @higher:Ending index
* @size: size of array
* Return: Nothing
*/
void quicksort_arr(int array[], int lower, int higher, size_t size)
{
	int pivot;

	if (lower < higher)
	{
		pivot = partition(array, lower, higher, size);
		quicksort_arr(array, lower, (pivot - 1), size);
		quicksort_arr(array, (pivot + 1), higher, size);
	}
}

/**
* quick_sort - sorts an array of integers
* @array: set of number
* @size: size of array
* Return: nothing
*/
void quick_sort(int *array, size_t size)
{
	if (size < 2)
		return;

	quicksort_arr(array, 0, size - 1, size);
}
