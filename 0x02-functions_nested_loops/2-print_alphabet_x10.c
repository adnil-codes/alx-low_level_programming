#include "main.h"

/**
 * print_alphabet_x10 - code input
 * Description: Code prints the alphabets
 * in lower case 10 times in new lins
 * Return: 0 when sucess
 */
void print_alphabet_x10(void)
{
int i, j;
for (i = 0; i < 10; i++)
{
for (j = 97; j <= 122; j++)
{
_putchar(j);
}
_putchar('\n');
}
}
