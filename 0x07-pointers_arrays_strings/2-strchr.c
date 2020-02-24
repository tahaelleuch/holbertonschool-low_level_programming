#include "holberton.h"
/**
 * _strchr - function that locates a char in string
 * @s: char the string
 * @c: char to locate in  a string
 * Return: 0 Alwyas
*/
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (0);
}
