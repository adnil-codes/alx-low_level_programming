#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name to be print
 * @f: pointer to printing func
 * Return: 0
 */
void print_name(char *name, void (*f) (char *))
{
	if (!name || !f)
		return (0);
	f(name);
}

