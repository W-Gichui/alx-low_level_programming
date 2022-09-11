#include <stdio.h>
/**
 * main - Print numbers
 * Return: Always 0 (success)
 */
int main(void)
{
	int i = 0;

	for (i = 0; i <= 9; i++)
	{
		putchar('0' + i);
		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
