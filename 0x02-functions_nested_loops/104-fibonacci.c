#include "main.h"
/**
  * main - Entry point
  *
  * Return: Zero succes
  */
int main(void)
{
	fibonacci_98();
	printf("\n");
	return (0);
}
/**
  * fibonacci_98 - first 98 Fibonacci numbers
  *
  * Return: zero
  */
int fibonacci_98(void)
{
	long prv = 1, cur = 2, hold;
	int i;

	printf("%ld, %ld", prv, cur);
	for (i = 1; i <= 96; i++)
	{
		hold = cur;
		cur = cur + prv;
		printf(", %ld", cur);
		prv = hold;
	}
	return (0);
}

