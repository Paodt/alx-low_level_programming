#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @dest:  string to append to
 * @src: string to add
 * Return: a pointer to resulting string
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (scr[j] != '\0')
	{
		dest[i] = scr[j];
		j++;
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
