include "main.h"

/**
 * binary_to_uint - function to convert a binary numbet to an unsigned int
 * @b: is pointing to a string of 0 and 1 charas
 * Return: Conv value, 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int d_val = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] == '0' || b[i] == '1')
	{
		d_val <<= 1;
		d_val += b[i] - '0';
		i++;
	}
	return (d_val);
}
