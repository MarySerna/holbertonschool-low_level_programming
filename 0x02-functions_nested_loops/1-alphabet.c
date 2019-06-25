#include "holberton.h"
/**
 * print_alphabet - prints the alphabet,in lowercase, followed by a new line.
 *
 * return:void
 */
void print_alphabet(void)
{
char l;
for (l = 'a'; l <= 'z'; l++)
{
_putchar(l);
}
_putchar('\n');
}
