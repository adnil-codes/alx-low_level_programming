#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n element of an array
 * @a: pointer to an integer
 * @n: value to be returned
 * Return: Void
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		printf("%d", a[i]);

		if (i < n - 1)
		{
			printf(", ");
		}
		i++;
	}

	printf("\n");

}
