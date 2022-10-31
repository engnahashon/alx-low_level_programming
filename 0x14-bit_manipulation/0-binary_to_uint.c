#include "main.h"
unsigned int _pow(unsigned int a, unsigned int b);
unsigned int get_str_len(const char *str);
/**
  * _pow - gets power
  * @a: base
  * @b: power
  *
  * Return: a raised to power b
  */
unsigned int _pow(unsigned int a, unsigned int b)
{
	if (b == 0)
		return (1);
	if (b == 1)
		return (a * 1);
	else
		return (a * _pow (a, b - 1));
}

/**
  * get_str_len - get string length
  * @str: string
  *
  * Return: string length
  */
unsigned int get_str_len(const char *str)
{
	unsigned int len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}
	return (len);
}
/**
  * binary_to_uint - converts binary number to an unsigned int
  * @b: pointer to a string of 0 and 1 chars
  *
  * Return: unsigned int
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, len, dec = 0;

	if (b == NULL)
		return (0);

	len = get_str_len(b);
	for (i = 0; i < len; i++)
	{
		if (b[i] - '0' == 0 || b[i] - '0' == 1)
			dec = dec + _pow(2, (len - i - 1)) * (b[i]- '0');
		else
			return (0);

	}
	return (dec);
}
