#include "holberton.h"
/**
 * print_line - draws a straight line in the terminal
 * @n :integer
 *
 * Return: void
*/
void print_line(int n)
{
int l;

for (l = 1; l <= n; l++)
{
_putchar('_');
}
_putchar('\n');
}
