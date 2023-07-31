#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - Frees listint_t and sets head to NULL
 * @head: Pointer to a pointer to head of linked list
 */
void free_listint2(listint_t **head)
{
listint_t *current, *temp;
if (head == NULL)
{
return;
}
current = *head;
while (current != NULL)
{
temp = current;
current = current->next;
free(temp);
}
*head = NULL;
}
