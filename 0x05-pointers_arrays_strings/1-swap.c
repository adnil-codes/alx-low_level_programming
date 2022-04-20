#include "main.h"

/**
 * swap_int - to swap the two values of integers
 * @a: pointer for an integer
 * @b: pointer for an integer
 * Return: 0 when sucessfuk
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
