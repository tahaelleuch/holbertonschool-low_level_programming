#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
*/
int main(void)
{

	int a = 48;

	while (a < 58)
	{
		putchar(a);
		if (a < 57)
		{
			putchar(44);
			putchar(' ');
		}
		a++;
	}
	putchar('\n');

	return (0);
}
