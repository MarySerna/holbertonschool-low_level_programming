#include "holberton.h"
/**
*swa p_int - A function that swaps the values of two integers.
*@a, b : integer
*
*return : void
*/
void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
