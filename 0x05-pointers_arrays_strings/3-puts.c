#include "main.h"

/**
 * _puts - Function that prints s string
 * @str: pointer to an int to be changed
 * Return: void when answer id correct
 */

void _puts(char *str)
{
	char *c;
	int i;

	c = str;

	for (i = 0; c[i]; i++)
	{
		_putchar (c[i]);
	}
	_putchar('\n');
}
