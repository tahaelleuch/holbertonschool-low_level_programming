#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - function to sum all arguments
 * @n: number of parametrs
 * Return: int the sum of all parametres
*/
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list valist;

	va_start(valist, n);
	for (i = 0; i < n; i++)
		sum = sum + va_arg(valist, int);
	va_end(valist);
	return (sum);
}
