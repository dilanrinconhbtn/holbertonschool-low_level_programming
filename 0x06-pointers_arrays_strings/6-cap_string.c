#include "holberton.h"
#include <stdio.h>

/**
 * *cap_string - check the code for Holberton School students.
 * @text: string to compare
 * Return: text.
 */

char *cap_string(char *text)
{
	int i, j;
	int signos[12] = {9, 10, 32, 33, 40, 41, 44, 46, 59, 63, 123, 125};

	i = 0;
	while (text[i] != '\0')
	{
		for (j = 0; j <= 11; j++)
		{
			if (text[i] >= 'a' && text[i] <= 'z' && text[i - 1] == signos[j])
			{
				text[i] = text[i] - 32;
			}
			if (text[0] >= 'a' && text[0] <= 'z')
			{
				text[0] = text[0] - 32;
			}
		}
		i++;
	}
	return (text);
}
