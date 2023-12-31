#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints all elements of a list_t 
 * @h: Pointer to head of the linked list
 *
 * Return: number of nodes (elements) in the list
 */
size_t print_list(const list_t *h)
{
size_t count = 0;
while (h != NULL)
{        
if (h->str == NULL)
{
printf("[0] (nil)\n");
}
else
{
printf("[%u] %s\n", h->len, h->str);
}
h = h->next;
count++;
}
return (count);
}
