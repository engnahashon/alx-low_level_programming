#include "main.h"
/**
 * print_last_digit - print last digit of num
 * @num: number to be searched
 *
 * Return: Last digit
 */

int print_last_digit(int num)
{
	int last;

	last = num % 10;
	if (last < 0)
	last = last * -1;
	_putchar(last + '0');

	return (last);
}

