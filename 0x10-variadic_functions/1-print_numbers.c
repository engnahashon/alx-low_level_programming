#include "variadic_functions.h"
/**
  * print_numbers - prints numbers
  * @separator: string to be printed btn nums
  * @n: number of integers passed
  *
  * Return: void
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int i;

	va_start(num, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(num, int));
		if (i < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(num);
}
