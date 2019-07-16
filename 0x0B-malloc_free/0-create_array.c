#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - prints buffer in hexa
 * @c: char to full memory
 * @size: the size of the memory to print
 *
 * Return: v.
 */

char *create_array(unsigned int size, char c)
{
	char *v;
	unsigned int i;

	if (size == 0)
	{
		return ('\0');
	}
	else
	{
		v = (char *)malloc(size * sizeof(char));
		for (i = 0; i < size; i++)
		{
			v[i] = c;
		}
	}
	return (v);
}
