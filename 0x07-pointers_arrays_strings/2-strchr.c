#include "main.h"

/**
 * _strchr - locates character in a string
 * @s: pointer variable
 * @c: variable
 * Return: null
 */
char *_strchr(char *s, char c)
{
	char *f = s;
	int index = 0;

	while (*s != c)
	{
		++s;
		++index;
	}
	if (*s == c)
	{
		return (f + index);
	}
	else
	{
	return (0);
	}
}
