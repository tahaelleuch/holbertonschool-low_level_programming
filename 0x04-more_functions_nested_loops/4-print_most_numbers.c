#include "holberton.h"

/**
 * print_numbers - print the numbers from 0 to 9 without 2 and 4
 *
 * Return: 0 always
*/

void print_most_numbers(void)
{

	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i == '2')
			i++;
		else if (i == '4')
			i++;
		_putchar(i);
	}
	_putchar('\n');
}
