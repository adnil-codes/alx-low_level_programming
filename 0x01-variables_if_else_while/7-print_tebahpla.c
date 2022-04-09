#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - code
 *
 * Return: program that prints the lowercase alphabet in reverse
 * folloewd by new line
 */
int main(void)
{
char c = 122;
while (c >= 97)
{
putchar(c);
c--;
}
putchar('\n');

return (0);
}
