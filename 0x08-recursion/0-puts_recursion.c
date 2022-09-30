#include "main.h"

/**
  * _puts_recursion - prints out a string
  * @s: the string to be printed
  * Return: 0 - always true
  */
void _puts_recursion(char *s)
{
	if (s == '\0')
	{
		return;
	}
	_putchar(s);
}
