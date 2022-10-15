#include "variadic_functions.h"
/**
  * print_strings - prints strings
  * @separator: string to be printed btn strings
  * @n: number of strings
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strs;
	unsigned int i;

	va_start(strs, n);
	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(strs, char *));
		if (i < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(strs);
}
