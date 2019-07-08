#include "holberton.h"
#include <stdio.h>

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
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
