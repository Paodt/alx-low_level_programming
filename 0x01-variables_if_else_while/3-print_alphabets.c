#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * description: program that prints the alphabets in lower and uppercase
 * Return: Always 0 (success)
*/
int main(void)
{
	char ch;
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
