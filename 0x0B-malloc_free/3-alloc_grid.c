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
	int i, **v;

	if (width <= 0 || height <= 0)
	{
		return ('\0');
	}
	v = (int **)malloc(height * sizeof(int *));
	if (v == NULL)
	{
		return ('\0');
	}
	for (i = 0; i < width; i++)
	{
		v[i] = (int *)malloc(width * sizeof(int));
		if (v == NULL)
		{
			return ('\0');
		}
	}
	return (v);
}
