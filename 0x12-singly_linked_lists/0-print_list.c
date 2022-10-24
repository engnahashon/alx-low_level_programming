#include "lists.h"
/**
  * print_list - prints all the elements of a list_t
  * @h: list
  *
  * Return: size_t
  */
size_t print_list(const list_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		printf("[%u] %s \n", h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}
