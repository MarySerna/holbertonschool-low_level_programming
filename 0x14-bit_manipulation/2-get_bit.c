#include <stdio.h>
#include "holberton.h"
/**
* get_bit -  returns the value of a bit at a given index
* @n: unsigned long int
* @index: value given
*
* Return: the value of the bit
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 64)
	{
		return (-1);
	}
	n >>= index;

	if ((n & 1) == 1)
		return (1);

	return (0);
}
