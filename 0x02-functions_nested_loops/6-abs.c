#include "holberton.h"

/**
 * _abs: geting the absolute
 *
 * @n: integer to get the absolute
 * Return: the absolute vaule of @n
 */
int _abs(int n)
{

	if (n < 0)
		return (-n);
	else
		return (n);

}
