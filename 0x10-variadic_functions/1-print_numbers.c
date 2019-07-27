#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
* print_numbers - prints numbers
* @separator: string to be printed between numbers
* @n:number of integers passed
*
* Return : void
*
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arguments;
	unsigned int m;

	va_start(arguments, n);

for (m = 0 ; m < n; m++)
{
	printf("%d", va_arg(arguments, int));

	if (separator != NULL && m != n - 1)
		printf("%s", separator);
}
	printf("\n");
va_end(arguments);
}
