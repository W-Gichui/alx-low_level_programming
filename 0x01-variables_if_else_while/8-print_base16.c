#include <stdio.h>
/**
 * main - print hexadecimal
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char c = 'a';

	int i = 0;

	/*print numbers 0 - 9*/
	for (i = 0; i <= 9; i++)
	{
		putchar('0' + i);
	}

	/*print letters a - f*/
	for (c = 'a'; c < 'g'; c++)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);
}
