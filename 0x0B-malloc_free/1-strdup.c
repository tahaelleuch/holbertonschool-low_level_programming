#include "holberton.h"
#include <stdlib.h>
/**
 * _strdup - copy of the string
 * @str: string to copy
 * Return: char
*/
char *_strdup(char *str)
{
	int i = 1, j;
	char *c;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;
	c = malloc(i * sizeof(char));
	if (c == NULL)
		return (NULL);
	for (j = 0; j < i; j++)
		c[j] = str[j];
	return (c);
}
