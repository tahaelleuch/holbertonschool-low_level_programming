#include "holberton.h"

/**
 * print_numbers: print the numbers
 *
 * Return: 0 always
*/

void print_numbers(void)
{

	int i;

	for (i = '0'; i <= '9'; i++)
		_putchar(i);
	_putchar('\n');
}
