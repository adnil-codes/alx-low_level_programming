#include "main.h"

/**
 * memcopy - copy char
 * @s: string param
 * @b: input param
 * @n: bytes param
 * Return: str
 */
char *memcopy(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: n param
 * @size: bytes param
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);
	memcopy(p, 0, (nmemb * size));
	return (p);
}
