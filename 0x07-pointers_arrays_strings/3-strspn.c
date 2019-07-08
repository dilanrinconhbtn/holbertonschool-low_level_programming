#include "holberton.h"

/**
 * _strspn - check the code for Holberton School students.
 * @s: string to compare
 * @accept: string ref
 * Return: n.
 */

unsigned int _strspn(char *s, char *accept)
{
	int n = 0, j, i;

	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (accept[i] == s[j])
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
