#include "main.h"

/**
 * _isalpha - checks if char is a letter
 * @c: is the parameter
 * Description: Code checks if char is a letter,
 * uppercase or lower case
 * Return: 0 or 1 depending
 */
int _isalpha(int c)
{
if ((c >= 97 && c < 122) || (c >= 65 && c < 91))
{
return (1);
}
else
{
return (0);
}
}
