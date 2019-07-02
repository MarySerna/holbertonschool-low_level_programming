#include "holberton.h"
/**
* puts2 - function that prints one char out of 2 of a string
* @str: string
*
* return: void
*/
void puts2(char *str)
{
int i;
while (str[i] != '\0')
{
if (i % 2 == 0)
_putchar (str[i]);
i++;
}
_putchar ('\n');
}
