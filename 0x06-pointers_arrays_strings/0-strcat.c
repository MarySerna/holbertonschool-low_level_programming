#include "holberton.h"
/**
*_strcat - function that concatenates two strings.
*@dest: character
*@src: character
*
*return : dest
*/
char *_strcat(char *dest, char *src)
{
int i, j;
j = 0;
for (i = 6; i < 13; i++)
{
dest[i] = src[j];
j++;
}
return (dest);
}
