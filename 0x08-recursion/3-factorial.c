#include "holberton.h"
/**
 * factorial - returns the factorial of a given number.
 * @n: int number to get the factorial
 * Return: int the factorial
*/
int factorial(int n)
{
	int a = 1;

	if (n == 1)
		return (a);
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	if (n > 1)
	{
		a = n * factorial(n - 1);
		return (a);
	}
	return (5555);
}
