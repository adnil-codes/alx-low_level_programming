#include "main.h"
#include <stdio.h>

/**
 * _strncpy - function copies a string
 * @dest: pointer to char to be chnaged
 * @src: pointer to char to be changed
 * @n: parameter
 * Return: 0 if sucessful
 */
char *_strncpy(char *dest, char *src, int n)

{
	int i;

	for (i = 0; i != n && src[i] != '\0'; i++)
	{
		dest[i] = *(src + i);
	}

	for (; i != n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);

}
