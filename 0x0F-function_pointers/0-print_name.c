#include <stdio.h>

/**
 * print_name - Prints a name using a specified function.
 * @name: Pointer to the name to be printed.
 * @f: Pointer to the function that formats and prints the name.
 *
 * Description: Calls 'f', passing 'name' as an argument. 'f' handles printing.
 */
void print_name(char *name, void (*f)(char *))
{
f(name);
}
