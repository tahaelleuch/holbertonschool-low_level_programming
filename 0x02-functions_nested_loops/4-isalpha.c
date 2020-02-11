#include "holberton.h"
/**
 * _isalpha - returns 1 if it's a latter , 0 if not
 *
 * @c: character to check for the letter
 * Return: 1 is lowercase 0 is upercase.
 */
int _isalpha(int c)
{

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}

}

