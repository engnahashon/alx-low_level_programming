#include "main.h"
/**
* rev_string - function that reverses a string
* @s: String to be reversed
*/
void rev_string(char *s)
{
	int i = 0, len;
	char tmp[500];

	while (*(s + i))
		len++;
	for (i = len -1; i >= 0; i--)
	{
		*(tmp + i) = *(s + i);
	}
	*s = *tmp;
}

