#include "holberton.h"

/**
 * print_triangle - check the code for Holberton School students.
 * @size: size of triangle
 * Return: Nothing.
 */

void print_triangle(int size)
{
	int a, b;
	if (size <= 0)
		_putchar('\n');

	else
	{
		for (a = 0; a < size; a++)
		{
			for (b = size; b > a; b--)
			{
				if (b != size)
					_putchar(' ');
			}
			for (b = 0; b <= a; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	
}
