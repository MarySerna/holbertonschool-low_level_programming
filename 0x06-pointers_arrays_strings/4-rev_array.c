#include "holberton.h"

/**
* reverse_array - function that reverses the content of an array of integers
* @a: integer pointer
* @n: integer
*
* Return: void
*/
void reverse_array(int *a, int n)
{
int i, tmp;
i = tmp = 0;
n -= 1;
while (i <= n)
{
tmp = a[n];
a[n--] = a[i];
a[i++] = tmp;
}
}
