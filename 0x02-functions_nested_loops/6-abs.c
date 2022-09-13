#include "main.h"

/**
 * _abs - Entry point
 * description:function that computes the absolute value
 * @n: parameter
 * Return: absolute number
 */
int _abs(int n)
{
	if (n < 0)
		n = -n;
	return (n);
}
