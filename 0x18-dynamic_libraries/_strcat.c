/**
 * _strcat - Concatenates the string pointed to by src to the end of dest.
 * @dest: The destination buffer
 * @src: The source string
 *
 * Return: A pointer to the destination string (dest).
 */
char *_strcat(char *dest, char *src)
{
int dest_len = 0;
int i = 0;
while (dest[dest_len] != '\0')
{
dest_len++;
}
while (src[i] != '\0')
{
dest[dest_len] = src[i];
dest_len++;
i++;
}
dest[dest_len] = '\0';
return (dest);
}
