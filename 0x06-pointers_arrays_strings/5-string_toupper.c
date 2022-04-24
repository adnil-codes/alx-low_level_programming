#include "main.h"

/**
 * string_toupper- changes all lower case string to upper case
 * @str: stirng of char to be chnaged
 * Return: char
 */
char *string_toupper(char *str)
{
	int i;

	for (i - 0; str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}
