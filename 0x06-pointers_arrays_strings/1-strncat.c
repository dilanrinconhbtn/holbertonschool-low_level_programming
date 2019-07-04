#include "holberton.h"
#include <stdio.h>

/**
 * *_strncat - check the code for Holberton School students.
 * @dest: destin
 * @src: source
 * @n: number
 * Return: dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
