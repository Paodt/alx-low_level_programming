#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns pointer
 * @str: string
 * Return: NULL
 */

char *_strdup(char *str)
{
	unsigned int a, b;
	char *strout;

	if (str == NULL)
		return (NULL);
	for (a = 0; str[a] != '\0'; a++)
		;
	strout = (char *)malloc(sizeof(char) * (a + 1));
	if (strout == NULL)
		return (NULL);
	for (b = 0; b <= i; b++)
		strout[b] = str[b];
	return (strout);
}
