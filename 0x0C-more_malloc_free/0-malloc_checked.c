#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - check the code for Holberton School students.
 * @b: s
 * Return: nothing.
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *b2;

	b2 = malloc(b);
	if (b2 == NULL)
	{
		free(b2);
		exit(98);
	}
	else
	{
		return (b2);
	}
}
