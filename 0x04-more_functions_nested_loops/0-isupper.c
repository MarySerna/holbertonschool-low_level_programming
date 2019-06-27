#include "holberton.h"
/**
* _isuper - checks for uppercase character.
* @c: character.
*
* Return: 0.
*/
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
return (0);
}
