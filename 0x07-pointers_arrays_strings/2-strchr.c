#include <stddef.h>

/**
 * _strchr - prints string
 * @s: string
 * @c: number of characters
 *
 * Return: string
 */
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}
if (*s == c)
{
return (s);
}
return (NULL);
}
