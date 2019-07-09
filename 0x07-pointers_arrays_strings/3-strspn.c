#include "holberton.h"
#include <stdio.h>

/**
* _strspn - returns number of bytes in the initial sengment s
* @s: for the count action
* @accept: parameter for char
*
* Return: number of bytes;
*/

unsigned int _strspn(char *s, char *accept)
{
unsigned int num;
int in, g, t;

in = 0;
while (s[in] != '\0')
{
t = 0;
for (g = 0; accept[g] != '\0'; g++)
{
if (s[in] == accept[g])
t = 1;
}
g = 0;
if (t == 0)
break;
num++;
in++;
}
return (in);
}
