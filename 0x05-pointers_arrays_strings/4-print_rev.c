#include "holberton.h"
/**
 * print_rev - prints a string in rev, followed by a new line, to stdout;
 * @c: the string to print
 * Return: 0 Always
*/

void print_rev(char *c)
{
	int i = 1;

	while (*c != '\0')
	{
		i++;
		c++;
	}
	while (i != 0)
	{
		_putchar(*c);
		i--;
		c--;
	}
	_putchar('\n');
}
