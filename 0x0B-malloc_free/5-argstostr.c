#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - check the code for Holberton School students.
 * @ac: number of size
 * @av: value of array
 * Return: Always 0.
 */

char *argstostr(int ac, char **av)
{
	int i, j, k = 0, count = 0;
	char *arguments;

	if (ac == 0 || av == NULL)
	{
		return ('\0');
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != 0; j++)
		{
			count++;
		}
	}
	arguments = (char *)malloc((count + ac + 1) * sizeof(char));
	if (arguments == NULL)
	{
		free(arguments);
		return ('\0');
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != 0; j++, k++)
		{
			arguments[k] = av[i][j];
		}
		arguments[k] = '\n';
		k++;
	}
	return (arguments);
}
