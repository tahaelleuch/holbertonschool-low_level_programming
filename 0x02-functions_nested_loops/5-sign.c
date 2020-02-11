#include "holberton.h"

/**
 * print_sign - check the signe of an integer  
 *
 * @i: integer to check the signe
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

