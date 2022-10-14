#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - function that prints string
 * @separator: strings to be printed between strings
 * @n: number of strings passed to function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list pp;
	unsigned int i;
	char *ch;

	va_start(pp, n);

	for (i = 0; i < n; i++)
	{
		ch = va_arg(pp, char *);
		if (ch)
			printf("%s", ch);
		else
			printf("(nil)");

		if (separator && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(pp);
}
