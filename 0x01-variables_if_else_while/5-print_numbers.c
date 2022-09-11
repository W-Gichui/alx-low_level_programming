#include <stdio.h>
/**
 * main -Print integers
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char i = '0';

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
