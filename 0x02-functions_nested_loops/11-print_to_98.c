#include <stdio.h>
#include "holberton.h"

/**
 * print_to_98 - check the code for Holberton School students.
 *
 * @n: numbers for
 */

void print_to_98(int n)
{
	int a;

	if (n > 98)
	{
		for (a = n; a >= 98; a--)
		{
			printf("%d", a);
			if (a != 98)
			{
				printf(", ");
			}
		}
		printf("\n");
	}
	else if (n < 98)
	{
		for (a = n; a <= 98; a++)
		{
			printf("%d", a);
			if (a != 98)
			{
				printf(", ");
			}
		}
		printf("\n");
	}
	else
	{
		printf("%d\n", n);
	}
}
