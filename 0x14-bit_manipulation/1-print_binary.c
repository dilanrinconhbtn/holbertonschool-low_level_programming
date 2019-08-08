#include "holberton.h"

/**
 * print_binary - check the code for Holberton School students.
 * @n: number
 * Return: Always 0.
 */

void print_binary(unsigned long int n)
{
	unsigned int pow = 1, temp = 1;

	if (n == 0)
		putchar ('0');
	while (n > 0)
	{
		while (n > pow)
		{
			pow = pow * 2;
			if (pow > 2)
				temp = temp * 2;
		}
		_putchar('1');
		n = n - temp;
		while (temp > n)
		{
			temp = temp >> 1;
			if (temp != 0)
				_putchar('0');
		}
	}
}
