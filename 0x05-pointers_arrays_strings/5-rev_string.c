#include "holberton.h"

/**
 * rev_string - reverses a string
 * @s: char to reverse
 * Return: 0 always
*/

void rev_string(char *s)
{
	int i, j;
	char a, b;

	i = 0;
	j = 0;
	while (s[i] != '\0')
		i++;
	i--;
	while (j < i)
	{
		a = s[j];
		b = s[i];
		s[j] = b;
		s[i] = a;
		i--;
		j++;
	}
}
