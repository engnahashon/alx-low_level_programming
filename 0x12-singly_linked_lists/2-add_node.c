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
  * add_node - adds a new node at the beginning of a list_t list.
  * @head: pointer to head of list
  * @str: new node to add
  *
  * Return: pointer to new node
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int length;

	length = str_len(str);
	new = malloc(sizeof(list_t));
	new->str = strdup(str);
	new->len = length;
	new->next = *head;
	*head = new;
	return (new);


}
