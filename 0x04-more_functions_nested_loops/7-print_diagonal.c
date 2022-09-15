#include "main.h"

/**
 * print_diagonal - draws diagonal line
 * @n: number of times
 */

void print_diagonal(int n)
{
	int i, ii;

	i = 0;
	while (i < n && n > 0)
	{
		ii = 0;
		while (ii < i)
		{
			_putchar(' ');
			ii++;
		}
		_putchar('\\');
		_putchar('\n');
		i++;
	}
	if (i == 0)
		_putchar('\n');
}
