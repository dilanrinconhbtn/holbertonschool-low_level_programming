#include "holberton.h"

/**
 * _puts - check the code for Holberton School students.
 * @str: number to compare
 * Return: Always 0.
 */

void _puts(char *str)
{
	char *letter = str;

	while (*letter != '\0')
	{
		_putchar(*letter);
		letter++;
	}
	_putchar('\n');
}
