#include "lists.h"
/**
  * add_nodeint_end - add a new node at the end of a list
  * @head: pointer to singly linked list
  * @n: new node to be added
  *
  * Return: address of new element
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *tmp;

	new = malloc(sizeof(listint_t));
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	tmp = *head;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
	return (new);
}
