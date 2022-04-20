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
	int num;

	srand(time(0));
	num = rand();
	printf("%i\n", num);
	return (0);
}
