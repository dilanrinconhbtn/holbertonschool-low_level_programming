#include "variadic_functions.h"
/**
 * sum_them_all - check the code for Holberton School students.
 * @n: unsigned int number
 * Return: Sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list numb;

	va_start(numb, n);
	if (n == 0)
	{
		return (0);
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			sum += va_arg(numb, unsigned int);
		}
		va_end(numb);
		return (sum);
	}
}
