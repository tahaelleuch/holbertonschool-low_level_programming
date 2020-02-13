#include "holberton.h"

/**
 * _isupper: get the uppercase
 * @c int to check for the uppercase
 * Return: 1 if uppercase else 0;
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
