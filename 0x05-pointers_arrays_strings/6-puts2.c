#include "holberton.h"
/**
 * puts2 - prints every other character of a string
 * @str: char to print half of it
 * Return: 0 Always
*/

void puts2(char *str)
{
	int i = 0;
	int j = 0;

	while (str[i] != '\0')
		i++;
	while (j < i)
	{
		_putchar(str[j]);
		j = j + 2;
	}
	_putchar('\n');
}
