#include "holberton.h"
/**
* _strlen - calculate the length of a string.
* @s: integer
*
* return :i
*/
int _strlen(char *s)
{
int i;
i = 0;
while (*s != '\0')
{
i++;
s++;
}
return (i);
}
