#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * descrion: program that prints all single digit below 10
 * Return: Always 0 (success)
*/
int main(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		putchar(a + '0');
	}
	putchar('\n');
	return (0);
}
