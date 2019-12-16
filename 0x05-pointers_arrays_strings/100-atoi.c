#include "holberton.h"
/**
* _atoi - function that convert a string to an integer.
* @s : array
*
* Return: Always numbers
**/
int _atoi(char *s)
{
	int a;
	int c = 1;
	unsigned int b = 0;
	for (a = 0; s[a] != '\0'; a++)
	{
	if ((s[a] >= '0') && (s[a] <= '9'))
	{
		b = (b * 10 + (s[a] - '0'));
	}
	if (b != 0 && !((s[a] >= '0') && (s[a] <= '9')))
	{
	break;
	}
	if (s[a] == '-')
	{
	c = (c * (-1));
	}
	}
return (b *c);
}
