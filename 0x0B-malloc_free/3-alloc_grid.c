#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - prints a grid of integers
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: matrix v.
 */

int **alloc_grid(int width, int height)
{
	int i, j, **v;

	if (width <= 0 || height <= 0)
	{
		return ('\0');
	}
	v = (int **)malloc(height * sizeof(int *));
	if (v == NULL)
	{
		free(v);
		return ('\0');
	}
	for (i = 0; i < height; i++)
	{
		v[i] = (int *)malloc(width * sizeof(int));
		if (v[i] == NULL)
		{
			for (; i >= 0; i--)
			{
				free(v[i]);
			}
			free(v);
			return ('\0');
		}
	}
	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			v[i][j] = 0;
		}
	}
	return (v);
}
