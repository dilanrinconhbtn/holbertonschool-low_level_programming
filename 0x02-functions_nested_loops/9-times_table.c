#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

void times_table(void)
{
	int a, b, r, l, f;
	for ( a = 0; a <= 9; a++ )
	{
	for ( b = 0; b <= 9; b++ )
	{
		r = a * b;
		l = r%10;
		f = r/10;
		if ( f != 0)
		{
			_putchar (',');
			_putchar (' ');
			_putchar (f + '0');
		}else if ( a == 0 || f == 0)
		{
			_putchar (l + '0');
		}
	}
	_putchar ('\n');
	}
}
