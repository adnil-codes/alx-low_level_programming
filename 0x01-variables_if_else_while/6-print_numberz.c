#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - code
 *
 * Return: Numbers from O to 10 and print 0
 * if success
 */
int main(void)
{
int c = 0;
while (c < 10)
{
putchar(48 + c);
c++;
}
putchar('\n');

return (0);
}
