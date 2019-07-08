#include "holberton.h"

/**
 * *_memcpy - memories area
 * @dest: destine
 * @src: source
 * @n: bytes
 * Return: destine.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *destine = dest;
	char *source = src;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*destine = *source;
		destine++;
		source++;
	}
	return (dest);
}
