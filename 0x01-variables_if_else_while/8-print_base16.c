#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * description program that prints base 16 numbers
 * Return: Always 0 (success)
*/
int main(void)
{
	char c;
	char d;

	while (d < '9')
	{
		putchar(d);
		d++;
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
