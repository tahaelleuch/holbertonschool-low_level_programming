#include "holberton.h"
/**
 * read_textfile - prints it to the POSIX standard output
 * @filename: the file to print
 * @letters: number of letters
 * Return: number of letters
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f, len, wr;
	char *buf;

	if (filename == NULL)
		return (0);
	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);
	buf = malloc(sizeof(char) * (letters));
	if (buf == NULL)
		return (0);
	len = read(f, buf, letters);
	if (len == -1)
		return (0);
	wr = write(STDOUT_FILENO, buf, len);
	free(buf);
	close(f);
	if (wr != len)
		return (0);
	return (len);
}
