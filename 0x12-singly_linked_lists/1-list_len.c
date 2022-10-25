#include "lists.h"
/**
  * list_len - returns the number of elements in a linked list_t list
  * @h: linked list
  *
  * Return: number of elements
  */
size_t list_len(const list_t *h)
{
	unsigned int i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
