#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: str to be printed
 *
 * Return: void
 */
void print_rev(char *s)
{
	int len = 0, n;
	
	while (*s)
	  len++;
      	for (n = len - 1; n >= 0; n--)
		_putchar(s[n]);
	_putchar('\n');
}
