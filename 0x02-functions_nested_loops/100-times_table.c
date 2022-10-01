#include "main.h"
/**
  * print_times_table - prints the n times table, starting with 0.
  * @n: Number of times table
  */
void print_times_table(int n)
{
	int a, b, mult;

	if (n > 15 || n < 0)
		_putchar(0);
	else
	{
	for (a = 0; a <= n; a++)
	{
		for (b = 0; b <= n; b++)
		{

			mult = a * b;
			if (b == 0)
				_putchar('0');
			else if (mult < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar((mult % 10) + '0');
			}
			else if (mult < 100)
			{
				_putchar(' ');
				_putchar((mult / 10) + '0');
				_putchar((mult % 10) + '0');
			}
			else
			{
				_putchar((mult / 100) + '0');
				_putchar((mult / 10) % 10 + '0');
				_putchar((mult % 100) % 10 + '0');
			}
			if (b < n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
	}
}
