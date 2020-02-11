#include <stdio.h>
/**
 * main - block
 * Description: print the 50 Fibonacci numbers, starting with 1 and 2
 * Return: 0 always
*/
int main(void)
{
	int a = 1;
	int b = 2;
	int c;
	int i;

	printf("%d", a);
	printf("%d", b);
	for (i = 0; i < 50; i++)
	{
		c = a + b;
		printf("%d", c);
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}

