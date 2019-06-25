#include "holberton.h"
/**
 * print_alphabet - print alphabet to a to z.
 * @x for a lo0p
 *
 */
void print_alphabet(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
