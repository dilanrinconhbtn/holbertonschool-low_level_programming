#include "holberton.h"
#include <stdio.h>

/**
 * *rot13 - check the code for Holberton School students.
 * @text: text to compare
 * Return: text.
 */
char *rot13(char *text)
{
	char alph[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char abet[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;

	i = 0;
	while (text[i] != '\0')
	{
		for (j = 0; j <= 51; j++)
		{
			if (text[i] == alph[j])
			{
				text[i] = abet[j];
				break;
			}
		}
		i++;
	}
	return (text);
}
