#include "holberton.h"

/**
 * print_last_digit - print last digit
 * @z: comparation for do the absolute
 * Return: Always 0.
 */
int print_last_digit(int z)
{
	z=z%10;
	if ( z < 0 )
	{
		z = z * -1;
	}
	_putchar(z + '0');
	return (z);
}
