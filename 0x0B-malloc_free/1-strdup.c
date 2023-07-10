#include <stdlib.h>
#include <string.h>
#include <stddef.h>
/**
 * _strdup - copies string
 * @str: string to copy
 *
 * Return: string
 */
char *_strdup(char *str)
{
char *new_str;
if (str == NULL)
{
return (NULL);
}
new_str = (char*) malloc(strlen(str) + 1);
if (new_str == NULL)
{
return (NULL);
}
strcpy(new_str, str);
return (new_str);
}
