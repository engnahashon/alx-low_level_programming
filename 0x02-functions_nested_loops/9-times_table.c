#include "main.h"
/**
 *times_table - prints the 9 times table
 *
 * Return: void
 */
void times_table(void)
{
	int a, b, mult;

	for (a = 0; a <= 9; a++)
	{
		_putchar('0');
		for (b = 0; b <= 9; b++)
		{
			_putchar(',');
			_putchar(' ');

			mult = a * b;
			if (mult < 10)
			{
				_putchar(' ');
				_putchar((mult % 10) + '0');
			}
			else
			{
				_putchar((mult / 10) + '0');
				_putchar((mult % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
