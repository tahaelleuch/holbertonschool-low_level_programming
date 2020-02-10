#include <stdio.h>
#include "holberton.h"
/**
 * main - check the code for Holberton School students.
 *
 * Return: 1 is lowercase 0 is upercase.
 */
int print_sign(int n)
{

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
                _putchar('0');
		return (0);
	}

}
