#include "main.h"
/**
  * puts_half - prints half of a string
  * @str: string to output
  */
void puts_half(char *str)
{
	int len, i;
	
	len = get_str_len(str);

	for (i = (len / 2) + 1; i <= len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
