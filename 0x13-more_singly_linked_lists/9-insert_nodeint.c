#include "lists.h"
/**
  * insert_nodeint_at_index - inserts a new node a given position
  * @head: pointer to list
  * @idx: index where new node tobe inserted
  * @n: new nodei
  *
  * Return: address of new node
  */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *temp;
	listint_t *new;

	temp = *head;
	if (temp == NULL)
		return (NULL);
	while (i < idx)
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
		i++;
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = temp->next;
	temp->next = new;
	return (new);
}
