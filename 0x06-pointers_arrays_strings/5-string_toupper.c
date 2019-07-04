#include "holberton.h"
#include <stdio.h>

/**
 * *string_toupper - check the code for Holberton School students.
 *
 * Return: string.
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
		i++;
	}
	return (s);
}
