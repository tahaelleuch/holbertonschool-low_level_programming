#include <stdio.h>

/**
 * main - print fibonacci under 4 million
 *
 * Return: always 0
 */

int main(void)
{
	long int a = 1;
	long int b = 2;
	long int c;
	long int sum = 2;

	c = a + b;
	while (c < 4000000)
	{
		if (c % 2 == 0)
			sum = sum + c;
		a = b;
		b = c;
		c = a + b;
	}
	printf("%ld\n", sum);
	return (0);
}
