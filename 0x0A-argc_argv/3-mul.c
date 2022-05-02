#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints multiples of a number
 * @argc: argument count
 * @argv: argument value
 * Return: 0 or Error
 */
int main(int argc, char *argv[])
{
	int x = 0;
	int y = 0;

	if (argc == 3)
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);

		printf("%d\n", x * y);
	}

	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
