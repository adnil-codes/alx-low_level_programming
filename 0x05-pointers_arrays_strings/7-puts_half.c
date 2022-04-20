#include "main.h"

/**
 * puts_half - prints second half of a string
 * @str: pointer to an integer that will be changed
 * Return: 0 when succesful
 */
void puts_half(char *str)
{
	int i, last;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	last = (i + 1) / 2;

	for (i = last; str[i]; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
