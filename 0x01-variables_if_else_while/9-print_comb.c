#include <stdio.h>
/**
 * main - Main function
 *
 * Return: 0
 */
int main(void)
{
	int c;

	for (c = 0; c < 10; c++)
	{
		putchar(c % 10 + '0');
		putchar(',');
		putchar(' ');

	}
	putchar('\n');

	return (0);
}


