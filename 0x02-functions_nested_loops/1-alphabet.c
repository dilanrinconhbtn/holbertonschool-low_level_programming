#include "holberton.h"
/**
 * print_alphabet - print 1 alphabet to a to z.
 * @x: for do a lopp
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
