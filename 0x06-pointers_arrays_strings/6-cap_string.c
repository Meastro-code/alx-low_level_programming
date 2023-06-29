/**
 * cap_string - capitalise letters
 * @s: string
 * 
 * Return: string
 */
char *cap_string(char *s)
{
int i;
char prev_char;

for (i = 0, prev_char = s[0]; s[i] != '\0'; i++)
{
if ((prev_char == ' ' || prev_char == '\t' || prev_char == '\n' ||
prev_char == ',' || prev_char == ';' || prev_char == '.' ||
prev_char == '!' || prev_char == '?' || prev_char == '"' ||
prev_char == '(' || prev_char == ')' || prev_char == '{' ||
prev_char == '}') && (s[i] >= 'a' && s[i] <= 'z'))
{
s[i] = s[i] - 'a' + 'A';
}
prev_char = s[i];
}
return (s);
}
