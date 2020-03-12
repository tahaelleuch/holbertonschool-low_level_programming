#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the opcodes of its own main function
 * @argc: counter
 * @argv: vector
 * Return: always O
*/
int main(int argc, char **argv)
{
	int n;

	if (argc != 2)
	{
		puts("Error\n");
		exit(1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		puts("Error\n");
		exit(2);
	}
	return (0);
}
