#include "main.h"
#include <stdio.h>

/**
 * main - prints no of arguement padded
 * @argc: no of command line arguements
 * @argv:array
 * Return: Number of argument passed
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
