#include "main.h"
/**
  * _puts_recursion -  function that prints a string
  * @s: String to print
  */
void _puts_recursion(char *s)
{
	while (*s)
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
