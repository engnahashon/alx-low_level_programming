#include <stdio.h>
#include <stdlib.h>
/**
  * main - prints number of arguments passed into it
  * @argc: arg count
  * @argv: arg vector
  * Return: zero on success
  */
int main(int argc, char *argv[])
{
	if (argv != NULL)
		printf("%d\n", argc - 1);
	return (0);
}
