#include "holberton.h"

/**
 * _abs - check the code for Holberton School students.
 * @x: character to compare
 * Return: Always 0.
 */
int _abs(int x)
{
	if (x < 0)
	{
		x = x * -1;
		return (x);
	}
	else
	{
		return (x);
	}
}
