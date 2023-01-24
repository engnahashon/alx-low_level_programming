#include "lists.h"
/**
 * dlistint_len - Returns elements of a dlistint_t list
 * @h: head of the doubly linked list
 *
 * Return: the number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
    size_t count = 0;

    while (h)
    {
        h = h->next;
        count++;
    }
    return (count);
}
