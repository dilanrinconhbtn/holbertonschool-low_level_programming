#include "holberton.h"

/**
 * get_bit - check the code for Holberton School students.
 * @n: number
 * @index: number 2
 * Return: Always 0.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 64)
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
