#include "lists.h"

/**
 * sum_dlistint - Returns sum of data (n) in dlistint_t
 * @head: Pointer to the head of the dlistint_t list.
 * Return: Sum of the data, or 0 if the list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
int sum = 0;
while (head != NULL)
{
sum += head->n;
head = head->next;
}
return (sum);
}
