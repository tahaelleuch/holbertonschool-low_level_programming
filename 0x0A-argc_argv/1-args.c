#include <stdio.h>
/**
 * main - block
 * @argc: number of arguments passed to the function
 * @argv: argument vector of pointers to strings
 * Return: 0 Alwyas
*/
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
