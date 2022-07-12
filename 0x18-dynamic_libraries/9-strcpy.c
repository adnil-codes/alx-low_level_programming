#include "main.h"

/**
 * _strcpy - copies string pointed to by src
 * @src: pointer to char to be copied
 * @dest: pointer to char to be copied
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
