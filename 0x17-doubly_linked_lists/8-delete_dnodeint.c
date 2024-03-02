#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes node at index.
 * @head: Pointer to the first element of the list.
 * @index: The index of the node to delete.
 *
 * Return: 1 on success, -1 on failure.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *current, *temp;
unsigned int i;
if (head == NULL || *head == NULL)
{
return (-1);
}
current = *head;
if (index == 0)
{
*head = current->next;
if (*head != NULL)
{
(*head)->prev = NULL;
}
free(current);
return (1);
}
for (i = 0; current != NULL && i < index; i++)
{
current = current->next;
}
if (current == NULL)
{
return (-1);
}
temp = current->prev;
temp->next = current->next;
if (current->next != NULL)
{
current->next->prev = temp;
}
free(current);
return (1);
}
