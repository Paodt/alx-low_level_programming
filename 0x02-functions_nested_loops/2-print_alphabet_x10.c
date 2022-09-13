#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 *
 * description: program that prints lower case alphabet x10
 */
void print_alphabet_x10(void)
{
	int a;
	int j;

	for (a = 0; a <= 9; a++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
