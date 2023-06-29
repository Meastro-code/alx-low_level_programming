/**
 * char *_strncat - concatinate strings at n
 * @dest: first string
 * @src: second string
 * @n: using n bytes
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
int i, j;
for (i = 0; dest[i] != '\0'; i++)
{
}
for (j = 0; j < n && src[j] != '\0'; j++)
{
dest[i + j] = src[j];
}
dest[i + j] = '\0';
return (dest);
}
