#include "3-calc.h"
/**
  * main - Performs simples operations
  * @argc: arg count
  * @argv: arg vector
  *
  * Return: zero on success.
  */
int main(int argc, char *argv[])
{
	int a, b;
	int (*p)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	p = get_op_func(argv[2]);
	if (p == NULL)
	{
		printf("Error\n");
		return (99);
	}
	printf("%d\n", (*p)(a, b));
	return (0);
}
