#include "holberton.h"
#include <stdio.h>

/**
 * reverse_array - check the code for Holberton School students.
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */

void reverse_array(int *a, int n)
{
	int i, change;

	for (i = 0; i < (n / 2); i++)
	{
		change = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = change;
	}
}
