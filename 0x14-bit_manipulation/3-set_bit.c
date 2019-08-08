#include "holberton.h"

/**
 * set_bit - check the code for Holberton School students.
 * @n: number
 * @index: amount;
 * Return: Always 0.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x = 1;

	if (index > 64)
		return (-1);
	x = x << index;
	*n = *n + x;
	return (1);
}
