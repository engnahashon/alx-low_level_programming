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
/** _strcpy - copies string
  * @dest: destination
  * @src: src
  *
  * Return: string copied
  */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = get_str_len(src);
	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
