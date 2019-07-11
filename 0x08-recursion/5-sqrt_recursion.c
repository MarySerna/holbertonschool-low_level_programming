#include "holberton.h"
/**
* _sqrt_recursion -  function that returns the natural square root of a number.
* @n:integer
*
* Return: 0
*/
int _sqrt_recursion(int n)
{
if (n == 0)
return (0);
else if (n == 1)
return (1);
else if (n < 0)
return (-1);
else
return (root(n, 1));
}
/**
* root - blank
* @rn: number
* @i: incrementor
*
* Return: -1;
*/
int root(int rn, int i)
{
if (rn == (i * i))
return (i);
else if (rn > (i * i))
return (root(rn, i + 1));
else
return (-1);
}
