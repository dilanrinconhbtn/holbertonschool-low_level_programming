#include "holberton.h"

/**
 * binary_to_uint - check the code for Holberton School students.
 * @b: string
 * Return: Always 0.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, temp = 1;
	int i, counter = 0;

	if (b == NULL)
		return (0);
	while (b[counter] != '\0')
	{
		counter++;
	}
	for (i = (counter - 1); i >= 0; i--)
	{
		if (b[i] == '0' || b[i] == '1')
		{
			if (b[i] == '1')
			{
				num = num + temp;
			}
			temp = temp * 2;
		}
		else
		{
			num = 0;
			return (num);
		}
	}
	return (num);
}
