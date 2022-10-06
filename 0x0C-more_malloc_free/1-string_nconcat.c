#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: bytes
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *sout;
	unsigned int a, b, lsout, f;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (a = 0; s1[a] != '\0'; a++)
		;
	for (b = 0; s2[b] != '\0'; b++)
		;
	if (n > b)
		n = b;
	lsout = a + n;

	sout = malloc(lsout + 1);

	if (sout == NULL)
		return (NULL);

	for (f = 0; f < lsout; f++)
		if (f < a)
			sout[f] = s1[f];
		else
			sout[f] = s2[f - a];
	sout[f] = '\0';

	return (sout);
}
