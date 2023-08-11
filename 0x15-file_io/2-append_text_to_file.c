#include "main.h"
/**
 * append_text_to_file - attaches txt file at the halt of the file.
 * @filename: points to the title of the file.
 * @text_content: this is s string to append at the file conclusion.
 *
 * Return: on the function failure, the name of the fille is Null - -1.
 *         incase the file misses, the operator is denied write rights - -1.
 *         else - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
