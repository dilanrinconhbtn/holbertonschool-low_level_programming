#include "variadic_functions.h"
/**
 * print_numbers - check the code for Holberton School students.
 * @separator: Strings
 * @n: amount
 * Return: Always 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list p_numb;
	unsigned int i;
	int variable = 0;

	if (separator != NULL)
	{
		va_start(p_numb, n);
		for (i = 0; i < n; i++)
		{
			variable = va_arg(p_numb, int);
			printf("%d", variable);
			if (i < (n - 1))
			{
				printf("%s", separator);
			}
		}
		printf("\n");
		va_end(p_numb);
	}
}
