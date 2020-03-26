#include "holberton.h"
/**
 * print_binary - function that prints a number in binary
 * @n: unsigned int to print in base 2
*/
void print_binary(unsigned long int n)
{
	int i = 0, m;
	unsigned long int u;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	u = n;
	while (u != 0)
	{
		i++;
		u = u >> 1;
	}
	i--;
	while (i >= 0)
	{
		m = n >> i;
		if (m & 1)
			_putchar('1');
		else
			_putchar('0');
		i--;
	}
}
