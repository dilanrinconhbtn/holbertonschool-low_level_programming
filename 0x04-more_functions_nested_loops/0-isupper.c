#include "holberton.h"
/**
 * _isupper - check the code for Holberton School students.
 * @c: character to compare
 * Return: 1 if is Upper, otherwise 0.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
