#include <stdio.h>
#include "holberton.h"
/**
* _strcat - concatenates two strings
* @dest: The function´s parameter
* @src: The function´s parameter
*
* Return: dest
*/

char *_strcat(char *dest, char *src)
{
int a = 0;
int i = 0;
while (dest[a] != '\0')
{
s++;
}
while (src[i] != '\0')
{
dest[s + i] = src[i];
i++;
}
dest[s + i] = '\0';
return (dest);
}
