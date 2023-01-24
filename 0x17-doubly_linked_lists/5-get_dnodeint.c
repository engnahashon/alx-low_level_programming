#include "lists.h"
/**
  * get_dnodeint_at_index - returns the nth node of a dlistint
  * @head: Head of list
  * @index: index of the node, starting from 0
  *
  * Return: nth node
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int count = 0;

	while (count < index)
	{
		if (current == NULL)
			return (NULL);
		current = current->next;
		count++;
	}
	return (current);
}
