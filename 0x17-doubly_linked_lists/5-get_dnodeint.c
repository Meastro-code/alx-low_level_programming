#include "lists.h"

/**
 * get_dnodeint_at_index - Returns nth node of dlistint_t
 * @head: Pointer to the head of the dlistint_t list.
 * @index: Index of the desired node (starting from 0).
 * Return: Address of located node or NULL if does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *current = head;
while (current != NULL && index > 0)
{
current = current->next;
index--;
}
return (current);
}
