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

	for (i = 0; i < (size * size); i = i + (size + 1))
	{
		sumleft = sumleft + a[i];
	}
	for (i = 0; i < (size * size) - size; j = j + (size - 1))
	{
		sumright = sumright + a[j];
	}
	printf("%d, %d\n", sumleft, sumright);
}
