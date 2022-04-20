#include <unistd.h>

/**
 * _putchar - writes the char c to stdout
 * @c character to be printed
 * Return: 1 when succesful
 * On error, -1 is returned and error is there returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
