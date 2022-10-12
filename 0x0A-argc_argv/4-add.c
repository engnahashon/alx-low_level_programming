#include "main.h"
/**
  * main - adds positive numbers
  * @argc: arg count
  * @argv: arg vector
  *
  * Return: zero on success, 1 on error
  */
int main(int argc, char *argv[])
{
	int sum = 0, i;

	if (argc <= 1)
		printf("0\n");
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]) == 0)
			{
				printf("Error\n");
				return (1);
			}
			sum = sum + atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);


}
