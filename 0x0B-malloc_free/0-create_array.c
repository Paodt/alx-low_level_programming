#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - function that creates an array of chars
 * @c: char data type
 * @size: int type
 * Return: null if size = 0
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int p;

	if (size == 0)
	{
		return (NULL);
	}
	ar = malloc(size * sizeof(c));

	if (ar == NULL)
		return (NULL);
	for (p = 0; p < size; p++)
		ar[p] = c;

	return (ar);
}
