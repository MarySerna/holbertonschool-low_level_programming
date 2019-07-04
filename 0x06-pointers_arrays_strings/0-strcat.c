#include "holberton.h"

/**
* _strcat - function that concatenates two strings.
* @dest: objective string to be concatenated with
* @src: string to append to dest.
*
* Return: dest
*/
char *_strcat(char *dest, char *src)
{
int a = 0;
int b = 0;
while (dest[a] != '\0')
a++;
while (dest[b] != '\0')
{
dest[a] = src[b];
b++;
a++;
}
return (dest);
}
