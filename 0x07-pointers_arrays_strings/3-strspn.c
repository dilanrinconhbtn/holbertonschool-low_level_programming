#include "holberton.h"

/**
 * _strspn - check the code for Holberton School students.
 * @s: string to compare
 * @accept: string ref
 * Return: n.
 */

unsigned int _strspn(char *s, char *accept)
{
	int j, i;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				break;
			}
		}
		if (!accept[j])
		{
			break;
		}
	}
	return (i);
}
