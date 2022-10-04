#include "main.h"
/**
  * creates an array of chars, and initializes it with a specific char.
  * @size: size of array
  * @c: Charater to initiliaze
  *
  * Return: pointer to array, NULL if fails
  */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(str) * size);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
