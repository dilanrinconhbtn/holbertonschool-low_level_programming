#include "holberton.h"

/**
 * flip_bits - check the code for Holberton School students.
 * @n: number
 * @m: number
 * Return: Always 0.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int counter = 0, num;

	num = n ^ m;
	while (num != 0)
	{
		if (num & 1)
			counter++;
		num = num >> 1;
	}
	return (counter);
}
