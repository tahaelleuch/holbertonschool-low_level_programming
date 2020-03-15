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
	char *c;
	va_list valist;

	va_start(valist, n);
	for (i = 0; i < n; i++)
	{
		c = va_arg(valist, char *);
		if (c != NULL)
			printf("%s", c);
		else
			printf("(nil)");
		if (i < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(valist);
}
