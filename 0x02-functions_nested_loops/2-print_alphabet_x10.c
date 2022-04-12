#include "main.h"

/**
 * main - code input
 * Description: Code prints the alphabets
 * in lower case 10 times in new lins
 * Result: Returns 0 when sucess
 */
int main(void)
{
int i, j;
for (i = 0; i < 10; i++)
{
for (j = 97; j < 122; j++)
{
_putchar(j);
}
_putchar('\n');
}
return (0);
}
