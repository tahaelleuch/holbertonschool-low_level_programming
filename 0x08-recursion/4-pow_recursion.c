#include "holberton.h"
/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: int
 * @y: int
 * Return: int the raised value
*/
int _pow_recursion(int x, int y)
{
	int a;

	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y > 0)
	{
		a = x * _pow_recursion(x, y - 1);
		return (a);
	}
	return (0);
}
