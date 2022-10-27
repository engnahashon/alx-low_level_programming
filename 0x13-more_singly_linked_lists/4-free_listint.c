#include "lists.h"
/**
  * free_listint - frees a list
  * @head: singly linked list
  */
void free_listint(listint_t *head)
{
	while (head)
	{
		free(head->next);
		free(head);
	}
}
