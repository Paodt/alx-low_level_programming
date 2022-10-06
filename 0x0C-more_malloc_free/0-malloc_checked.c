#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 * @b: amount of bytes
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	char *ch;

	ch = malloc(b);

	if (ch == NULL)
		exit(98);
	return (ch);
}
