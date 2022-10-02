#include "main.h"
/**
  * main - Entry point
  *
  * Return: zero on success
  */
int main(void)
{
	fizzbuzz();
	printf("\n");
	return (0);
}
/**
  * fizzbuzz - prints the numbers from 1 to 100, followed by a new line.
  * But for multiples of three print Fizz instead of the number 
  * for the multiples of five print Buzz. 
  * For numbers which are multiples of both three and five print FizzBuzz
  */
void fizzbuzz(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0)
			printf("Fizz ");
		else if (n % 5 == 0)
			printf("Buzz ");
		else if (n % 3 == 0 && n % 5 == 0)
			printf("FizzBuzz ");
		else
			printf("%d ", n);
	}
}
