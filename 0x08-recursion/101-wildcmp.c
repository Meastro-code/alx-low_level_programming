/**
 * wildcmp - compares strings returns 1 identical otherwise 0
 * @s1: pointer to first string.
 * @s2: pointer to second string.
 *
 * Return: 1 if s1 and s2 are identical, otherwise 0.
 */
int wildcmp(char *s1, char *s2)
{
if (*s2 == '*')
{
if (*(s2 + 1) == '\0')
{
return (1);
}
if (*s1 == '\0')
{
return (wildcmp(s1, s2 + 1));
}
return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
}
if (*s1 == '\0')
{
return (*s2 == '\0');
}
if (*s1 != *s2)
{
return (0);
}
return (wildcmp(s1 + 1, s2 + 1));
}
