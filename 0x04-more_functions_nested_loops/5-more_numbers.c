#include "holberton.h"

/**
 * more_numbers: prints 10 times the numbers, from 0 to 14
 *
 * Return: Allways 0
*/

void more_numbers(void)
{

	int i;
	int a;
	int b;
	int j;

	for (j = 0; j < 10; j++)
	{
		i = 0;
		while (i < 15)
		{
			a = i / 10;
			b = i % 10;
			if (i >= 10)
				_putchar(a + '0');
			_putchar(b + '0');
			i++;
		}
		_putchar('\n');
	}
}

