#include "lists.h"
/**
  * add_dnodeint - adds a new node at the beginning of a dlist
  * @head: Head of the list
  * @n: New node to be added
  *
  * Return: Address of the new element
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;
	*head = new_node;
	return (new_node);

}
