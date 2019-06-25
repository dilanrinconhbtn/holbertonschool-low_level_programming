#include "holberton.h"
/**
 * add - check the code for Holberton School students.
 * @x:  characters to add
 * @y: character to add
 * Return: Always 0.
 */
int add(int x, int y)
{
	int f;
	int l;
	int r;

	r = x + y;
	l = r % 10;
	f = r / 10;
	if (r < 10)
	{
		_putchar (r + '0');
	}
	else
	{
		_putchar (f + '0');
	}
	return (l);
}
