#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguements on new line
 * @argc: arguement counts
 * @argv: arguement values
 * Return: all argument
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
