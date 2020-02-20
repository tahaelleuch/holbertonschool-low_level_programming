#include "holberton.h"
/**
 * _strcmp - compares two strings
 * @s1: char 1
 * @s2: char 2
 * Return: int the difference
*/
int _strcmp(char *s1, char *s2)
{
	int i;
	int res;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i]; i++)
		;
	res = s1[i] - s2[i];
	return (res);
}
