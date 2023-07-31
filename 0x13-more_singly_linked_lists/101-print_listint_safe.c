#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - Prints listint_t safely
 * @head: Pointer to head of linked list
 *
 * Return: number of nodes in list
 */
size_t print_listint_safe(const listint_t *head)
{
const listint_t *tortoise = head;
const listint_t *hare = head;
size_t count = 0;
while (tortoise && hare && hare->next)
{
tortoise = tortoise->next;
hare = hare->next->next;
if (tortoise == hare)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
count++;
while (head != tortoise)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
count++;
}
printf("-> [%p] %d\n", (void *)tortoise, tortoise->n);
printf("-> [%p] %d\n", (void *)tortoise->next, tortoise->next->n);
count += 2;
break;
}
}
while (tortoise && tortoise != hare)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
count++;
tortoise = tortoise->next;
}
return (count);
}
