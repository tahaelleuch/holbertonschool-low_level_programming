#include "holberton.h"
/**
 * test_the_prime - test if the number is prime
 * @n: the number
 * @i: compteur
 * Return: 0 if not prime 1 if its a prime
*/
int test_the_prime(int n, int i)
{
	if (i == n)
		return (1);
	else if (n % i == 0)
		return (0);
	else
		return (test_the_prime(n, (i + 1)));
}
/**
 * is_prime_number - check the number is prime or not
 * @n: number to ckeck
 * Return: 1 if prime 0 if not
*/
int is_prime_number(int n)
{
	if (n > 1)
		return (test_the_prime(n, 2));
	else
		return (0);
}
