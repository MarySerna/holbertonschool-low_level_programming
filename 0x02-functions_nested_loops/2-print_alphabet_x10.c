#include "holberton.h"
/**
* main - function to print
*
* Return: Always 0 (Success)
*/
void print_alphabet_x10(void)
{
char c, l;
for(l = 0; l <= 9; l++)
{
for(c = 'a'; c <= 'z'; c++)
{
_putchar(l);
}
_putchar('\n');
}
}
