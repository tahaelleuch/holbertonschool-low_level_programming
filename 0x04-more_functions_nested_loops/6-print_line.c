#include "holberton.h"
#include <string.h>

/**
 * print_line: a function that draws a straight line in the terminal
 * @n: the number of times the character _ should be printed.
 * Return: 0 allways;
*/

void print_line(int n)
{
	int i = 1;
	int a = '_';

	if (n <= 0)
		n = i;
	while (i <= n)
	{
		if (i == n)
			a = '\n';
		putchar(a);
		i++;
	}
}
