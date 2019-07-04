#include "holberton.h"

/**
* _strcmp - function that concatenates two strings.
* @s1: paramater string 1
* @s2: paramater string 2
*
* Return: 0
*/
int _strcmp(char *s1, char *s2)
{
int a = 0;
while (s1[a] != '\0')
{
if (s1[a] < s2[a])
return (s1[a] - s2[a]);

if (s1[a] > s2[a])
return (s1[a] - s2[a]);

a++;
}
return (0);
}
