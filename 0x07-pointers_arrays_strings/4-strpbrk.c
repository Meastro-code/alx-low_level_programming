#include <stddef.h>

/**
 * _strpbrk - searches for bytes
 * @s: first string
 * @accept: second string
 *
 * Return: string
 */
char *_strpbrk(char *s, char *accept)
{
unsigned int i, j;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
return (&s[i]);
}
}
}
return (NULL);
}
