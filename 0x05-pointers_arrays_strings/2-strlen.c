#include "main.h"

/**
 * _strlen - function that prints length of string
 * @s: pointer of the integer to be updated
 * Return: Void if succesful
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
