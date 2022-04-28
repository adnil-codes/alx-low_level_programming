#include "main.h"

/**
 * divider - show which number is prime
 * @n: int parameter
 * @m: int parameter
 * Return: boolean
 */
int divider(int n, int m)
{
	if (m % n == 0)
	{
		return (0);
	}
	else if (m / 2 > n)
	{
		return (divider(n + 2, m));
	}
	else
	{
		return (1);
	}
}

/**
 * is_prime_number - entry number
 * @n: int parameter
 * Return: function of prime numbers
 */
int is_prime_number(int n)
{
	if ((!(n % 2) && n != 2) || n < 2)
	{
		return (0);
	}
	else
	{
		return (divider(3, n));
	}
}
