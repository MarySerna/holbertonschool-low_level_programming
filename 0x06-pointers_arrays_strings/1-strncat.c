#include "holberton.h"

/**
* _strncat - function that concatenates two strings.
* @dest: objective string to be concatenated with
* @src: string to append to dest.
* @n: numbers of bytes to be used from src
* Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
int a = 0;
int b = 0;
while (dest[a] != '\0')
a++;
while (src[b] != '\0' && b < n)
{
dest[a] = src[b];
b++;
a++;
}
return (dest);
}
