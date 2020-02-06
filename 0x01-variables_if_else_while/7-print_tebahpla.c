#include <stdio.h>
/**
 * main - Entry point
 * Description : using the function "putchar" to print all the aplhbaets
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar (ch);
		ch = ch - 1;
	}
	putchar ('\n');

	return (0);
}
