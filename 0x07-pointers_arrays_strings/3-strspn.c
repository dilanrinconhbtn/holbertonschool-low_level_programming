#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

unsigned int _strspn(char *s, char *accept)
{
	int n = 0, j, i;

	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if(accept[i] == s[j])
			{
				if (j >= n)
				{
					n = j + 1;
				}
				break;
			}
		}
		i++;
	}
	return (n);
}
