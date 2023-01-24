#include "lists.h"
/**
  * free_dlistint - free dlistint
  * @head: Head of doubly linked lined
  */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;

	while (current != NULL)
	{
		free(current);
		current = current->next;
	}
}
