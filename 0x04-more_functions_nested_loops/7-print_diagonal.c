#include "holberton.h"

/**
 * print_line - check the code for Holberton School students.
 * @n: num to compare
 * Return: Always 0.
 */

void print_diagonal(int n)
{
	int a;
	int b;

	for (a = 0; a <= n; a++)
	{
		for (b = 0; b <= a; b++)
		{
			if (a == b)
			{
				_putchar(' ');
			}
			if (b == n)
			{
				_putchar('\\');
			}
		}
		_putchar('\n');
	}
}
