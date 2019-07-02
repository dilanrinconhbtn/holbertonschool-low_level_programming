#include "holberton.h"

/**
 * puts_half - check the code for Holberton School students.
 * @str: variable of main
 * putchar str.
 */

void puts_half(char *str)
{
	int i;
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	if (len % 2 != 0)
	{
		for (i = ((len - 1) / 2); i <= len; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = (len / 2); i < len; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
