#include "holberton.h"
#include <stdio.h>

/**
 * print_array - check the code for Holberton School students.
 * @a: name of array
 * @n: number of elements of the array to be printed
 * Return: Always 0.
 */

void print_array(int *a, int n)
{
	int i, final;

	final = n - 1;
	for (i = 0; i < n; i++)
	{
		if (i != final)
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d", a[i]);
		}
	}
	printf("\n");
}
