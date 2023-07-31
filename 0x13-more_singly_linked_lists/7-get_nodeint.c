#include "lists.h"

/**
 * get_nodeint_at_index - Returns nth node of listint_t
 * @head: Pointer to head of linked list
 * @index: index of node (starting from 0)
 *
 * Return: Pointer to nth node, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int count = 0;
listint_t *current = head;
while (current != NULL)
{
if (count == index)
{
return (current);
}
current = current->next;
count++;
}
return (NULL);
}
