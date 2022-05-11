#include <stdio.h>

/**
 *main: Prints name of file the program was compiles from
 *Return: 0
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
