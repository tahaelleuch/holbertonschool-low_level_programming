#include "holberton.h"
/**
 * _memset -  fills memory with a constant byte
 * @s: char s
 * @b: char b
 * @n: unsigned int
 * Return: 0 Always
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
