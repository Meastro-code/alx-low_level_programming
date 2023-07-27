#include "lists.h"

/**
 * list_len - Returns number of elements in list_t
 * @h: Pointer to head of linked list
 *
 * Return: number of elements in list
 */
size_t list_len(const list_t *h)
{
size_t count = 0;
while (h != NULL)
{
h = h->next;
count++;
}
return (count);
}
