#include "holberton.h"
/**
* _strlen_recursion - find length of string, recursively
* @s:string
*
* Return: int representing string length
*/
int _strlen_recursion(char *s)
{
if (*s)
return (_strlen_recursion(s + 1) + 1);
return (0);
}
/**
* palin_check - recursively checks for palindrome
* @a: character
* @length: length of string
*
* Return: 1 if pal, 0 otherwise
*/
int palin_check(char *a, int length)
{
if (length <= 1)
return (1);
else if (a[0] != a[length - 1])
return (0);
else
return (palin_check((a + 1), (length - 2)));
}
/**
* is_palindrome - recursively checks for palindrome
* @s: string, potential palindrome
*
* Return: 1 if pal, 0 otherwise
*/

int is_palindrome(char *s)
{
int len;

len = _strlen_recursion(s);
if (len <= 1)
return (1);
return (palin_check(s, len));
}
