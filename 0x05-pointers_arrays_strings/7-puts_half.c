#include "holberton.h"
#include <stdio.h>
/**
*puts_half - unction that prints half of a string.
* @str: string
*
*return: void
*/
void puts_half(char *str)
{
int i, j;
while (str[i] != '\0')
i++;
if (i % 2 == 0)
j = i / 2;
else
j = (i + 2) / 2;
while (j < i)
{
_putchar(str[j]);
j++;
}
_putchar('\n');
}
