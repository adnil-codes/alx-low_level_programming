#include "main.h"

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

	int = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
