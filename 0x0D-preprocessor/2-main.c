#include <stdio.h>
/**
  * main - print the name of the file it was compiled from
  * Return: zero on sucess
  */
int main(void)
{
	printf("%s\n", __BASE_FILE__);
	return (0);
}
