#include "lists.h"

/**
 * dlistint_len - Returns number of elements in dlistint_t
 * @h: Pointer to the head of the doubly linked list.
 * Return: Number of nodes in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
size_t count = 0;
while (h != NULL)
{
h = h->next;
count++;
}
return (count);
}
