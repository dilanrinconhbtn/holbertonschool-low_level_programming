#include <stdio.h>

/**
 * number - check the code for Holberton School students.
 * @n: sqrt number
 * @y: number
 * Return: Always 0.
 */

int number(int n, int y)
{
	if (y * y == n)
	{
		return (y);
	}
	else if (y * y < n)
	{
		return (number(n, y + 1));
	}
	else
	{
		return (-1);
	}
}

/**
 * _sqrt_recursion - function
 * @n: number
 * Return: n
 */

int _sqrt_recursion(int n)
{
	return (number(n, 0));
}
