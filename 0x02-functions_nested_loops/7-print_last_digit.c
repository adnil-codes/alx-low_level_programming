#include "main.h"

/**
 * print_last_digit - print last digit
 * @n: parameter
 * Description: Code returns last digit of a number
 * Return: always 0
 */
int print_last_digit(int n)
{
int i = n % 10;
if (n < 0)
i *= -1;
_putchar(i + '0');
return (i);
}
