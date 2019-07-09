#include "holberton.h"

/**
 * print_diagsums - check the code for Holberton School students.
 * @a: data
 * @size: size of array
 * Return: No.
 */

void print_diagsums(int *a, int size)
{
	int i, sumright = 0, sumleft = 0;

	for (i = 0; i < (size * size);)
	{
		sumleft = sumleft + a[i];
		i = i + size + 1;
	}
	for (i = 0; i < (size * size) - size;)
	{
		i = i + size - 1;
		sumright = sumright + a[i];
	}
	printf("%d, %d\n", sumleft, sumright);
}
