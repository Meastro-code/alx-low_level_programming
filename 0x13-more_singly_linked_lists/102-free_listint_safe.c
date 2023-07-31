#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - Frees listint_t safely.
 * @h: Pointer to a pointer to head of linked list
 *
 * Return: size of list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
listint_t *tortoise = *h;
listint_t *hare = *h;
listint_t *temp;
size_t count = 0;
while (tortoise && hare && hare->next)
{
tortoise = tortoise->next;
hare = hare->next->next;
if (tortoise == hare)
{
while (*h != tortoise)
{
temp = *h;
*h = (*h)->next;
free(temp);
count++;
}
temp = tortoise;
while (tortoise->next != temp)
{
tortoise = tortoise->next;
count++;
}
free(temp);
count++;
*h = NULL;
break;
}
}
while (*h)
{
temp = *h;
*h = (*h)->next;
free(temp);
count++;
}
return (count);
}
