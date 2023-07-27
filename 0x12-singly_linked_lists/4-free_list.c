#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Frees list_t
 * @head: Pointer to head of linked list to be freed
 */
void free_list(list_t *head)
{
list_t *current;
while (head != NULL)
{
current = head;
head = head->next;
free(current->str);
free(current);
}
}
