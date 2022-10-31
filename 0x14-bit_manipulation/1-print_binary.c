#include "main.h"

/**
  * prints binary represensation of a number
  * @n: integer
  */
void print_binary(unsigned long int n)
{
	unsigned long int i = 32, mask;

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
