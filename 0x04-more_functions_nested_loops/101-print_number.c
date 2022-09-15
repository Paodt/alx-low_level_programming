#include "main.h"
#include <stdlib.h>
#include <stdio.h>

int _putchar(char c);

/**
 * print_number - prints integer
 * @n: integer value
 */
void print_number(int n)
{
	unsigned int n1 = 0;

	if (n < 0)
	{
		n1 = -n;
		_putchar('_');
	}
	else
	{
		n1 = n;
	}
	if (n1 / 10)
	{
		print_number(n1 / 10);
	}
	_putchar((n1 % 10) + '0');
}
