#include "main.h"

/**
 * _isupper - checks for uppercase
 * Return: 1 if its uppercase 0 otherwise
 * @c: value to return
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
