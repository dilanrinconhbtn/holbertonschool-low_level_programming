#include "holberton.h"

/**
 * clear_bit - check the code for Holberton School students.
 * @n: pointer
 * @index: amount to change
 * Return: Always 0.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x = 1;

	if (index > 64)
		return (-1);
	x = x << index;
	if (*n >= x)
	{
		*n = *n - x;
		return (1);
	}
	else
		return (-1);
}
