#include "holberton.h"
#include <stdio.h>

/**
 * *_strncpy - check the code for Holberton School students.
 * @dest: destine
 * @src: source
 * @n: number of bytes
 * Return: dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
