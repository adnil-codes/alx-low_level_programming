#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: stirng to be printeed
 * @n: integers
 * @...: Variable numbers to be printed
 * Return: void
 */
void print_numbers(const char *searator, const unsigned int n, ...)
{
	va_list num;
	unsigned int i;

	va_start(num, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(num, int));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(num);
}

