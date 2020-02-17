#include "holberton.h"
/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: char to print
 * Return: 0 Always
*/

void puts_half(char *str)
{
	int i, j, n, k;

	i = 0;
	while (str[i] != '\0')
		i++;
	if (i % 2 == 0)
		n = i / 2;
	else
		n = (i - 1) / 2;
	j = i - n;
	for (k = j; k < i; k++)
	{
		_putchar(str[k]);
	}
	_putchar('\n');
}
