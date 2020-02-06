#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
*/
int main(void)
{

	int a = 48;
	int b = 47;

	while (a < 58 && b < 58)
	{
		b++;
		putchar(a);
		putchar(b);
		if (a < 58 && b < 58)
		{
			if (a == 57 && b == 57)
				break;
			putchar(44);
			putchar(' ');
		}
		if (b == 57)
		{
			a++;
			b = 48;
		}
	}
	putchar('\n');

	return (0);
}
