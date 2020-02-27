#include "holbeton.h"
/**
 * get_the_length - get the length of a string
 * @s: char
 * Return: int the length of the string
*/
int get_the_length(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
}

/**
 * palin - subfunction palinfrom
 * @s: char
 * @len: length of the string
 * @count: count
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
	int len = get_the_length(s);
	int count = 0;

	return (palin(s, len - 1, count));
}
