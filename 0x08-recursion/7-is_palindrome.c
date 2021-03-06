#include "holberton.h"
/**
 * get_the_length - get the length of a string
 * @s: char
 * Return: int the length of the string
*/
int get_the_length(char *s)
{
	if (s[0] != '\0')
		return (1 + get_the_length(s + 1));
	return (0);
}

/**
 * palin - subfunction palinfrom
 * @s: char
 * @i: length of the string
 * @j: counter
 * Return: int
*/
int palin(char *s, int i, int j)
{
	if (s[i] == s[j])
		if (i > j / 2)
			return (1);
		else
			return (palin(s, i + 1, j - 1));
	else
		return (0);
}
/**
 * is_palindrome - chkeck for the palindrome
 * @s: char  to ckeck
 * Return: 1 if palindrome 0 if not
*/
int is_palindrome(char *s)
{
	int length = get_the_length(s);
	int counter = 0;

	return (palin(s, length - 1, counter));
}
