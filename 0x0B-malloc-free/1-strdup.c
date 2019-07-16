#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - check the code for Holberton School students.
 * @str: string of main
 * Return: new string.
 */

char *_strdup(char *str)
{
	int i, j, size = 0;
	char *new;

	if (str == NULL)
	{
		return ('\0');
	}
	while (str[i] != '\0')
	{
		i++;
		size++;
	}
	new = (char *)malloc(i * sizeof(char));
	for (j = 0; j < size; j++)
	{
		new[j] = str[j];
	}
	return (new);
}
