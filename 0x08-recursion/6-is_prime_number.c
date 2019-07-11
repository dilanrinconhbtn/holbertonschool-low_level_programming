/**
 * primo - check the code for Holberton School students.
 * @n: number
 * @i: iteraci0n
 * Return: Always 0.
 */

int primo(int n, int i)
{
	if (n % i == 0)
	{
		return (0);
	}
	else if (i == n - 1 && n % i != 0)
	{
		return (1);
	}
	else
	{
		return (primo(n, i + 1));
	}
}
/**
 * is_prime_number - check the code for Holberton School students.
 * @n: number
 * Return: Always 0.
 */
int is_prime_number(int n)
{
	if (n >= 2)
	{
		primo(n, 2);
	}
	else if (n <= 1)
	{
		return (0);
	}
}
