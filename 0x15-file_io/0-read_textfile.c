#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - this will check and read text file print to STDOUT.
 * @filename: this is the txt file being read.
 * @letters: this will be no. of letters to be read.
 * Return: w- exact bytes read and outputed
 *        0 in the event of  function failure or null file.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);
	free(buf);
	close(fd);
	return (w);
}
