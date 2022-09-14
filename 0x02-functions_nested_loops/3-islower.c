#include "main.h"
/**
 * _islower - will check whether a letter is lower case
 * Return: 1 if true and 0 otherwise
 * @c: the character to check
 */
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
