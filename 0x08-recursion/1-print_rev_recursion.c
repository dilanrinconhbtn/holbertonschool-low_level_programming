#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

void _print_rev_recursion(char *s)
{
	if(*s != '\0')
	{
		s++;
		_print_rev_recursion(s);
		_putchar(*(--s));
	}
}
