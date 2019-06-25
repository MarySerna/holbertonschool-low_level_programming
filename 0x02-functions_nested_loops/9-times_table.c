#include "holberton.h"
/**
* times_table -  prints the 9 times table
*
* Return: void
*/
void times_table(void)
{
int m, j, res;
for (m = 0; m <= 9; m++)
{
for (j = 0; j <= 9; j++)
{
res = (m * j);
if (j != 0)
{
_putchar(',');
_putchar(' ');
}
if (res >= 10)
{
_putchar((res / 10) + '0');
_putchar((res % 10) + '0');
}
else if (res < 10 && j != 0)
{
_putchar(' ');
_putchar((res % 10) + '0');
}
else
_putchar((res % 10) + '0');
}
_putchar('\n');
}
}
