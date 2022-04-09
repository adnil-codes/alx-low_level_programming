#include <stdio.h>

/**
 * main - task
 *
 * Return: Alphabets in lower and uppercase
 * with a new line
 */
int main(void)
{
char c = 97;
while (c < 122)
{
putchar(c);
c++;
}
char ch = 65;
while (ch < 90)
{
putchar(ch);
ch++;
}
putchar('\n');

return (0);
}

