#include "main.h"
/**
  * main - main entry
  *
  * Return: zero
  */
int main(void)
{
	multiples();
	return(0);
}
/**
  * multiples -  computes the sum of all the multiples of 3 or 5 below 1024
  */
void multiples(void)
{
	int max = 1024;
	int sum = 0, i;

	for (i = 1; i < max; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			printf("%d\n", i);
			sum = sum + i;
		}
	}
	printf("%d\n", sum);

}
