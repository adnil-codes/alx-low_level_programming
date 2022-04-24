#include "main.h"

/**
 * _strcmp - function compares two strings
 * @s1: pointer to be changed
 * @s2: pointer to be changed
 * Return:0 when succesful
 */
int _strcmp(char *s1, char *s2)
{
	char *str_i = s1;
	char *str_j = s2;

	while (*str_i != '\0' && *str_j != '\0' && str_i == *str_j)
	{
		str_i++;
		str_j++;
	}

	return (*str_i - *str_j);
}
