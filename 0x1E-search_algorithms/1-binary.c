#include "search_algos.h"
/**
*print_array - print array of integers
*@array: array to print
*@size: size of array
*
*Return: array
*/
void print_array(int *array, size_t size)
{
	size_t i;

	printf("Searching in array: ");
	for (i = 0; i < size; i++)
	{
		printf("%d", array[i]);
		if (i != size - 1)
			printf(",");
	}
	printf("\n");
}

/**
*binary_search-function that searches for a value in a sorted array of integers
*@array: pointer to the first element of the array
*@size: number of elements in array
*@value: value to search for
*
*Return: -1 if array is NULL if value is not present in array
*/
int binary_search(int *array, size_t size, int value)
{
	size_t left, m, right;

	if (array != NULL && size > 0)
	{
		left = 0;
		right = size - 1;
		print_array(array + left, right + 1 - left);
		while (left < right)
		{
			m = (left + right) / 2;
			if (array[m] < value)
				left = m + 1;
			else if (array[m] > value)
				right = m;
			else
				return (m);
			print_array(array + left, right + 1 - left);
		}
	}
	return (-1);
}
