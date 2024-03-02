#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts new node at given position.
 * @h: Double pointer to the beginning of the linked list.
 * @idx: Index at which to insert the new node.
 * @n: Data to enter into the new node.
 *
 * Return: Pointer to the new node, or NULL on failure.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new, *current;
unsigned int i;
if (h == NULL)
{
return (NULL);
}
if (idx != 0)
{
current = *h;
for (i = 0; i < idx - 1 && current != NULL; i++)
{
current = current->next;
}
if (current == NULL)
{
return (NULL);
}
}
new = malloc(sizeof(dlistint_t));
if (new == NULL)
{
return (NULL);
}
new->n = n;
if (idx == 0)
{
new->next = *h;
new->prev = NULL;
if (*h != NULL)
{
(*h)->prev = new;
}
*h = new;
}
else
{
new->next = current->next;
new->prev = current;
if (current->next != NULL)
{
current->next->prev = new;
}
current->next = new;
}
return (new);
}
