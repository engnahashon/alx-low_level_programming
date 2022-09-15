#include "main.h"
/**
 * _abs - Computes absoulute value of integer
 *
 * @c: Integer to be computed
 *
 * Return: Abs value
 */
int _abs(int c)
{
	if (c < 0)
	{
	int value;

	value = c * -1;
	return (value); }
	return (c);
}
