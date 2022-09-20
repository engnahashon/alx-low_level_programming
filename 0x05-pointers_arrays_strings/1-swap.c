#include "main.h"
/**
 * swap_int - swaps the values of two integers.
 * @a: Pointer to First integer
 * @b: Pointer to Second integer
 * 
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int hold;

	hold = *a;
	*a = *b;
	*b = hold;
}
