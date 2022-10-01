#include "main.h"
/**
  * main - Entry point
  *
  * Return: Zero succes
  */
int main(void)
{
	fibonacci_50();
	return (0);
}
/**
  * fibonacci_50 - first 50 Fibonacci numbers
  *
  * Return: zero
  */
int fibonacci_50(void)
{
	int i, prv = 1, cur = 2, hold ;
	
	printf("%d %d", prv, cur);
	for (i = 1; i <= 48; i++)
	{
		hold = cur;
		cur = cur + prv;
		printf(" %d", cur);
		prv = hold;
	}
	return (0);
}
