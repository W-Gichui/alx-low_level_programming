#include "main.h"
/**
 * _islower - will check whether a letter is lower case
 * Return: 1 if true and 0 otherwise
 */
int _islower(void)
{
	int c;
	/* c is the argument to be passed into the function*/

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
