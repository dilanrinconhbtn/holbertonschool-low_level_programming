#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - check the code for Holberton School students.
 * @s1: string 1
 * @s2: string 2
 * Return: Always 0.
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, size1 = 0, size2 = 0;
	char *s;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[size1] != '\0')
	{
		size1++;
	}
	while (s2[size2] != '\0')
	{
		size2++;
	}
	s = (char *)malloc((size1 + size2 + 1) * sizeof(char));
	if (s == NULL)
	{
		return ('\0');
	}
	for (i = 0; s1[i] != 0; i++)
	{
		s[i] = s1[i];
	}
	for (j = 0; j <= (size2 + 1); j++)
	{
		s[i + j] = s2[j];
	}
	return (s);
}
