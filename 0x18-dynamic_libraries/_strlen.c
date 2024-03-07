/**
 * _strlen - Calculates the length of a string.
 * @s: The string to measure
 *
 * Return: The length of the string (excluding the null terminator).
 */
int _strlen(char *s)
{
int length = 0;
while (*s != '\0')
{
length++;
s++;
}
return (length);
}
