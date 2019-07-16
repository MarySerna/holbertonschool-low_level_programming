#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
* _strdup - function that returns a pointer
* @str: argument for array
*
* Return: 0
*/
char *_strdup(char *str)
{
char *array_1;
int i, leng;

array_1 = malloc(sizeof(str));
i = leng = 0;
while (str[i] != '\0')
{
leng++;
i++;
}
if (array_1 == NULL)
return (NULL);
i = 0;
while (str[i] != '\0')
{
array_1[i] = str[i];
i++;
}
return (array_1);
}
