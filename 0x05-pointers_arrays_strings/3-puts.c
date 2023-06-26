#include "main.h"

/**
 * _puts - prints a string
 * @str: pointer to the first character
 *
 * This function takes a pointer
 * to a character as its parameter and prints the
 * string pointed to by str,
 * followed by a new line, to stdout. The function
 * iterates through the string,
 * printing each character using the _putchar
 * function until it reaches the null character.
 */
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str);
str++;
}
_putchar('\n');
}
