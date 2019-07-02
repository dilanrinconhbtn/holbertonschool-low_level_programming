#include "holberton.h"

/**
 * swap_int - check the code for Holberton School students.
 * @a: number one for changing
 * @b: numbers for changing
 * change values a o.
 */

void swap_int(int *a, int *b)
{
	int z;

	z = *a;
	*a = *b;
	*b = z;
}
