#include <stdio.h>
#include "holberton.h"
/**
* _memcpy - function copies n bytes from memory area src to memory area dest.
* @dest: character
* @src: character
* @n: integer
*
* Return: (dest)
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
dest[i] = src[i];
return (dest);
}
