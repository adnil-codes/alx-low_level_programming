#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a fucntion given as a parameter of an array
 * @array: array to iterate over
 * @size: size of array
 * @action: pointer to function used
 * Return: 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
