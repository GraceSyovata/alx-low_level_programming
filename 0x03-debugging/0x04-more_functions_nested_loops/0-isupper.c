#include "main.h"
#include <ctype.h>

/**
 * _isupper - to check is alpabet is upper case or not
 *@c: the character to be checked
 * Return: 1 if is upper case and 0 if is not upper case
 */

int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
	{
		return (1);
	}
	else
		return (0);
}
