#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
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
