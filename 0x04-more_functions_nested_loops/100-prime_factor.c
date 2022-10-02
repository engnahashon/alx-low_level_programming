#include "main.h"
/**
  * main - Entry point
  *
  * Return: Zero on success
  */
int main(void)
{
	prime_num();
	printf("\n");
	return (0);
}
/**
  * prime_num - finds and prints the largest prime factor
  * of the number 612852475143
  *
  */
void prime_num(void)
{
	long int num = 612852475143;
	long int i = 3, factor = 0;

	while (num != 1)
	{
		if (num % i == 0)
		{
			num = num / i;
			if (i > factor)
				factor = i;

		}
		else
			factor++;
	}
	printf("%ld\n", factor);

}

