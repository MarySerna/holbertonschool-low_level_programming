#include "holberton.h"
/**
*swap_int - A function that swaps the values of two integers.
*@a : integer
*@b : integer
*return : void
*/
void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
