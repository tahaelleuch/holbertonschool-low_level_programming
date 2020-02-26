#include "holberton.h"
/**
 * _strlen_recursion - returns the length of a strin
 * @s: char to get the length
 * Return: int the length
*/
int _strlen_recursion(char *s)
{
	int a = 0;

	if (s[0] == '\0')
		return (a);
	a = 1 + _strlen_recursion(s + 1);
	return (a);
}
