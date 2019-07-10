#include "holberton.h"
/**
* _puts_recursion - prints a string, followed by a new line
* @s: character
*
*return: void
*/
void _puts_recursion(char *s)
{
unsigned int string  = 0;
if (s[string] == '\0')
{
_putchar('\n');
return;
}
_putchar(s[string]);
_puts_recursion(s + 1);
}
