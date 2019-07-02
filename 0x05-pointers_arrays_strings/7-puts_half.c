#include "holberton.h"

/**
 * puts_half - check the code for Holberton School students.
 * @str: variable of main
 * putchar str.
 */

void puts_half(char *str)
{
	int i, div;
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	div = len / 2;
	for (i = div; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
