#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read the text file and print it to STDOUT.
 * @filename: the name of the text file being read
 * @letters: the number of letters to be read
 * Return: Return  w-, the actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t t = 0;
	char *buf;
	ssize_t a;
	ssize_t fd;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	a = read(fd, buf, letters);
	t = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (a);
}
