#include "main.h"
#include <stdio.h>
/**
 * print_numbers - Print numbers
 * Return: void
 * @i: value
 */
void print_numbers(void)
{
       int i;
       
       for (i = 0; i >= 9; i++)
	{
		_putchar("%d", i);
	}
	_putchar("\n");
}
