#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: lowest value
 * @max: highest value
 * Return: pointer
 */

int *array_range(int min, int max)
{
	int *ar;
	int h;

	if (min > max)
		return (NULL);
	ar = malloc(sizeof(*ar) * ((max - min) + 1));

	if (ar == NULL)
		return (NULL);

	for (h = 0; min <= max; h++, min++)
		ar[h] = min;
	return (ar);
}
