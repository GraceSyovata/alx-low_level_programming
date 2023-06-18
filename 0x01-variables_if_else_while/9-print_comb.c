#include <stdio.h>
/**
 * main - Entry point
 * Description: prints all possible combinations of single-digit numbers
 * Return: Always 0 (success)
 */

int main(void)
{
	int b;

	for (b = 48; b <= 57; b++)
	{
		putchar(b);
		if (b == 57)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
