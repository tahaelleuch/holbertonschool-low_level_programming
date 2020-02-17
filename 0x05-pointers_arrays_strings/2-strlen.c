#include "holberton.h"
/**
 * _strlen - returns the length of a string.
 * @s: char to define the length of the string
 * Return: the lenth of the string
*/

int _strlen(char *s)
{
	int i;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
