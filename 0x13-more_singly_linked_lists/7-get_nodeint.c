#include "lists.h"
/**
  * get_nodeint_at_index - eturns the nth node of a listint_t linked list
  * @head: linked list
  * @index: index of the node
  *
  * Return: nth node
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (i < index)
	{
		head = head->next;
		i++;
	}
	return (head);
}
