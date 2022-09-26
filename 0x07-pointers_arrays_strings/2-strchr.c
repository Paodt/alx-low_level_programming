#include "main.h"
#include <stdio.h>
/**
 * _strchr - locates character string
 * @s: pointer
 * @c: variable
 * Return: 0
 */
char *_strchr(char *s, char c)
{
	char *p = s;
	int index = 0;

	while (*s != c)
	{
		s++;
		index++;
	}
	if (*s == c)
	{
		return (p + index);
	}
	else
	{
		return (NULL);
	}
}
