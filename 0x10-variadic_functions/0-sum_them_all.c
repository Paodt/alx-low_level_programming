#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all parameters
 * @n: number count
 * Return: 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int i, sum;

	va_start(ap, n);
	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
