#include "main.h"

/**
 * _strchr - locates a char in a string
 * @s: string
 * @c: character
 * Return: The pointer to the first occurence of char c
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (0);
}
