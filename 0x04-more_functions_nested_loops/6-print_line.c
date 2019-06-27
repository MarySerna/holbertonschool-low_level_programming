#include "holberton.h"
/**
 * print_line - draws a straight line in the terminal
 * @n :integer
 *
 * Return: void
 */
void print_line(int n)
{
int l = 0;
if (n > 0)
{
while (l <= n)
{
_putchar('_');
l++;
}
_putchar('\n');
}
else
_putchar('\n');
}
