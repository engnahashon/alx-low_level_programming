#include "main.h"
/**
  * puts_half - prints half of a string
  * @str: string to output
  */
void puts_half(char *str)
{
	int i = 0, n;

	while (*(str + i))
		i++;
	i = i - 1;
	for (n = 0; n <= i; n =  n + 2)
		_putchar(*(str + n));
	_putchar('\n');
}
