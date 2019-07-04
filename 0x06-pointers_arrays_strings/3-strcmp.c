#include "holberton.h"
#include <stdio.h>

/**
 * _strcmp - check the code for Holberton School students.
 * @s1: string 1
 * @s2: string 2
 * Return: rest.
 */

int _strcmp(char *s1, char *s2)
{
	int rest = 0;

	while (*s1 == *s2 && *s1 != 0 && *s2 != 0)
	{
		s1++;
		s2++;
	}
	rest = *s1 - *s2;
	return (rest);
}
