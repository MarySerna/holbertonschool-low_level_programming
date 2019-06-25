#include "holberton.h"
#include <stdio.h>
/**
* _abs- computes the absolute value of an integer
* @d:integer
*
* Return: 0
*/
int _abs(int d)
{
if (d > 0 || d == 0)
{
return (d);
}
else
return (d * -1);
}
