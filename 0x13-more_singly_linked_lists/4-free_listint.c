#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - Frees listint_t
 * @head: Pointer to head of linked list
 */
void free_listint(listint_t *head)
{
listint_t *current;
while (head != NULL)
{
current = head;
head = head->next;
free(current);
}
}
