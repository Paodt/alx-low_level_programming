#include "main.h"
/**
 * _islower - Entry point
 * description: program that checks for lower case
 * @c: the integer value it receives
 * Return: 1 if true 0 if false
 */
int _islower(int c)
{
	int i = 'a';

	for (i = 'a'; i <= 'z'; i++)
	{
	/* refer int c*/
		if (c == i)
		{
			return (1);
		}
	}
	return (0);
}
