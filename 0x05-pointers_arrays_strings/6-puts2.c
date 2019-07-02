#include "holberton.h"

/**
 * puts2 - check the code for Holberton School students.
 * @str: string to compare
 * is a void no return.
 */
void puts2(char *str)
{
	int i, len;

	while (str[len] != '\0')
	{
		len++;
	}
	i = 0;
	while (i < len)
	{
		if (i % 2 == 0)
		{
			_putchar(*(str + i));
		}
	i++;
	}
	_putchar('\n');
}
