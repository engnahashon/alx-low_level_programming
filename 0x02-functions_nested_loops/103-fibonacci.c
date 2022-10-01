#include "main.h"
/**
  * main - entry point
  *
  * Return: Zero on success
  */
int main(void)
{
	fibonacci_sum_even();
	printf("\n");
	return (0);
}
/**
  *fibonacci_sum_even - prints the sum of the even-valued terms
  * Return: zero
  */
int fibonacci_sum_even(void)
{
	long prv = 1, cur = 2, hold;
	long sum = 2;
	int i;

	for (i = 1; i <= 48; i++)
	{
		hold = cur;
		cur = cur + prv;
		if (cur % 2 == 0)
			sum = sum + cur;
		prv = hold;
	}
	printf("%ld", sum);
	return (0);
}
