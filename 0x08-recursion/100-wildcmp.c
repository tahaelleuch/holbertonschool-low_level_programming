#include "holberton.h"
/**
 * str_test - check if s1 and s2 are the same
 * @s1: char 1
 * @s2: char 2
 * @i: int
 * @j: int
 * Return: int 1 or 0
*/
int str_test(char *s1, char *s2, int i, int j)
{
	if (s1[i] == '\0' && s2[j] == '\0')
		return (1);
	if (s1[i] == s2[j])
		return (str_test(s1, s2, i + 1, j + 1));
	if (s1[i] == '\0' && s2[j] == '*')
		return (str_test(s1, s2, i, j + 1));
	if (s2[j] == '*')
		return (str_test(s1, s2, i + 1, j) || str_checker(s1, s2, i, j + 1));
	return (0);
}
/**
 * wildcmp - compares two strings
 * @s1: char 1
 * @s2: char 2
 * Return: 1 if identical 0 if not
*/
int wildcmp(char *s1, char *s2)
{
	return (str_test(s1, s2, 0, 0));
}
