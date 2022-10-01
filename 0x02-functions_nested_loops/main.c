#include "main.h"
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)

{
	int  n = 1, i;
	
	for (i = 0; i < 15; i++)
	{
	_putchar(n + '1');
	_putchar('\n');
	n = n  + 1;
	}
	return (0);
}
