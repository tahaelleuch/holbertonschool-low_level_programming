#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - function that print numbers
 * @separator: char to separate numbers
 * @n: the number of arguments
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list valist;

	va_start(valist, n);
	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
		{
			printf("%d\n", va_arg(valist, int));
			break;
		}
		printf("%d%s", va_arg(valist, int), separator);
	}
	va_end(valist);
}
