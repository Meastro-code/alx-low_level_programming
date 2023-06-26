#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: pointer to the first character
 *
 * This function takes a pointer to
 * a character as its parameter and prints the
 * string pointed to by s in reverse,
 * followed by a new line. The function first
 * calculates the length of the string
 * and then iterates through it in reverse,
 * print each character using _putchar
 */
void print_rev(char *s)
{
int length = 0;
int i;

while (s[length] != '\0')
{
length++;
}
for (i = length - 1; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
