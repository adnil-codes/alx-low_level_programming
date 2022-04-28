#include "main.h"

/**
 * _pow_recursion - prints the power of x to y
 * @x: integer parameter
 * @y: integer parameter
 * Return:recursion
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
