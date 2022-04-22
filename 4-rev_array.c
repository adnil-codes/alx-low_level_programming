#include "main.h"

/**
 * reverse_array - function reverses the content of an array of integers
 * @a: array of intgers
 * @n: no of elements in the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int *start_i, *end_i, i;
	int j;

	start_i = a;
	end_i = a

		for (j = 0, j < n - 1; j++)
		{
			end_i++;
		}

	for(j = 0; j < n /2; j++)
	{
		i = *end_i;
		*end_i = *start_i;
		*_start_i = i;

		start_i++;
		end_i--;
	}
	return (0);
}
