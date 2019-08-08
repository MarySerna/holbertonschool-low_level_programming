#include <stdio.h>
#include "holberton.h"
/**
 * _pow_recursion -Returns the value of 2 raised to the power of y
 * @y: Parameter to be raised.
 *
 * Return: The value of y raised to the power.
*/
int _pow_recursion(int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
		return (2 * _pow_recursion(y - 1));
}

/**
* binary_to_uint - Convers a binary number to an unsigned int¬
* @b: Pointing to string¬
* Return: The converted number¬
*/
unsigned int binary_to_uint(const char *b)
{
unsigned int x = 0, length = 0, result = 0;

if (b == NULL)
	return (0);

while (b[length] != '\0')
{
	length++;
}
for (x = 0; b[x] != '\0'; x++)
{
	if (b[x] == '0')
	{
		result = result + 0;
		length--;
	}
	else if (b[x] == '1')
	{
		length--;
		result = result + _pow_recursion(length);
	}
	else
		return (0);
}
return (result);
}
