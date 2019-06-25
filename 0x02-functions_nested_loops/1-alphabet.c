#include "holberton.h"
/**
 * print_alphabet - print 1 alphabet to a to z.
 * int x for do a lopp
 * Return: Always 0.
 */
void print_alphabet(void)
{
	int x;

	for ( x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
}
