#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: pointer to the first character
 *
 * This function takes a pointer to
 * a character as its parameter and prints
 * half of the string pointed.
 */
void puts_half(char *str)
{
int length = 0;
int i;
int n;
while (str[length] != '\0')
{
length++;
}
n = (length + 1) / 2;
for (i = n; i < length; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
