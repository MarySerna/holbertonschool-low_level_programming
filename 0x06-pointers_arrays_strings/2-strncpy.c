#include "holberton.h"

/**
* _strncpy - function that copies a string.
* @dest: objective string
* @src: string to append to dest.
* @n: integer
*
* Return: dest
*/
char *_strncpy(char *dest, char *src, int n)
{
int a = 0;
int b = 0;
while (a != n)
{
dest[b] = src[a];
b++;
a++;
if (src[a] == '\0')
{
break;
}
}
while (b != n)
dest[b++] = '\0';
return (dest);
}
