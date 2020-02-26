#include "holberton.h"
/**
 * _print_rev_recursion - function that prints a string in reverse.
 * @s: char to reverse
 * Return: void
*/
void _print_rev_recursion(char *s)
{
	if (s[0] == '\0')
		return;
	_print_rev_recursion(s + 1);
	_putchar(s[0]);
}