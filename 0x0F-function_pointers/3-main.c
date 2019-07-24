#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Struct op
 * @argc: arguments number
 * @argv: argments character
 * Return: return 0
 */

int main(int argc, char *argv[])
{
	int ar1, ar3;

	ar1 = atoi(argv[1]);
	ar3 = atoi(argv[3]);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (!get_op_func(argv[2]) || argv[2][1])
	{
		printf("Error\n");
		exit(99);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && ar3 == 0)
	{
		printf("Error\n");
		exit(100);
	}
		printf("%d\n", get_op_func(argv[2]) (ar1, ar3));
	return (0);
}
