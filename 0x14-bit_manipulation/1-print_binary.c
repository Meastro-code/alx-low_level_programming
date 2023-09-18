#include <stdio.h>
#include "main.h"
/**
 * print_binary - Prints binary representation of number
 * @n: The number to be converted and printed
 *
 * Description: This function takes an
 * unsigned long integer 'n' and prints its
 * binary representation to the standard output
 */
void print_binary(unsigned long int n)
{
if (n > 1)
{
print_binary(n >> 1);
}
putchar((n & 1) ? '1' : '0');
}
