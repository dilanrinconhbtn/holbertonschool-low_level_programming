#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *array_range - prints buffer in hexa
 * @min: num min
 * @max: num max
 *
 * Return: arr.
 */

int *array_range(int min, int max)
{
	int *arr, i, size = 0;

	if (min > max)
	{
		return ('\0');
	}
	size = max - min;
	arr = malloc(size * sizeof(int) + 1);
	if (arr == NULL)
	{
		free(arr);
		return ('\0');
	}
	for (i = min; i <= size; i++)
	{
		arr[i] = i;
	}
	return (arr);
}
