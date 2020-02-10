#include <stdio.h>
#include "holberton.h"
/**
 * main - check the code for Holberton School students.
 *
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

