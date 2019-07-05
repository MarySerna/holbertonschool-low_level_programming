#include "holberton.h"

/**
* *string_toupper - function that reverses the content of an array of integers
*@c: character
*
* Return: void
*/
char *string_toupper(char *c)
{
int i;
i = 0;
while (c[i] != '\0')
{
if (c[i] >= 'a' && c[i] <= 'z')
c[i] -= 'a' - 'A';
i++;
}
return (c);
}
