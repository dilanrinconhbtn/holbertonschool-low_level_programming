#include "holberton.h"
#include <stdio.h>

/**
 * _strlen - check the code for Holberton School students.
 * @s: number to compare
 * Return: Always 0.
 */

int _strlen(char *s)
{
	int count;

	while (*s != '\0')
	{
		count = count + 1;
		s++;
	}
	return (count);
}
