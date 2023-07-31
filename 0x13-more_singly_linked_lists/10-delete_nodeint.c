#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Deletes node given index
 * @head: Pointer to a pointer to head of linked list
 * @index: index of node to be deleted (starting from 0)
 *
 * Return: 1 if deletion is successful, or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int count = 0;
listint_t *current, *temp;
if (head == NULL || *head == NULL)
{
return (-1);
}
if (index == 0)
{
temp = *head;
*head = (*head)->next;
free(temp);
return (1);
}
current = *head;
while (current != NULL)
{
if (count == index - 1)
{
if (current->next == NULL)
{
return (-1);
}
temp = current->next;
current->next = temp->next;
free(temp);
return (1);
}
current = current->next;
count++;
}
return (-1);
}
