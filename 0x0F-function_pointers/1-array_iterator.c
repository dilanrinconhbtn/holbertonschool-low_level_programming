#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - prints an integer
 * @array: the integer to print
 * @size: size
 * @action: function
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
