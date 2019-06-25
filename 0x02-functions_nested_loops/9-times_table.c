#include "holberton.h"

/**
 * times_table - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

void times_table(void)
{
	int a, b, r, l, f;

	for (a = 0; a <= 9; a++)
	{
	for (b = 0; b <= 9; b++)
	{
		r = a * b;
		f = r / 10;
		l = r % 10;
		if (b > 0)
		{
			if (r >= 10)
			{
				_putchar(' ');
				_putchar(f + '0');
				_putchar(l + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(l + '0');
			}
			if (b != 9)
			{
				_putchar(',');
			}
		}
		else
		{
			_putchar(l + '0');
			_putchar(',');
		}
	}
	_putchar ('\n');
	}
}
