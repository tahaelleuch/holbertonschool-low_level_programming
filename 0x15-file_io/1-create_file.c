#include "holberton.h"
#include <string.h>
/**
 * create_file - function that creates a file
 * @filename: the name of the file
 * @text_content: the content of the file
 * Return: 1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	int f, len;

	if (filename == NULL)
		return (-1);
	f = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (f == -1)
		return (-1);
	if (text_content != NULL)
		len = write(f, text_content, strlen(text_content));
	close(f);
	if (len == -1)
		return (-1);
	return (1);
}
