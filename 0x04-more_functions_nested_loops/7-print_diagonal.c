#include "holberton.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character \ should be printed.
 * Return: 0 Always.
*/

void print_diagonal(int n)
{
	int i;
	int a;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			a = 0;
			while (a < i)
			{
				_putchar(' ');
				a++;
			}
		_putchar('\\');
		_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
