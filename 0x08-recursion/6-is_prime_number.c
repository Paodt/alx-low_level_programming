#include "main.h"

/**
 * is_prime_number - check for prime number
 * @n: integer
 * Return: 1 if integer is prime number
 */
int is_prime_number(int n)
{
	if (n <= 0)
		return (0);
	if (n == 1)
		return (0);
	return (prime(n, 2));
}

/**
 * prime - check for prime number
 * @n: input number
 * @i: iterator
 * Return: 1
 */
int prime(unsigned int n, unsigned int i)
{
	if (n % i == 0)
	{
		if (n == i)
			return (1);
		else
			return (0);
	}
	return (0 + prime(n, i + 1));
