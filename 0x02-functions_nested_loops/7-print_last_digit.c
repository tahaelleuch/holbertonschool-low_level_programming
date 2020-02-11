#include "holberton.h"

/**
 * print_last_digit - the last digit
 *
 * @n: integer to get the last digit
 * Return the @last digit
 */
int print_last_digit(int n)
{
	int last;

	if (n < 0)
	{
		last = -1 * (n % 10);
		_putchar(last + '0');
		return (last);
	}
	else
	{
		last = n % 10;
		_putchar (last + '0');
		return (last);
	}
}
