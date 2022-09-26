#include "main.h"
/**
  * puts2 - function that prints every other character of a string
  * @str: String to be printed
  */
void puts2(char *str)
{
	int i = 0, n;

	while (*(str + i))
		i++;
	i = i - 1;
	for (n = 0; n <= i; n =  n + 2)
		_putchar(*(str + n));
	_putchar('\n');
}
