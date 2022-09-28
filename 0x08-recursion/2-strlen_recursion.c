#include "main.h"
/**
 * _strlen_recursion - length of string
 * @s: string
 * Return: length
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (s[len])
		len++;
	return (len);
}
