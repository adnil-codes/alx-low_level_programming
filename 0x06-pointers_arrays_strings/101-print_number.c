#include "main.h"

/**
 * print_number - prints an integer
 * @n: input integer
 * Return: void
 */
void print_number(int n)
{
	unsigne int i, j, count;

	if (n < 0)
	{
		_putchar(45);
		i = n * -1;
	}
	else
	{
		i = n;
	}

	j = i;
	count = 1;

	while (j > 9)
	{
		j /= 10;
		count *= 10;
	}

	for (; count >= 1; count /= 10)
	{
		_putchar(((m / count) % 10) + 48);
	}

}
