#include "main.h"

/**
 * factorial - returns factorial of a number.
 * @n: number to find factorial of.
 *
 * Return: factorial of n or -1 if 0
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 0)
{
return (1);
}
return (n * factorial(n - 1));
}
