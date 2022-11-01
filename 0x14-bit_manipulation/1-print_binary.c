#include "main.h"

/**
  * print_binary - prints binary represensation of a number
  * @n: integer
  */
void print_binary(unsigned long int n)
{
	unsigned long int i, mask, count = 0, tmp;

	tmp = n;
	while (tmp > 0)
	{
		tmp = tmp >> 1;
		count++;
	}
	i = count;

	while (i >= 1)
	{
		mask = (1 << (i - 1));
		if (n & mask)
			break;
		i--;
	}
	if (i == 0)
		_putchar('0');
	while (i >= 1)
	{
		mask = (1 << (i - 1));
		if (n & mask)
			_putchar('1');
		else
			_putchar('0');
		i--;
	}
}
