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
i = 0;
for (j = 0; dest[j] != '\0'; j++)
while (src[i] != '\0')
{
dest[j + i] = src[i];
i++;
}
return (dest);
}
