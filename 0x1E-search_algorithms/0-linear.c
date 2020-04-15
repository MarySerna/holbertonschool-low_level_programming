#include "search_algos.h"
/**
*linear_search - function that searches for a value in an array of integers
*@array: pointer to the first element of the array
*@size: number of elements in array
*@value: the value to search for
*
*return: -1
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i;
	int temp;

	if (array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			temp = array[i];
			printf("Value checked array[%lu] = [%d]\n", i, temp);
			if (temp == value)
				return (i);
		}
	}
	return (-1);
}
