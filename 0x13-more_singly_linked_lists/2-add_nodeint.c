#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - Adds new node at beginning of listint_t
 * @head: Pointer to a pointer to head of linked list
 * @n: value to be added as value of new node
 *
 * Return: address of new element (node), or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new_node;
new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
{
return (NULL);
}
new_node->n = n;
new_node->next = *head;
*head = new_node;
return (new_node);
}
