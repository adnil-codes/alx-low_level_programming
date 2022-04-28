#include "main.h"

/**
 * is_palindrome - returns 1 if a string is a palindrome
 * @s: int parameter
 * Return: 1
 */
int is_palindrome(char *s)
{
	int first, last;

	first = 0;
	last = _strlen_recursion(s) - 1;
	return (palindrome(s, first, last));
}

/**
 * palindrome - entry point
 * @s: char parameter
 * @first: int parameter
 * @last: int parameter
 * Return: Recursion
 */
int palindrome(char *s, int first, int last)
{
	if (first > last)
	{
		return (1);
	}
	else if (s[first] == s[last])
	{
		return (palindrome(s, first + 1, last - 1));
	}
	else
		return (0);
}

/**
 * _strlen_recursion - entrt point
 * @s: char parameter
 * Return: 1
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
