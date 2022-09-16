#include "main.h"
/**
 *times_table - prints the 9 times table
 *
 * Return: void
 */
void times_table(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			printf("%d,\t", a * b);
		}
		printf("\n");
	}	
}
