#include "main.h"

/**
 * print_line - prints straight line
 * @n: parameter
 * Return: straight line
 */
void print_line(int n)
{
	int i = 1;

	while (i <= n)
	{
		_putchar(95);
		i++;
	}
	_putchar('\n');
}
