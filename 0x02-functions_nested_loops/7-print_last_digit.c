#include "holberton.h"

/**
 * print_last_digit - print last digit
 *
 * Return: Always 0.
 */
int print_last_digit(int z)
{
	if ( z < 0 )
	{
		z = z * -1;
	}
	z=z%10;
	_putchar(z + '0');
	return (z);
}
