#include "holberton.h"
/**
 * close_files - func that make sure to close file
 * @f1: file 1 to close
 * @f2: file 2 to close
*/
void close_files(int f1, int f2)
{
	int close1, close2;

	close1 = close(f1);
	if (close1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f1);
		exit(100);
	}
	close2 = close(f2);
	if (close2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f2);
		exit(100);
	}
}
/**
 * main - copies the content of a file to another file
 * @argc: number of arguments
 * @argv: array
 * Return: 0 Always
*/
int main(int argc, char *argv[])
{
	int f1, f2, len1 = 1024, len2;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	f1 = open(argv[1], O_RDONLY);
	if (f1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	f2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (f2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to111 %s\n", argv[2]);
		exit(99);
	}
	while (len1 == 1024)
	{
		len1 = read(f1, buf, 1024);
		if (len1 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		len2 = write(f2, buf, len1);
		if (len1 != len2)
			len2 = -1;
		if (len2 == -1)
		{
		dprintf(STDERR_FILENO, "Error: Can't write to 222%s\n", argv[2]);
		exit(99);
		}
	}
	close_files(f1, f2);
	return (0);
}
