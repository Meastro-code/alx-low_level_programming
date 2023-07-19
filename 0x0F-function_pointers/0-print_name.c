#include <stdio.h>

/**
 * print_name - Prints a name using a specified function.
 * @name: Pointer to the name to be printed.
 * @f: Pointer to function that formats and prints name.
 */
void print_name(char *name, void (*f)(char *))
{
f(name);
}
