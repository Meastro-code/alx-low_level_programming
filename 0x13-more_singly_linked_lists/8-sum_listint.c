#include "lists.h"

/**
 * sum_listint - Returns sum of data (n) in listint_t
 * @head: Pointer to head of linked list
 *
 * Return: sum of data (n) in list, or 0
 */
int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *current = head;
while (current != NULL)
{
sum += current->n;
current = current->next;
}
return (sum);
}
