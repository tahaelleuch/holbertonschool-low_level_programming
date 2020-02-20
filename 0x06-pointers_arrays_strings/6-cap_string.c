
#include "holberton.h"
/**
 * cap_string - capitalizes all words of a string
 * @c: char to capitalize
 * Return: char @c capitalized
*/
char *cap_string(char *c)
{
	int i = 0;
	int j;

	if (c[0] >= 'a' && c[0] <= 'z')
		c[0] = c[0] - 32;
	while (c[i] != '\0')
		i++;
	for (j = 0; j < i; j++)
	{
		if (c[j] == '(' || c[j] == ')' || c[j] == '{' || c[j] == '}' || c[j] == ' ')
		{
			if (c[j + 1] >= 'a' && c[j + 1] <= 'z')
			{
				c[j + 1] = c[j + 1] - 32;
			}
		}
		if (c[j] == '!' || c[j] == '?' || c[j] == '"' || c[j] == '.')
		{
			if (c[j + 1] >= 'a' && c[j + 1] <= 'z')
				c[j + 1] = c[j + 1] - 32;
		}
		if (c[j] == '\t' || c[j] == '\n' || c[j] == ',' || c[j] == ';')
		{
			if (c[j + 1] >= 'a' && c[j + 1] <= 'z')
			{
				c[j + 1] = c[j + 1] - 32;
			}
		}
	}
	return (c);
}
