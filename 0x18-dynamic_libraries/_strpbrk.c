#include <stddef.h>
/**
 * _strpbrk - Locates the first occurrence of a character in a string.
 * @s: The string to search
 * @accept: The characters to match
 *
 * Return: A pointer to the first occurrence of any character in @accept
 *         within @s, or NULL if no such character is found.
 */
char *_strpbrk(char *s, char *accept)
{
while (*s != '\0')
{
char *a = accept;
while (*a != '\0')
{
if (*s == *a)
{
return (s);
}
a++;
}
s++;
}
return (NULL);
}
