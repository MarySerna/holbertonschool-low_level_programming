#include "search_algos.h"
/**
*print_array - print array
*@array: array to print
*@left: starting array
*@right: ending array
*
*/
void print_array(int *array, int left, int rigth)
{
	printf("Searching in array: ");
	while (left <= rigth)
	{
	printf("%d", array[left]);
		if (left != (int)rigth)
			printf(", ");
		left++;
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

	left = 0;
	right = size - 1;
	while (left <= right)
	{
		print_array(array, left, right);
		m = (left + right) / 2;
		if (array[m] < value)
			(left = m + 1);
		else if (array[m] > value)
			right = m - 1;
		else
			return (m);
	}
	return (-1);
}
