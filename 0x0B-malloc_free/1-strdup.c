#include "main.h"
/**
  * _strdup - returns a pointer to a new string which is a duplicate of the string
  * #str: duplicate string
  *
  * Return: pointer to mem
  */
char *_strdup(char *str)
{
	char *s;
	int i, len = 0;

	while(*str != '\0')
	{
		len++;
		str ++;
	}
	s = malloc(sizeof(char) * len);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < len - 1; i++)
		s[i] = str[i];
	return (s);


}
