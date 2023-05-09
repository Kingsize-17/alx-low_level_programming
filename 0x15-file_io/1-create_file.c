#include "main.h"

/**
 * create_file - This Creates a file.
 * @filename: The pointer to the name of the file to be created.
 * @text_content: A pointer to a string to be written to the file.
 *
 * Return: Return - -1 if the function fails, otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w, lin = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lin = 0; text_content[lin];)
			lin++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, text_content, lin);

	if (fd == -1 || w == -1)
		return (-1);

	close(fd);

	return (1);
}
