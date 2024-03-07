#include <stddef.h>
/**
 * _strstr - Locates the first occurrence of a substring in a string.
 * @haystack: The string to search
 * @needle: The substring to find
 *
 * Return: A pointer to the first occurrence of @needle in @haystack,
 *         or NULL if not found.
 */
char *_strstr(char *haystack, char *needle)
{
while (*haystack != '\0')
{
char *h = haystack;
char *n = needle;
while (*n != '\0' && *h == *n)
{
h++;
n++;
}
if (*n == '\0')
{
return (haystack);
}
haystack++;
}
return (NULL);
}
