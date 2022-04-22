#include "main.h"

/**
 * _putchar - writes the char c to stdout
 * @c: Ther char to be printed
 * Return: 1 on sucess
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
