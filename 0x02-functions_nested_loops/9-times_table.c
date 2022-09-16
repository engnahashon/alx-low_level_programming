#include "main.h"
/**
 *times_table - prints the 9 times table
 *
 * Return: void
 */
void times_table(void)
{
	int a;

	for (a = 1; a < 10; a++)
	{
		for (b = 1; b < 10; b++)
		{
			printf("%d, ", a * b);
		}
		printf("\n");
	}	
}
