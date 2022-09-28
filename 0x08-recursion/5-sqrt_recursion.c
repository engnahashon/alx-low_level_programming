#include "main.h"
int test_sqrt(int sq, int a);

/**
  * test_sqrt - Calculates the square root
  * @sq: number to be calculated
  * @a: number to trial
  *
  * Return: Sqr root
  */
int test_sqrt(int sq, int a)
{
	if (a * a < sq)
		return (test_sqrt(sq, a + 1));
	if (a * a == sq)
		return (a);
	if (a * a > sq)
		return (-1);
	return (0);
}
/**
  * _sqrt_recursion - returns the natural square root of a number.
  * @n: number to find square root
  *
  * Return: sqrt of n, -1 if no nat sqrt
  */
int _sqrt_recursion(int n)
{
	return (test_sqrt(n, 1));
}
