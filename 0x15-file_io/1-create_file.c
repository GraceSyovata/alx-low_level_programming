#include "main.h"
/**
 * create_file - this will help create a file.
 * @filename: points to the fine name which is to be made.
 * @text_content: A pointer to point to the string to be written on the file.
 *
 * Return: incase of the function failure, the output should be - -1.
 *         else - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, text_content, len);

	if (fd == -1 || w == -1)
		return (-1);

	close(fd);

	return (1);
}

