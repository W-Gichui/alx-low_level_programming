#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;

	/*loop through the alphabet*/
	for (c = 'a'; c <= 'z'; c++)
	{
		/*print out only if c is not e or q*/
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
		/*if its e or q loop again*/
	}
	putchar('\n');

	return (0);
}
