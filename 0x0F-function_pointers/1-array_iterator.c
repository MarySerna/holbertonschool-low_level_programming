#include <stdlib.h>
#include "function_pointers.h"
/**
* array_iterator - function given as a parameter on each element of an array
* @array: parameter for array
* @size:parameter for size
* @action:parameter for action
*
* Return:nothing
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t a;

	if (action && array)

	for (a = 0; a < size; a++)
	{
	action(array[a]);
	}
}
