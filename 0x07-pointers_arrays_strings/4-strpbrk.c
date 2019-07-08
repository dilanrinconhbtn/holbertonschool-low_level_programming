#include "holberton.h"

/**
 * *_strpbrk - check the code for Holberton School students.
 * @s: pointer
 * @accept: string
 * Return: Always 0.
 */

char *_strpbrk(char *s, char *accept)
{
	int j, i;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return ('\0');
}
