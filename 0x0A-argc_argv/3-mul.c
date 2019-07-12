#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - print my name
 * @argc: size
 * @argv: characters
 * Return: always 0.
 */

int main(int argc, char* argv[])
{
	int i, mul= 1;

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			mul = mul * atoi(argv[i]);
		}
		printf("%d\n", mul);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
