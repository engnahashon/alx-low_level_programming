#include "lists.h"
/**
  * free_listint2 - frees a list
  * @head: pointer to linked list
  */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head)
	{
		while (*head)
		{
			temp = *head;
			*head = temp->next;
			free(temp);
		}	
	}	
}
