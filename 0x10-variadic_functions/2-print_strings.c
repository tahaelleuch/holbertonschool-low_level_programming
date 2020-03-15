#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - function that prints strings
 * @separator: the separator of the string
 * @n: number of arguments
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list valist;

	va_start(valist, n);
	for (i = 0; i < n; i++)
	{
		if (va_arg(valist, char *) == NULL)
			printf("(nil)");
		else
			printf("%s", va_arg(valist, char *));
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(valist);
}
