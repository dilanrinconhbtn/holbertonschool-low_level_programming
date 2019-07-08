#include "holberton.h"

/**
 * *_strchr - check the code for Holberton School students.
 * @s: string s
 * @c: character
 * Return: NULL.
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return ('\0');
}
