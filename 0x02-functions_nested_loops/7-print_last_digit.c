#include "main.h"

/**
 * print_last_digit - Entry
 * @n: value
 * Return: last digit
 */
int print_last_digit(int n)
{
	int num = num % 10;

	if (n < 0)
	{
		num = num * -1;
	}
	_putchar(num + '0');
	return (num);
}
