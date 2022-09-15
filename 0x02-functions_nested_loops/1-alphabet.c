#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void);
int main(void)

{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{

	int n;

	for (n = 97; n < 123; n++)
		putchar(n);	
}
