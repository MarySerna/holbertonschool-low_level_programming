#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
* malloc_checked - allocates a space of memory for b unsigned integers
* @b: amount for integers
* Return: a pointer to the allocated memory
*/
void *malloc_checked(unsigned int b)

	void *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
