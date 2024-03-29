#include "lists.h"
/**
  * sum_dlistint - returns sum of all the data n of a dlistint
  * @head: Head of the d list
  *
  * Return: sum, 0 if empty
  */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
