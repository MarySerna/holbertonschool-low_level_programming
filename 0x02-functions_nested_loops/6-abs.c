#include "holberton.h"
#include <stdio.h>
/**
* main - function to print
*
* Return: Always 0 (Success)
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
