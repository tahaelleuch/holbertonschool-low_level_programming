#include "holberton.h"

/**
 * _isdigit - check if the input is a digit
 * @c: int to check if it's a digit
 *
 * Return: 1 if digit else 0
*/

int _isdigit(int c)
{

	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
