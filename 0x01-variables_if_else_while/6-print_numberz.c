#include <stdio.h>

/**
 * main -Print integers
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i = 0;

	for (i = 0; i <= 9; i++)
	{
		putchar('0' + i);
	}
	putchar('\n');
	return (0);
}
