#include "main.h"

/**
 * malloc_checked - allocates mem using malloc
 * @b: bytes param
 * Return: pointer to allocated mem
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit (98);
	return (ptr);
}
