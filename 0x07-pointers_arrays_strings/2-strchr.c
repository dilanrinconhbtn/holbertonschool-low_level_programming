#include "holberton.h"

/**
 * *_strchr - check the code for Holberton School students.
 * @s: string s
 * @c: character
 * Return: NULL.
 */

char *_strchr(char *s, char c)
{
	for (;; s++)
	{
		if (*s == c)
		{
			return (s);
		}
		if (!*s)
		{
			return (0);
		}
	}
	return (0);
}
