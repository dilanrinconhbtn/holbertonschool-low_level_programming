#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - print my name
 * @argc: size
 * @argv: characters
 * Return: always 0.
 */

int main(int argc, char *argv[])
{
	int i, cent = 0, x;
	int change[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	x = atoi(argv[1]);
	if (x < 0)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		for (i = 0; i < 5; i++)
		{
			if (x >= change[i])
			{
				x = x - change[i];
				cent = cent + 1;
				if (x >= change[i])
				{
					i--;
				}
				else if (x == 0)
				{
					break;
				}
			}
		}
		printf("%d\n", cent);
		return (0);
	}
}
