#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
* *str_concat - function that concatenates two strings
* @s1: Argument for the character
* @s2: Argument for the character
*
* Return: Always 0.
*/
char *str_concat(char *s1, char *s2)
{
	char *c;
	int i, l, m = 0, x = 0, y = 0, tmp;

	if (s2 == NULL)
	{
		s2 = "";
	}
	if (s1 == NULL)
	{
		s1 = "";
	}
	while (s1[x] != '\0')
	{
		x++;
	}
	while (s2[y] != '\0')
	{
		y++;
	}

	tmp = x + y + 1;
	c = (char *) malloc(tmp * sizeof(char));
	if (c == NULL)
	{
	return (NULL);
	}
	for (i = 0; i < x; i++)
	{
		c[i] = s1[i];
	}
	for (l = i; l <= tmp; l++)
	{
		c[l] = s2[m];
		m++;
	}
return (c);
}
