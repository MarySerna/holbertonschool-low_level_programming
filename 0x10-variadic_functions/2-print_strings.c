#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
* print_strings - prints strings
* @separator: string to be printed between strings
* @n:number of integers passed
*
* Return : void
*
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list names;
	unsigned int a;

	if (n == 0)
		return;

	va_start(names, n);

for (a = 0 ; a < n; a++)
{
	printf("%d", va_arg(names, int));

	if (separator != NULL && a != n - 1)
		printf("%s", separator);
}
	printf("\n");
va_end(names);
}
