#include "lists.h"

/**
 * listint_len - Returns number of elements in listint_t
 * @h: Pointer to head of linked list
 *
 * Return: number of nodes (elements) in list
 */
size_t listint_len(const listint_t *h)
{
size_t count = 0;
while (h != NULL)
{
h = h->next;
count++;
}
return (count);
}
