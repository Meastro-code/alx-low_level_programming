#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Deletes head node of listint_t
 * @head: Pointer to a pointer to head of linked list
 *
 * Return: data (n) of deleted head node, or 0
 */
int pop_listint(listint_t **head)
{
int data = 0;
listint_t *temp;
if (head == NULL || *head == NULL)
{
return (0);
}
temp = *head;
data = temp->n;
*head = (*head)->next;
free(temp);
return (data);
}
