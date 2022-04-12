#include "main.h"

/**
 * print_sign - prints time
 * @n: parameter for the code
 * Description: Code prints return depending on outcome
 * Return: 0, -1 or 1 depending on outcome
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
