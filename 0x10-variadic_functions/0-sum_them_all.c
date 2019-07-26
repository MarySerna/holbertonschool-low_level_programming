#include <stdarg.h>
#include <stdio.h>
/**
* sum_them_all - returns the sum of all its parameters
* @n: number of parameters
* @...: paramters
*
* Return: sum
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int m, sum = 0;

	va_list arguments;

	if (n == 0)
		return (0);

	va_start(arguments, n);

	for (m = 0; m < n; m++)
	{
	sum += va_arg(arguments, int);
	}
	va_end(arguments);
	return (sum);
}
