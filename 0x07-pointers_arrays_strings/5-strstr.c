#include "holberton.h"

/**
 * *_strstr - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

char *_strstr(char *haystack, char *needle)
{
	int j = 0, i = 0, needleng = 0, temp = 0, start = 0;

	while (needleng != 0)
	{
		needleng++;
	}
	while (needle[i] != '\0')
	{
		while (haystack[j] != '\0')
		{
			if (haystack[j] == needle[i])
			{
				i++;
				j++;
				temp++;
				if (temp == needleng)
				{
					start = j - needleng;
					break;
				}
			}
			else
			{
				temp = 0;
				i = 0;
				j++;
			}
		}
		break;
	}
	if (temp == needleng)
	{
		return (haystack + start);
	}
	else
	{
		return (0);
	}
}
