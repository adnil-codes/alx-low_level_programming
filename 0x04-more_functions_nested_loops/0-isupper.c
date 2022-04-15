#include "main.h"

/**
 * _isupper - checks for uppercase char
 * @c: parameter for the code
 * Return: Always 0
 */
int _isupper(int c)
{
if (c >= 65 && c < 91)
{
return (1);
}
else
{
return (0);
}
}
