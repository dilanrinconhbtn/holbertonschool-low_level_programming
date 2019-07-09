#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - print sum of diag of the matrix.
 * @a: array of data
 * @size: size of array
 * Return: No.
 */

void print_diagsums(int *a, int size)
{
	int i, j, sumright = 0, sumleft = 0;

	for (i = 0; i <= (size * size); i = i + (size + 1))
	{
		sumleft = sumleft + a[i];
	}
	for (j = (size - 1); j < (size * size) - 1; j = j + (size - 1))
	{
		sumright = sumright + a[j];
	}
	printf("%d, %d\n", sumleft, sumright);
}
