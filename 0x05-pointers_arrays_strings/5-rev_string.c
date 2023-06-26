/**
 * rev_string - reverses a string
 * @s: pointer to the first character
 *
 * This function takes a pointer to
 * a character as its parameter and reverses
 * the string pointed to by s.
 * The function first calculates length of
 * string and then iterates through half,
 * swapping the characters at the
 * beginning and end of string, a temporary variable
 */
void rev_string(char *s)
{
int length = 0;
int i;
while (s[length] != '\0')
{
length++;
}
for (i = 0; i < length / 2; i++)
{
char temp = s[i];
s[i] = s[length - i - 1];
s[length - i - 1] = temp;
}
}
