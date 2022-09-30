#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: memory space to be filled
 * @b: bytes to fill
 * @n: number of spaces to fill
 * Return: returns pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
