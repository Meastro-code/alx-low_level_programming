#include <stdlib.h>
#include <string.h>
#include <stddef.h>
/**
 * str_concat - join strings
 * @s1: first string
 * @s2: second string
 *
 * Return: string
 */
char *str_concat(char *s1, char *s2)
{
char *new_str;
int len1 = 0, len2 = 0;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
len1 = strlen(s1);
len2 = strlen(s2);
new_str = (char *) malloc(len1 + len2 + 1);
if (new_str == NULL)
{
return (NULL);
}
strcpy(new_str, s1);
strcat(new_str, s2);
return (new_str);
}
