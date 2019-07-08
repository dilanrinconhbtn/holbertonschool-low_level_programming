#include "holberton.h"

/**
 * *_memset - memset function
 * @s: value to compare
 * @b: b
 * @n: bytes
 * Return: s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *pointer = s;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*pointer = b;
		pointer++;
	}
	return (s);
}
