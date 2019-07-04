#include "holberton.h"
#include <stdio.h>

/**
 * leet - check the code for Holberton School students.
 * @text: text to compare
 * Return: text.
 */

char *leet(char *text)
{
	char letter[10] = "aAeEoOtTlL";
	char numbers[10] = "4433007711";
	int i, j;

	i = 0;
	while (text[i] != '\0')
	{
		for (j = 0; j <= 9; j++)
		{
			if (text[i] == letter[j])
			{
				text[i] = numbers[j];
			}
		}
		i++;
	}
	return (text);
}
