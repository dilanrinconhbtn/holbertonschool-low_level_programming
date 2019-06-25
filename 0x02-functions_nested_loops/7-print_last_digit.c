#include "holberton.h"
/**
 * print_last_digit - print last digit of a number
 * @z: comparation for do the absolute
 * Return: variable z with last digit.
 */
int print_last_digit(int z)
{
	z = z % 10;
	if (z < 0)
	{
		z = z * (-1);
	}
	_putchar('0' + z);
	return (z);
}
