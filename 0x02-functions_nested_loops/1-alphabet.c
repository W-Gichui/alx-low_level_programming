#include <stdio.h>
/**
 * main - prints the alphabet
 * Return: always 0 (success)
 *
 */
void print_alphabet(void);

int main(void)
{
        print_alphabet();
	return (0);
}

/**
 *void print_alphabet(void) - will print the alphabet
 * Return: 0
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
		putchar('\n');

}
