#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
* create_array - function that creates an array of chars
* @c: argument for characater
* @size: for size if array
*
* Return: 0
*/
char *create_array(unsigned int size, char c)
{
char *array_1;
unsigned int i = 0;

array_1 = malloc(size * sizeof(char));
if (array_1 == NULL)
{
return (NULL);
}
while (i <= size)
{
array_1[i] = c;
i++;
}
return (array_1);
}

