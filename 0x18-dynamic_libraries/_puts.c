#include <stdio.h> 
/**
 * _puts - Prints a string followed by a newline to stdout.
 * @s: The string to print
 *
 * Return: None (void)
 */
void _puts(char *s)
{
while (*s != '\0')
{
putchar(*s);
s++;
}
putchar('\n');
}
