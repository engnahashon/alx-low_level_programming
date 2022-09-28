#include "main.h"
/**
  * _puts_recursion -  function that prints a string
  * @s: String to print
  */
void _puts_recursion(char *s)
{
	_putchar(*s);
	_puts_recursion(s + 1);	
	_putchar('\n');
}
