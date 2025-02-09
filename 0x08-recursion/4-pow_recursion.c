#include "holberton.h"

/**
 * _pow_recursion - check the code for Holberton School students.
 * @x: vale of power
 * @y: times of power
 * Return: Always 0.
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (_pow_recursion(x, y - 1) * x);
	}
}
