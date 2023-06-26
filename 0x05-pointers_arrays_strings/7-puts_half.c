#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: pointer to the first character
 *
 * This function takes a pointer to
 * a character as its parameter and prints
 * half of the string pointed to by str
 * followed by a new line. The function
 * first calculates the length of the
 * string and then calculates the starting
 * index of the second half of the string
 * If the number of characters is odd,
 * n is calculated 
 *(length_of_the_string - 1) / 2. 
 * The function then iterates
 * through the second half of the string,
 * printing each character using the
 * _putchar function.
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
