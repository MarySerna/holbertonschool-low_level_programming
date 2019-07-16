#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
* _strlen - check the code for Holberton School students.
* @s: declaration of *s and paramters for the function _strlen
* Return: Always 0.
*/
int _strlen(char *s)
{
int c;

for (c = 0; s[c] != 0; c++)
{
}
return (c);
}
/**
* _strdup - function that returns a pointer
* @str: parametro for array
*
* Return: 0
*/
char *_strdup(char *str)
{
char *s;
int i;
s = malloc((_strlen(str) + 1) * sizeof(char));
for (i = 0; i < _strlen(str); i++)
{
s[i] = str[i];
}
s[i + 1] = '\0';
return (s);
}
