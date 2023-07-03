/**
 * _memcpy - copies address
 * @dest: first address
 * @src: second address
 * @n: integer value
 *
 * Return: address
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
dest[i] = src[i];
return (dest);
}
