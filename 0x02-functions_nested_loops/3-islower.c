#include "holberton.h"

/**
 * _islower - check for lowercase character.
 * @c: give a number from another function
 * Return: 1 if c is between a to z.
 * return 0 if is outside a to z.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
