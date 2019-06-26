#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 * aRun for
 * sum mods 1 and 2
 * Return: sum .
 */

int main(void)
{
	int a, sum, mod1, mod2;

	for (a = 0; a < 1024; a++)
	{
		mod1 = a % 3;
		mod2 = a % 5;
		if (mod1 == 0 || mod2 == 0)
		{
			sum = sum + a;
		}
	}
	printf("%d\n", sum);
	return (sum);
}
