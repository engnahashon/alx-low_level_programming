#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: str to be printed
 *
 * Return: void
 */
void print_rev(char *s)
{
	int len, n;
	
	while (*s)
	  len++;
      	for (n = len; n >= 0; n--)
		_putchar(*s[n]);
	_putchar('\n');
}
