#include <unistd.h>

/**
 * _putchar - prints a string ff by a new line
 * @c character to be printed
 * Return: 1 if succesful
 * On error, -1 is returned and error is there returned
 */
int _puts(char c)
{
	return (write(1, &c, 1));
}
