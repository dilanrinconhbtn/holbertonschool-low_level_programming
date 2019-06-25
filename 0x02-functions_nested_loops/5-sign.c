#include "holberton.h"

/**
 * print_sign - check the code for Holberton School students.
 * @n: character to compare
 * Return: 0, 1, -1.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
