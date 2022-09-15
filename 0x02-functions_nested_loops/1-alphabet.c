#include "main.h"

/**
 * print_alphabet - Prints lower case alphabets
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	int n;

	for (n = 97; n < 123; n++)
		_putchar(n);
	_putchar('\n');
}
