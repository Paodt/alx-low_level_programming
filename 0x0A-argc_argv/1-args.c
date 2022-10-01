#include <stdio.h>

/**
 * main: prints number of arguments passed into it
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv)
{
	while (*argv--)
		printf("%d\n", argc);
	return (0);
}
