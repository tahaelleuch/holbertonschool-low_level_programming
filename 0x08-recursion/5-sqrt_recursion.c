#include "holberton.h"
/**
 * get_the_sqrt - check for and get the sqrt with a compteur
 * @n: int to check
 * @i: int compteur
 * Return: int the sqrt
*/
int get_the_sqrt(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i <= n)
		return (get_the_sqrt(n, i + 1));
	else
		return (-1);
}
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: int to get the square root
 * Return: the square root
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (get_the_sqrt(n, 2));
}
