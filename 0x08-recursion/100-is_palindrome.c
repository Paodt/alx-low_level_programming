#include "main.h"
/**
 * _strlen_recursion - return string length
 * @s: string
 * Return: length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
/**
 * comparator - compares string characters
 * @n1: smallest iteration
 * @n2: biggest iteration
 * Return:
 */

int comparator(char *s, int n1, int n2)
{
	of (*(s + n1) == *(s + n2))
	{
		if (n1 == n2 || n1 == n2 + 1)
			return (1);
		return (0 + comparator(s, n1 + 1, n2 - 1));
	}
	return (0);
}

/**
 * is_palindrome - checks strings for palindromes
 * @s: string
 * Return: 1 if it is 0 if its not
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (comparator(s, 0, _strlen_recursion(s) - 1));
}
