#include <stdio.h>
#include <stdlib.h>

/**
 * main - code
 *
 * Return: always 0 sucess
 */
int main(void)
{
char ch;
for (ch = '0'; ch <= '9'; ch++)
{
putchar(ch);
}
for (ch = 'a'; ch <= 'f'; ch++)
{
putchar(ch);
}
putchar('\n');

return (0);
}
