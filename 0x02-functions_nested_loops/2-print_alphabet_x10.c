#include "holberton.h"

/**
 * alphabetx10 - print 10 alphabet
 *
 *
 */
void print_alphabet_x10(void)
{
	int x, f;

	for ( f = 0; f <= 9; f++)
	{
        for ( x = 'a'; x <= 'z'; x++)
        {
                _putchar(x);
        }
	_putchar('\n');
	}
}
