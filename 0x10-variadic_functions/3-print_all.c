#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	char *ch;
	unsigned int i = 0, j = 0, c = 0;
	const char f[] = "cifs";

	va_start(ap, format);
	while (format && format[i])
	{
		j = 0;
		while (f[j])
		{
			if (format[i] == f[j] && c)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(ap, int)), c = 1;
			break;
		case 'i':
			printf("%d", va_arg(ap, int)), c = 1;
			break;
		case 'f':
			printf("%f", va_arg(ap, double)), c = 1;
			break;
		case 's':
			ch = va_arg(ap, char *), c = 1;
			if (!ch)
			{
				printf("(nil)");
				break;
			}
			printf("%s", ch);
			break;
		} i++;
	}
	printf("\n"), va_end(ap);
}
