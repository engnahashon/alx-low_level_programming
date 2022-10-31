#include "main.h"
/**
  * get_bit - gets value of a bit at a given index
  * @n: integer
  * @index: index
  *
  * Return: value of index, -1 if error
  */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bit, i, quo;

	for (i = 0; i <= index; i++)
	{
		quo = n / 2;
		bit = n % 2;
		n = quo;
	}
	return (bit);
}
