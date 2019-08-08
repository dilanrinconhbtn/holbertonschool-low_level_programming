#include "holberton.h"

/**
 * print_binary - check the code for Holberton School students.
 * @n: number
 * Return: Always 0.
 */

void print_binary(unsigned long int n)
{
	int i, j = 0, result;
	unsigned long int k;

	if (n == 0)
		_putchar('0');
	k = n;
	while (k != 0)
	{
		k = k >> 1;
		j++;
	}
	for (i = j - 1; i >= 0; i--)
	{
		result = n >> i;
		if (result & 1)
			_putchar('1');
		else
			_putchar('0');
	}
}
