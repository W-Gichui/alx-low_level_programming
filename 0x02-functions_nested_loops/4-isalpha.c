#include "main.h"
/**
 * _isalpha:- if letter is a letter
 * Return: 1 if lowercase 0 if otherwise
 * @c: argument to be checked
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
