#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * description: program that prints numbers
 * Return: Always 0 (success)
*/
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		printf("%d", a);
	}
	putchar('\n');
	return (0);
}
