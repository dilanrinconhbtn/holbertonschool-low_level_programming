#include "holberton.h"

/**
 * print_rev - check the code for Holberton School students.
 *
 * print rev.
 */

void print_rev(char *s)
{
	int count = 0, i;
	char *word = s;

	while (*word != '\0')
	{
		_putchar(*word);
		word++;
		count++;
	}
	_putchar('\n');
	i = count - 1;
	while (i >= 0)
	{
		_putchar(*(s + i));
		i--;
	}
	_putchar('\n');
}
