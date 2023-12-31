#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - Adds new node at the beginning of list_t 
 * @head: Pointer to pointer to head of the linked list
 * @str: string to be added as value of new node
 *
 * Return: address of new element (node), or NULL 
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new_node;
unsigned int len = 0;
while (str[len] != '\0')
{
len++;
}
new_node = malloc(sizeof(list_t));
if (new_node == NULL)
{
return (NULL);
}
new_node->str = strdup(str);
if (new_node->str == NULL)
{
free(new_node);
return (NULL);
}
new_node->len = len;
new_node->next = *head;
*head = new_node;
return (new_node);
}
