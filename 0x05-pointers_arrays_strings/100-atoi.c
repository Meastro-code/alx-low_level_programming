/**
 * _atoi - converts a string to an integer
 * @s: pointer to the first character
 *
 * This function takes a pointer to
 * a character as its parameter and converts
 * the string pointed to by s to an integer.
 *
 * Return: 0 if no numbers,or numbers
 */
int _atoi(char *s)
{
int result = 0;
int sign = 1;
int i = 0;
while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
{
if (s[i] == '-')
{
sign *= -1;
}
i++;
}
while (s[i] != '\0' && s[i] >= '0' && s[i] <= '9')
{
result = result * 10 + (s[i] - '0');
i++;
}
return (result * sign);
}
