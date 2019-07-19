#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *_realloc - prints buffer in hexa
 * @ptr: pointer
 * @old_size: size old
 * @new_size: size new
 * Return: Nothing.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int old = 0, new = 0;
	char *newptr;

	newptr = ptr;
	if (newptr == NULL)
		free(newptr);

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		newptr = malloc(new_size);
	}
	if (new_size > old size)
	{
		newptr = malloc(new_size);
	}
	for (i = 0; i < oldsize; i++)
	{
		newptr[i] = ptr[i];
	}

	return (newptr);
}
