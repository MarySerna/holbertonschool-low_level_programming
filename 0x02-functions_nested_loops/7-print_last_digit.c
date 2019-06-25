#include "holberton.h"
#include <stdio.h>
/**
* print_last_digit - prints the last digit of a number.
* @c:integer
*
* Return: 0
*/
int print_last_digit(int c)
{
if (c < 0)
c = c * -1;
_putchar((c % 10) + '0');
return (c % 10);
}
