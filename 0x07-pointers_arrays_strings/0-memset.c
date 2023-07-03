/**
 * _memset - fills up memory
 * @s: string
 * @b: character value
 * @n: integer value
 *
 * Return: string
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
s[i] = b;
return (s);
}
