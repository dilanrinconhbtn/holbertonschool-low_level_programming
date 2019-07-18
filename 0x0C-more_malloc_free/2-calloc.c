#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *_calloc - prints buffer in hexa
 * @nmemb: amount of elements
 * @size: the size of the memory to print
 *
 * Return: call.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *call;

	if (nmemb == 0 || size == 0)
	{
		return ('\0');
	}
	call = malloc(nmemb * size);
	if (call == NULL)
	{
		free(call);
		return ('\0');
	}
	for (i = 0; i < (nmemb * size); i++)
	{
		call[i] = 0;
	}
	return (call);
}
