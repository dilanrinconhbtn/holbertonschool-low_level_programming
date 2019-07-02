#include "holberton.h"

/**
 * *_strcpy - check the code for Holberton School students.
 * @dest: destino
 * @src: source
 * Return: start.
 */

char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
