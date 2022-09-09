#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * description: program that alphabet in lowercase and exempts q and e
 * Return: Always 0 (success)
*/
int main (void)
{
	int ch;
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		else
		{
		}
	}
	putchar('\n');
	return (0);
}
