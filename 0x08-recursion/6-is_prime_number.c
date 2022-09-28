#include "main.h"
int test_prime(int pr, int a);

/**
  * test_prime - tests prime number
  * @pr: number to be tested
  * @a: number to test with
  *
  * Return: 1 if prime zero if otherwise
  */
int test_prime(int pr, int a)
{
	if (pr <= 1 || pr % a == 0)
		return (0);
	else if (pr == a)
		return (1);
	else if (pr % a == 0 || pr <= 1)
		return (0);
	return (1);
}

/**
  * is_prime_number - returns 1 if the input integer is a prime number, otherwise return 0
  * @n: number to be checked
  *
  * Return: 1 if prime num, 0 otherwise
  */
int is_prime_number(int n)
{
	return (test_prime(n, 2));
}
