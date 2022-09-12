#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;
	char ch;
	long int lnum;
	float f;
	long long int llnum;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(ch));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(num));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(lnum));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(llnum));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));	

	return(0);
}
