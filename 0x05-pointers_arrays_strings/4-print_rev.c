#include "holberton.h"
/**
 * print_rev - prints a string in rev, followed by a new line, to stdout;
 * @c: the string to print
 * Return: 0 Always
*/

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
