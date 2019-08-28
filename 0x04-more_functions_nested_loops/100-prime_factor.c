#include <stdio.h>

int main (void)
{
	unsigned long i, j, number = 612852475143, prime = 0, flag = 0;

	for (i = 0; i <= 50; i++)
	{
		if (number % i ==0)
		{
			flag = 1;
			for (j = 2; j <= i / 2; j++)
			{
				if (i % j == 0)
				{
					flag = 0;
				}
			}
			if (flag == 1)
			{
				if (i > prime)
				{
					prime = i;
				}
			}
		}
	}
	printf("%lu\n", prime);
	return (0);
}
