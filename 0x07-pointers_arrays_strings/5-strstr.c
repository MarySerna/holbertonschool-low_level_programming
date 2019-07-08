#include "holberton.h"
#include <stdio.h>
/**
* _strstr - function finds the first occurrence of the substring.
* @haystack: character
* @needle: character
*
* Return: pointer to the beginning of the located substring
*/
char *_strstr(char *haystack, char *needle)
{
while (*haystack != '\0')
{
char *beg = haystack;
char *pat = needle;

while (*pat == *haystack && *pat != '\0' && *haystack != '\0')
{
haystack++;
pat++;
}
if (*pat == '\0')
return (beg);
haystack = beg + 1;
}
return ('\0');
}
