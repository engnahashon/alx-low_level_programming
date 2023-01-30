#include "lists.h"
/**
  * delete_dnodeint_at_index - deletes the node at index
  * @head: Head of the list
  * @index: Index to delete at
  *
  * Return: 1 on success, -1 on failure
  */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int count = 0;

	if (!head || !*head)
		return (-1);

	if (index == 0)
	{
		*head = current->next;
		if (*head)
			(*head)->prev = NULL;
		free(current);
		return (-1);
	}

	while (count < index)
	{
		if (current->next == NULL)
			return (-1);
		current = current->next;
		count++;
	}
	current->prev->next = current->next;
	if (current->next)
		current->next->prev = current->prev;
	free(current);

	return (1);
}
