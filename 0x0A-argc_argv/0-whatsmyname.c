#include <stdio.h>
#include "main.h"
/**
  * main - prints its name
  * @argc: argument count
  * @argv: argument vector
  * Return: zero on success
  */
int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
