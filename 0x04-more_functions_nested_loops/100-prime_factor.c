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
	long int i;

/*
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
*/
	for (i = 3; i < 782849; i = i + 2)
	{
		while ((num % i == 0) && (num != i))
			num = num / i;
	}
	printf("%ld", num);

}

