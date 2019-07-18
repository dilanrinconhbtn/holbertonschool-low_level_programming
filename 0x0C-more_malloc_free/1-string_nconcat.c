#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - check the code for Holberton School students.
 * @s1: string1
 * @s2: string2
 * @n: Bytes
 * Return: Always 0.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, count = 0, count2 = 0;
	char *str;

	while (s1[i] != '\0')
	{
		i++;
		count++;
	}
	while (s2[j] != '\0')
	{
		j++;
		count2++;
	}
	if (n >= count2)
	{
		n = count2 + 1;
	}
	str = (char *)malloc((count + n + 1) * sizeof(char));
	if (str == NULL)
	{
		free(str);
		return (0);
	}
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
		{
			str[i] = s1[i];
		}
		for (j = 0; j < n; j++)
		{
			str[i + j] = s2[j];
		}
		str[i + j] = '\0';
		return (str);
	}
}
