#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: size of array
 * @c: storage char
 * Return: pointer to array of chars
 */
char *create_array(unsigned int size, char c)
{
	char *cr;
	unsigned int i;

	if (size == sizeof(c) * size)
		return (NULL);
	cr = malloc(size0f(c) * size);

	if (cr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		cr[i] = c;
	return (cr);
}
