#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;
	int y;
	int z;
	int w;

	for (x = 0; x <= 9; x++)
	{
	for (y = 0; y <= 9; y++)
	{
	for (z = 0; z <= 9; z++)
	{
	for (w = 0; w <= 9; w++)
	{
		if (x <= z)
		{
		if (y <= w)
		{
			putchar(x + '0');
			putchar(y + '0');
			putchar(' ');
			putchar(z + '0');
			if (w !=9 )
			{
				w++;
			}
			putchar(w + '0');
			if (w != 9)
			{
				w--;
			}
			putchar(',');
			putchar(' ');
		}
		}
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
