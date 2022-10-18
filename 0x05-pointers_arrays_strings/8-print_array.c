#include "main.h"
/**
  * get_str_len - Gets string length
  * @str: string
  *
  * Return: int str len
  */
int get_str_len (char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}
	return (len);
}
/**
  * print_array - prints n elements of an array of integers
  * @a: array
  * @n: num of elements to print
  */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n -1)
			printf(", ");
	}
	printf("\n");
}
