#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
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
			if(text[i] >= 'a' && text[i] <= 'z' && text[i - 1] == signos[j] )
			{
				text[i] = text[i] - 32;
			}
		}
		i++;
	}
	return (text);
}
