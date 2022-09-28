#include "main.h"

/**
 * power - natural square root
 * @n: input number
 * @a: iterator
 * Return: -1 if n does not have a square root
 */
int power(int n, int a)
{
	if (a % (n / a) == 0)
	{
		if (a * (n / a) == n)
			return (a);
		else
			return (-1);
	}
	return (0 + power(n, a + 1));
}

/**
 * _sqrt_recursion - natural square root
 * @n: integer
 * Return: -1 if n does not have a square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (power(n, 2));
}
