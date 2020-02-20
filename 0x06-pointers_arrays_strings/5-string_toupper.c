#include "holberton.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @c: char to make uper case
 * Return: upper case char
*/
char *string_toupper(char *c)
{
	int i = 0;
	int j;

	while (c[i] != '\0')
		i++;
	for (j = 0; j < i; j++)
	{
		if (c[j] >= 'a' && c[j] <= 'z')
			c[j] = c[j] - 32;
	}
	return (c);
}
