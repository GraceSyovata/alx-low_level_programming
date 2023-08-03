#include "main.h"
#include <unistd.h>
/**
*GraceFile
 * _putchar - writes the character c to stdout
 * @c: The char to print
 *
 * Return: One on being successeful.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

