#include "main.h"

/**
 * puts2 - prints every other character
 * @str: pointer to the first character
 *
 * This function takes a pointer to
 * a character as its parameter and prints
 * every other character of the string
 * pointed to by str, starting with the
 * first character, followed by a new
 * line. The function iterates through the
 * string, printing every other
 * character using the _putchar function until it
 * reaches the null character.
 */
void puts2(char *str)
{
int i = 0;
while (str[i] != '\0')
{
if (i % 2 == 0)
{
_putchar(str[i]);
}
i++;
}
_putchar('\n');
}
