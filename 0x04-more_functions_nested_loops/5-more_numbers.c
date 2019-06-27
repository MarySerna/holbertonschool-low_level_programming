#include "holberton.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14.
 *
 * Return: void
 */
void more_numbers(void)
{
int b = 0;
int d = 0;
while (d <= 9)
{
while (b <= 14)
{
if (b > 9)
_putchar(b / 10 + '0');
_putchar(b % 10 + '0');
b++;
}
_putchar('\n');
d++;
b = 0;
}
}
