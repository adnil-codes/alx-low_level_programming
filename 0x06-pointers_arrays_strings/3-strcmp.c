#include "main.h"

/**
 * _strcmp - function compares two strings
 * @s1: pointer to be changed
 * @s2: pointer to be changed
 * Return:0 when succesful
 */
int _strcmp(char *s1, char *s2)
{
	int i, j = 0;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			j = (s1[i] - s2[i]);
			break;
		}
		else
		{
			j = s1[i] - s2[i];
		}
	}

	return (j);
}
