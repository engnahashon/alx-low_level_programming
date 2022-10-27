#include "lists.h"
/**
  * sum_listint - sum of all elelmetns
  * @head: linked list
  *
  * Return: sum
  */
int sum_listint(listint_t *head)
{
	unsigned int sum = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);

}
