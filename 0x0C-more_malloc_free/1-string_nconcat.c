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
* string_nconcat- concatenates two strings
* @s1: first string
* @s2: second string
* @n: amount of bytes of the second string
*
* Return: Null if the memory allocation fails
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int leng1, leng2, m, d;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	leng1 = _strlen(s1), leng2 = _strlen(s2);
	if (n >= leng2)
		n = leng2;
	p = malloc(sizeof(char) * (leng1 + n + 1));
	if (p == NULL)
		return (NULL);
	for (m = 0; s1[m] != '\0'; m++)
	{
		p[m] = s1[m];
	}
	for (d = 0; d < n; d++)
	{
		p[m + d] = s2[d];
	}
	p[m + d] = '\0';
	return (p);
}
