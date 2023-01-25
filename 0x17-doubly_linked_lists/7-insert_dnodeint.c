#include "lists.h"
/**
  * insert_dnodeint_at_index - inserts new node at a given position
  * @h: linked lists
  * @idx: index to insert at
  * @n: new node
  *
  * Return: address of the new node, or NULL if it failed
  */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = h;
	dlistint_t *new_node;
	unsigned int count = 0;

	if (h == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	while (count < idx)
	{
		if (current == NULL)
			return (NULL);
		current = current->next;
		count++;
	}
}
