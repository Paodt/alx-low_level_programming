#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: array element
 * @size: bytes to allocate
 * Return: NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int h;
	char *t;

	if (nmemb == 0 || size == 0)
		return (NULL);
	t = malloc(nmemb * size);
	if (t == NULL)
		return (NULL);

	for (h = 0; h < (nmemb * size); h++)
		t[h] = 0;
	return (t);
}
