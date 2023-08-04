#include "main.h"

/**
 * print_binary - Prints binary of number
 * @n:number to print in binary
 */
void print_binary(unsigned long int n)
{
int shift = sizeof(unsigned long int) * 8 - 1;
int flag = 0;
while (shift >= 0)
{
unsigned long int bit = (n >> shift) & 1;
if (bit == 1)
{
flag = 1;
}
if (flag == 1)
{
_putchar('0' + bit);
}
shift--;
}
if (flag == 0)
{
_putchar('0');
}
}

