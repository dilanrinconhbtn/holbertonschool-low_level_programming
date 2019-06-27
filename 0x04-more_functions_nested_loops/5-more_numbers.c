#include "holberton.h"

/**
 * more_numbers - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

void more_numbers(void)
{
	int a, b, last, first;

	for (b = 0; b <= 9; b++)
	{
	for (a = 0; a <= 14; a++)
	{
		last = a % 10;
		first = a / 10;
		if (a >= 10)
		{
			_putchar(first + '0');
		}
		_putchar(last + '0');
	}
	_putchar('\n');
	}
}
