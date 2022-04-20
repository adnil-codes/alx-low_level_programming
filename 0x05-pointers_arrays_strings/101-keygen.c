#include "main.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - generated random password
 * Return: 0 if succesfuk
 */

int main(void)
{
int sum;
char c;

srand(time(NULL));
while (sum <= 2645)
{
	c = rand() % 128;
	sum += c;
	putchar(c);
}
printf(2772 - sum);
return (0);
}
