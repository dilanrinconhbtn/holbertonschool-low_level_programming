#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
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
