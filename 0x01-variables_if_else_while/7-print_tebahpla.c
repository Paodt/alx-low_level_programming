#include <stdio.h>
#include <unistd.h>
/**
 * main -  Entry point
 * description: program that prints alphabet in reverse order
 * Return: Always 0 (success)
*/
int main(void)
{
	int a;

	for (a = 'z'; a >= 'a'; a--)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
