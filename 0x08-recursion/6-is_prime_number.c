#include "holberton.h"
/**
* is_prime_number - function that returns 1 if a num is a prime number
* @n: integer
*
* Return: 0
*/
int is_prime_number(int n)
{
return (prime_prime(n, 2, n / 2));
}
/**
* prime_prime - blank
* @n: checkl
* @i: for the increment
* @limit: stop
*
* Return: 0
*/
int prime_prime(int n, int i, int limit)
{
if ((n % i == 0 && i <= limit) || n < 0 || n == 1)
return (0);
else if (n % i != 0 && i <= limit)
return (prime_prime(n, i + 1, limit));
else
return (1);
}

