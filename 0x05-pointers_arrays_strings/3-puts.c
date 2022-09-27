#include "main.h"
/**
  * _puts - prints out a string
  * @str: the argument to be checked
  * Return: always 0 - Successful
  */
void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
}
