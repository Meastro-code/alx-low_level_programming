/**
 * _strlen - returns the length of a string
 * @s: pointer to the first character
 *
 * This function takes a pointer to
 * a character as its parameter and returns
 * the length of the string pointed to by s.
 * The function iterates through the
 * string, counting the number of characters
 * until it reaches the null character.
 *
 * Return: integer length (Success)
 */
int _strlen(char *s)
{
int length = 0;
while (*s != '\0')
{
length++;
s++;
}
return length;
}
