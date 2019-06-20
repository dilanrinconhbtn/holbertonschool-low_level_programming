#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d", n "is ");
	int dig = n % 10;
	if (n > 5)
		printf("Last digit of %d", n, "is %d", dig, "and is greater than 5\n");
	if (n == 0)
		printf("Last digit of %d", n, "is %d", dig, "and is 0\n");
	if (n < 5)
		printf("Last digit of %d", n, "is %d", dig, "and is less than 6 and not 0\n");
	return (0);
}
