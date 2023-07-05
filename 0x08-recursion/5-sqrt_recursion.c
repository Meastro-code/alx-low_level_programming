#include "main.h"

/**
 * _sqrt_recursion - returns natural square root of number.
 * @n: number to find square root of.
 *
 * Return: natural square root n -1 less than 0
 */
int find_sqrt(int n, int i);
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 0 || n == 1)
{
return (n);
}
return (find_sqrt(n, 1));
}
int find_sqrt(int n, int i)
{
if (i * i == n)
{
return (i);
}
if (i * i > n)
{
return (-1);
}
return (find_sqrt(n, i + 1));
}
