#include "holberton.h"
/**
 * times_table - prints times table
 *
 * Return: Always 0.
 */
void times_table(void)
{
	int i;
	int j;
	int k;
	int m;
	int n;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (((i * j) + '0') < 58)
			{
				_putchar((j * i) + '0');
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else
			{
				k = i * j;
				m = k % 10;
				n = k / 10;
				_putchar(n + '0');
				_putchar(m + '0');
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

