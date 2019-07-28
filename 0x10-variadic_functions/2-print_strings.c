#include "variadic_functions.h"

/**
 * print_strings - check the code for Holberton School students.
 * @separator: string
 * @n: count
 * Return: Always 0.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	unsigned int i;
	char *s;

	va_startA(str, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(str, char *);
		if (s == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", s);
			if (i < (n - 1) && (separator))
			{
				printf("%s", separator);
			}
		}
	}
	printf("\n");
	va_end(str);
}
