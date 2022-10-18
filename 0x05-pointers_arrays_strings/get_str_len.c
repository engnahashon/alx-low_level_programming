#include "main.h"
/**
  * get_str_len - Gets string length
  * @str: string
  *
  * Return: int str len
  */
int get_str_len(char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}
	return (len);
}
