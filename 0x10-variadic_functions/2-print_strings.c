#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
* print_strings - prints strings
* @separator: string to be printed between strings
* @n:number of integers passed
*
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list names;
	unsigned int a;
	char *stri;

	va_start(names, n);

for (a = 0 ; a < n; a++)
{
	stri = va_arg(names, char *);
	if (stri == NULL)
		printf("(nil)");
	else
		printf("%s", stri);
	if (separator != NULL && a != n - 1)
		printf("%s", separator);
}
	printf("\n");
va_end(names);
}
