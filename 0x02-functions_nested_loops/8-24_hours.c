#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

void jack_bauer(void)
{
	int a, b, c, d;
	int f = 9;

	for ( a = 0; a <= 2; a++ )
	{
	for ( b = 0; b <= f; b++ )
	{
	for ( c = 0; c <= 5; c++ )
	{
	for ( d = 0; d <= 9; d++ )
	{
		_putchar (a + '0');
		_putchar (b + '0');
		_putchar (':');
		_putchar (c + '0');
		_putchar (d + '0');
		_putchar ('\n');
	}
	}
	if ( a == 2 || c == 5 || d == 9 )
		f = 3;
	}
	}
}
