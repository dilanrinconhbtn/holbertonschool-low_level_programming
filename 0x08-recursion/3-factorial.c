#include "holberton.h"

/**
 * factorial - check the code for Holberton School students.
 * @n: n factorial
 * Return: Always 0.
 */

int factorial(int n)
{
	if (n == 1)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
