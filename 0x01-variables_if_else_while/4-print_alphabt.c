#include <stdio.h>

/**
 * main - code
 *
 * Return: Prints alphabets excepr E
 * and Q
 */
int main(void)
{
char c = 'a';
while (c <= 'z')
{
if (c != 'e' && c != 'q')
{
putchar(c);
}
c++;
}
putchar('\n');

return (0);
}
