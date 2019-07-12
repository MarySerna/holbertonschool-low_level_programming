#include "holberton.h"
/**
* _strlen_recursion - returns the length of a string
* @s: pointer to string
*
* Return: length of string
*/
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
return (1 + _strlen_recursion(s + 1));
}

/**
* char_check - checks characters of a string for palindrome function
* @a: pointer to start of string
* @b: pointer to end of string
*
* Return: 1 if palindrome or empty string, 0 otherwise
*/
int char_check(char *a, char *b)
{
if (a >= b)
return (1);
if (*a != *b)
return (0);
a++;
b--;
return (char_check(a, b));
}

/**
* is_palindrome - checks if a string is a palindrome
* @s: pointer to string
*
* Return: 1 if palindrome, 0 otherwise
*/
int is_palindrome(char *s)
{
if (char_check(s, s + _strlen_recursion(s) - 1))
return (1);
return (0);
}
