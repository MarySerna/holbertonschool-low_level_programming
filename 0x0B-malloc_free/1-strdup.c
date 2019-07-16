#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
* _strdup - function that returns a pointer to a newly allocated space in memory
* @leng: integer
* @j: integer
* @n: character
*
* Return: 0
*/
char *_strdup(char *str)
{
char *n;
unsigned int leng, j;

if (str == NULL)
return (NULL);
for (leng = 0; str[leng] != '\0'; leng++);
leng++;
if (leng < 1)
return (NULL);
n = malloc(leng * sizeof(char));
if (n == NULL)
{
free(n);
return (NULL);
}
for (j = 0; j < leng; j++)
n[j] = str[j];
n[j] = '\0';
return (n);
}
