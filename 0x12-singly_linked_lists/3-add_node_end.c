#include "lists.h"
/**
  * str_len - gets string length
  * @str: string
  *
  * Return: length of str
  */
int str_len(const char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}
	return (len);
}
/**
  * add_node_end - adds a new node at the end of list_t
  * @head: head of list_t
  * @str: node to be added
  *
  * Return: address of new element
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *tmp;
	size_t length = str_len(str);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = length;
	new->next = NULL;

	if (*head == NULL)
	{
		*head  = new;
		return (new);
	}

	tmp = *head;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;

	return (new);
}
