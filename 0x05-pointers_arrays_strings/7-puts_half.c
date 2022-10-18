#include "main.h"
/**
  * get_str_len - Gets string length
  * @str: string
  *
  * Return: int str len
  */
int get_str_len(char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}
	return (len);
}

/**
  * puts_half - prints half of a string
  * @str: string to output
  */
void puts_half(char *str)
{
	int len, i, pr;

	len = get_str_len(str);

	if (len % 2 == 0)
		pr = len / 2;
	else
		pr = (len - 1) / 2;

	for (i = pr; i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
