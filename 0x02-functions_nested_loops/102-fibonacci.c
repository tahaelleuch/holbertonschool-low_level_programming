#include <stdio.h>
/**
 * main - block
 * Description: print the 50 Fibonacci numbers, starting with 1 and 2
 * Return: 0 always
*/
int main(void)
{
	long int a = 1;
	long int b = 2;
	long int c;
	int i;

	printf("%ld, ", a);
	printf("%ld, ", b);
	for (i = 0; i < 50; i++)
	{
		c = a + b;
		if (i == 49)
			printf("%ld", c);
		else
			printf("%ld ,", c);
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}

