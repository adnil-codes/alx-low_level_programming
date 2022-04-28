#include "main.h"

/**
 * is_prime_number - returns 1 if integer is prime number
 * @n: int parameter
 * Return: int
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (is_prime(n, 2));
}

/**
 * is_prime - entry number
 * @n: int parameter
 * @x: int parameter
 * Return: function of prime numbers
 */
int is_prime(int n, int x)
{
	if (x < n)
	{
		if (n % x == 0)
		{
			return (0);
		}
		return (is_prime(n, x + 1));
	}
	return (1);
}
