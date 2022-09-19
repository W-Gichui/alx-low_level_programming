#include "main.h"

/**
 * swap_int - the values for pointers.
 * @a: int to be swapped
 * @b: int to be swapped
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
