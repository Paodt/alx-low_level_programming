#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - program that add numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if no number is passed
 */
int main(int argc, char *argv[])
{
	int i, g, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (g = 0; argv[i][g] != '\0'; g++)
		{
			if (!isdigit(argv[i][g]))
			{
				printf("Error\n");
				return (1);
			}
		sum += atoi(argv[i]);
		}
	}
		printf("%d\n", sum);
	return (0);
}
