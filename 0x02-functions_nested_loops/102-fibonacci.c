#include "main.h"
/**
  * main - Entry point
  *
  * Return: Zero succes
  */
int main(void)
{
	fibonacci_50();
	printf("\n");
	return (0);
}
/**
  * fibonacci_50 - first 50 Fibonacci numbers
  *
  * Return: zero
  */
int fibonacci_50(void)
{
	long prv = 1, cur = 2, hold;
	int i;

	printf("%ld, %ld", prv, cur);
	for (i = 1; i <= 48; i++)
	{
		hold = cur;
		cur = cur + prv;
		printf(", %ld", cur);
		prv = hold;
	}
	return (0);
}
