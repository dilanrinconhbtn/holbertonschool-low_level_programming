#include "holberton.h"
#include <stdio.h>

/**
 * _atoi - convert a string to an integer
 * @s: string
 * Return: integer
 */

int _atoi(char *num)
{
	unsigned int x = 0;
	int i = 0;
	int neg = 1;

	while (num[i] != '\0' && (num[i] < '0' || num[i] > '9'))
	{
		if (num[i] == '-')
		{
			neg = neg * -1;
		}
		i++;
	}
	while (num[i] != '\0' && num[i] >= '0' && num[i] <= '9')
	{
		x = (x * 10) + (num[i] - '0');
		i++;
	}
	return (x * neg);
}
